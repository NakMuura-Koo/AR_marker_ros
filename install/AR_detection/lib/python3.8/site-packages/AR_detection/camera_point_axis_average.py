import message_filters
import rclpy
from rclpy.qos import QoSProfile, ReliabilityPolicy
from sensor_msgs.msg import CompressedImage,CameraInfo
from shigure_core.nodes.node_image_preview import ImagePreviewNode
import cv2
from cv2 import aruco
import numpy as np
import quaternion

from coord_trans_msg.msg import Coordtrans

class camera_point(ImagePreviewNode):
    #ワールド座標をカメラ座標に変換
    
    def __init__(self):
        super().__init__("compressed_image_preview_node")
        shigure_qos = QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT) #QoSの設定
        self.dict_aruco = aruco.getPredefinedDictionary(aruco.DICT_7X7_50) #Arucoマーカーの辞書
        self.parameters = aruco.DetectorParameters() 
        self.detector = aruco.ArucoDetector(self.dict_aruco,self.parameters) #Arucoマーカーの検出器の初期化
        
        self.marker_in_world_coordinate = np.array([0.3,0,0]) #ワールド座標系における、印の位置
        
        self.marker_size = 0.247 #マーカーの１辺 0.1m = 10cm
        self.corners = None #マーカーの角
        self.ids = None #マーカーのID
        
        self.rvecs_list = [] #回転ベクトルのリスト
        self.tvecs_list = [] #並進ベクトルのリスト
        self.rotation_matrices = [] #回転行列のリスト
        self.frame_count = 100 #回転ベクトル、並進ベクトルを取得するフレーム数
        self.is_average = False #回転行列などの平均を取得したかどうか
        
        self.rvec_average = None #回転ベクトルの平均
        self.tvec_average =None #並進ベクトルの平均
        self.rotation_matrix_average = None #回転行列の平均
        self.corners = None #最終フレームの角の座標
        self.ids = None #最終フレームのid
        self.camera_position_world = None #ワールド座標系で見たカメラの座標
        
        self.camera_matrix = None #カメラの焦点行列
        self.dist_coeffs = None #レンズによる画像歪みベクトル
        
        
        self.debug_mode = False #デバッグモードの設定
        
        self.img_size = None #画像サイズ
        self.counter = 0 #フレームカウンター
        
        color_subscriber = message_filters.Subscriber( #shigureカメラのカラーイメージ情報のサブスクライブ
            self, 
            CompressedImage,
            "/rs/color/compressed",
            #"/act_video_img",
            qos_profile=shigure_qos
        )
        
        color_camera_info = message_filters.Subscriber( #shigureカメラのキャリブレーション使用データ(焦点距離、画像歪みなど)のサブスクライブ
            self,
            CameraInfo,
            '/rs/aligned_depth_to_color/cameraInfo',
            qos_profile=shigure_qos
        )
        
        self._publisher = self.create_publisher(
            Coordtrans,
            '/shigure/AR_marker_to_camera',
            10
        )

        self.time_synchronizer = message_filters.TimeSynchronizer( #タイムシンクロナイザーとコールバック関数の呼び出し
            [color_subscriber,color_camera_info], 1000)
        self.time_synchronizer.registerCallback(self.callback)
        
    def callback(self, color_img_src: CompressedImage,camera_info: CameraInfo): #コールバック関数
        
        color_img: np.ndarray = self.bridge.compressed_imgmsg_to_cv2(color_img_src) #shigureカメラ情報の配列を画像にする
        corners, ids, rejected = self.detector.detectMarkers(color_img) #入力画像からArucoマーカーを検出
        result = color_img.copy() #軸表示結果のための配列
        #detection = color_img.copy() #毎フレームの検出結果を表示するための配列
        
        self.camera_matrix = camera_info.k.reshape((3,3)) #カメラ焦点行列の更新
        self.dist_coeffs = np.array(camera_info.d,dtype=np.float32) #画像歪みベクトルの更新
        
        if self.img_size is None: #画像サイズの固定
            self.img_size = color_img.shape[::-1]
        
        if ids is not None or self.is_average: #ARマーカーを検出したら、もしくはもうすでに平均を出していたら
            ID_cheaker = False
            
            if self.is_average:
                ids = self.ids
                corners = self.corners
            
            for idx in range(len(ids)): #ID1のARマーカーの情報のみを抽出
                if ids[idx] == 1:
                    ids = np.array([ids[idx]])
                    corners = (np.array([corners[idx]]))
                    ID_cheaker = True
                    break
                
            if ID_cheaker: #ID1のマーカーがあれば
                
                rvecs, tvecs, _ = aruco.estimatePoseSingleMarkers(corners,self.marker_size,self.camera_matrix,self.dist_coeffs) #回転ベクトル、並進ベクトルの取得
                if len(self.rvecs_list) < self.frame_count:
                    self.rvecs_list.append(rvecs)
                    self.tvecs_list.append(tvecs)
                    #rmat, _ =cv2.Rodrigues(rvecs[0])#ワールド座標系をカメラ座標系に変換するための回転行列
                    #self.rotation_matrices.append(rmat)
                    cv2.namedWindow('average', cv2.WINDOW_NORMAL) #ウィンドウの設定
                    cv2.imshow('average', color_img) #結果の表示
                    cv2.waitKey(1)
                    
                else:
                    if self.rvec_average is None:
                        quaternions = [] #クオータニオンのリスト
                        for rvec in self.rvecs_list:
                            rmat, _ =cv2.Rodrigues(rvec) #回転ベクトルを回転行列に変換
                            quaternions.append(quaternion.from_rotation_matrix(rmat,nonorthogonal=True)) #回転行列をクオータニオンに変換、リストに格納
                        
                        Q = np.array(quaternions)
                        Q_average = np.mean(Q,axis=0)
                        
                        elements =[Q_average.w,Q_average.x,Q_average.y,Q_average.z] #クオータニオンの要素抽出
                        
                        Q_average = np.array(elements)
                        Q_average /= np.linalg.norm(Q_average) #取得したクオータニオンの平均(＆正規化）を算出
                        Q_average = quaternion.as_quat_array(Q_average) #一度numpyをquaternionクラスインスタンスに変更
                        
                        self.rotation_matrix_average =  quaternion.as_rotation_matrix(Q_average)#クオータニオンの平均から回転行列の平均を取得
                        self.rvec_average,_ = cv2.Rodrigues(self.rotation_matrix_average) #回転行列の平均から回転ベクトルを算出
                       
                        
                        self.tvec_average = np.mean(self.tvecs_list, axis=0) #並進ベクトルの平均
                        #print(self.rotation_matrix_average.T)
                        #print(self.tvec_average.T)
                        self.camera_position_world = -np.matmul(self.rotation_matrix_average.T, self.tvec_average[0].T) #ワールド座標におけるカメラ位置の取得


                        self.corners = corners
                        self.ids = ids
                        self.is_average = True #回転行列の平均取得完了
                    
                    if self.is_average:
                        rotation_vector = self.rvec_average
                        translation_vector = self.tvec_average
                        #print(type(self.camera_position_world[0][0]))
                        
                    else:
                        rotation_vector = rvecs[0]
                        translation_vector = tvecs[0]
                    
                    
                    result, points_d = self.draw_axis(result,self.camera_matrix,self.dist_coeffs,rotation_vector,translation_vector,length= 0.8) #ワールド座標軸の描画
                    
                    # print("x軸:",points_d[0].ravel())
                    # print("y軸:",points_d[1].ravel())
                    # print("z軸:",points_d[2].ravel())
                    

                    if self.debug_mode :
                            
                        # print("rvecs",rvecs)
                        # print("tvecs",tvecs)
                        # print("ワールド座標（ARマーカー）からカメラ座標の回転行列")
                        # print(rmat)
                        # print("設定した座標(ワールド座標)")
                        # print(self.marker_in_world_coordinate)
                        # print("カメラ座標系におけるマーカーの位置(並進ベクトル)")
                        # print(f"Marker {ids[0]}: Camera Position (tvec): {tvecs[0]}")
                        #print("変換あと座標")
                        #print(first_transform)
                        #print(second_transform)
                        # print(first_transform[0][0])
                        # print(first_transform[0][1])
                        # print(first_transform[0][2])
                        # print("ワールド座標系におけるカメラ(カメラ座標系原点）の位置")
                        # print(f"Marker {ids[i]}: World Position (inverse transform): {camera_position_world.T}")
                        print("--------------------------------------------------")
                    
                    frame_markers = aruco.drawDetectedMarkers(result, corners, ids) #検出したマーカーを矩形で囲む
                    points_2D, _ = cv2.projectPoints(self.marker_in_world_coordinate,rotation_vector,translation_vector,self.camera_matrix,self.dist_coeffs) #ワールド座標→ピクセル座標に変換
                    point_2D = tuple(points_2D[0].ravel())
                    
                    #print("Projected 2D point in average window:", (point_2D[0],point_2D[1]))
                    #cv2.circle(frame_markers,(int(point_2D[0]),int(point_2D[1])),10,(0,0,0),-1) #円をプロット
                    cv2.line(frame_markers,(int(point_2D[0]-5),int(point_2D[1]-5)),(int(point_2D[0]+5),int(point_2D[1]+5)),(0,0,0),thickness=2,lineType=cv2.LINE_AA)
                    cv2.line(frame_markers,(int(point_2D[0]-5),int(point_2D[1]+5)),(int(point_2D[0]+5),int(point_2D[1]-5)),(0,0,0),thickness=2,lineType=cv2.LINE_AA)
                    
                    if self.is_average:
                        cv2.putText(frame_markers,"average of rotation matrix was calculated.",(100,50),cv2.FONT_HERSHEY_DUPLEX, 1.0, (0,255,0))
                    # print("平均の回転行列")
                    # print(self.rotation_matrix_average)
                    
                    cv2.namedWindow('average', cv2.WINDOW_NORMAL) #ウィンドウの設定
                    cv2.imshow('average', frame_markers) #結果の表示
                    cv2.waitKey(1)
                
                # detection, _ = self.draw_axis(detection,self.camera_matrix,self.dist_coeffs,rvecs[0],tvecs[0],length= 0.3) #ワールド座標軸の描画
                # detected_markers = aruco.drawDetectedMarkers(detection, corners, ids)
                # rotation_mat,_ =  cv2.Rodrigues(rvecs[0]) #回転ベクトルを回転行列に変換
                # points_2D, _ = cv2.projectPoints(self.marker_in_world_coordinate,rvecs[0],tvecs[0],self.camera_matrix,self.dist_coeffs) #ワールド座標→ピクセル座標に変換
                # point_2D = tuple(points_2D[0].ravel()) 
                #print("Projected 2D point in detection window:", (point_2D[0],point_2D[1]))
                #cv2.circle(frame_markers,(int(point_2D[0]),int(point_2D[1])),10,(0,0,0),-1) #円をプロット
                # cv2.line(detected_markers,(int(point_2D[0]-5),int(point_2D[1]-5)),(int(point_2D[0]+5),int(point_2D[1]+5)),(0,0,0),thickness=2,lineType=cv2.LINE_AA)
                # cv2.line(detected_markers,(int(point_2D[0]-5),int(point_2D[1]+5)),(int(point_2D[0]+5),int(point_2D[1]-5)),(0,0,0),thickness=2,lineType=cv2.LINE_AA)
                
                # print("今フレームで算出した回転行列")
                # print(rotation_mat)
                
                # cv2.namedWindow('detection', cv2.WINDOW_NORMAL) #ウィンドウの設定
                # cv2.imshow('detection', detected_markers) #結果の表示
                # cv2.waitKey(1)
                    
            else:
                cv2.namedWindow('average', cv2.WINDOW_NORMAL) #ウィンドウの設定
                cv2.imshow('average', color_img) #結果の表示
                cv2.waitKey(1)
                
                # cv2.namedWindow('detection', cv2.WINDOW_NORMAL) #ウィンドウの設定
                # cv2.imshow('detection', color_img) #結果の表示
                # cv2.waitKey(1)
            
            if self.is_average: #平均が取れたら
                coord_trans_msg = Coordtrans()
                
                coord_trans_msg.translation_x = self.camera_position_world[0][0]
                coord_trans_msg.translation_y = self.camera_position_world[1][0]
                coord_trans_msg.translation_z = self.camera_position_world[2][0]
                coord_trans_msg.rotation_matrix = self.rotation_matrix_average.T.flatten().tolist()
                
                self._publisher.publish(coord_trans_msg) #メッセージをpublish
                
        else:
            cv2.namedWindow('average', cv2.WINDOW_NORMAL) #ウィンドウの設定
            cv2.imshow('average', color_img) #結果の表示
            cv2.waitKey(1)
            
            # cv2.namedWindow('detection', cv2.WINDOW_NORMAL) #ウィンドウの設定
            # cv2.imshow('detection', color_img) #結果の表示
            # cv2.waitKey(1)
        
        self.counter += 1
        


    def draw_axis(self,img,camera_matrix,dist_coeffs,rvec,tvec,length = 0.1): #(ワールド)座標軸の描画
        
        axis = np.float32([[length,0,0],[0,length,0],[0,0,length],[0,0,0]]).reshape(-1,3)
        
        img_pts, _ = cv2.projectPoints(axis,rvec,tvec,camera_matrix,dist_coeffs)
        
        img_pts = np.int32(img_pts).reshape(-1,2)
        origin = tuple(img_pts[3].ravel())
        
        #print("img_pts",img_pts)
        
        # x軸 (赤)
        img = cv2.line(img, origin, tuple(img_pts[0].ravel()), (0, 0, 255), 3)
        # y軸 (緑)
        img = cv2.line(img, origin, tuple(img_pts[1].ravel()), (0, 255, 0), 3)
        # z軸 (青)
        img = cv2.line(img, origin, tuple(img_pts[2].ravel()), (255, 0, 0), 3)
        
        return img,img_pts
    
    
def main(args=None):
    rclpy.init(args=args) #rclpyを初期化

    ar = camera_point() #作成したクラスのインスタンス生成

    try:
        rclpy.spin(ar) #spinでコールバック関数を連続的に実行

    except KeyboardInterrupt:        
        pass
    finally:
        print()
    # 終了処理
        ar.destroy_node()
        rclpy.shutdown()


if __name__ =='__main__':
    main()