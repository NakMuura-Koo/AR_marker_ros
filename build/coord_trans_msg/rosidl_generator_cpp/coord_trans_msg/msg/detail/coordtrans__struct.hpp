// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#ifndef COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__STRUCT_HPP_
#define COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__coord_trans_msg__msg__Coordtrans __attribute__((deprecated))
#else
# define DEPRECATED__coord_trans_msg__msg__Coordtrans __declspec(deprecated)
#endif

namespace coord_trans_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Coordtrans_
{
  using Type = Coordtrans_<ContainerAllocator>;

  explicit Coordtrans_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->translation_x = 0.0;
      this->translation_y = 0.0;
      this->translation_z = 0.0;
    }
  }

  explicit Coordtrans_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->translation_x = 0.0;
      this->translation_y = 0.0;
      this->translation_z = 0.0;
    }
  }

  // field types and members
  using _translation_x_type =
    double;
  _translation_x_type translation_x;
  using _translation_y_type =
    double;
  _translation_y_type translation_y;
  using _translation_z_type =
    double;
  _translation_z_type translation_z;
  using _rotation_matrix_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _rotation_matrix_type rotation_matrix;

  // setters for named parameter idiom
  Type & set__translation_x(
    const double & _arg)
  {
    this->translation_x = _arg;
    return *this;
  }
  Type & set__translation_y(
    const double & _arg)
  {
    this->translation_y = _arg;
    return *this;
  }
  Type & set__translation_z(
    const double & _arg)
  {
    this->translation_z = _arg;
    return *this;
  }
  Type & set__rotation_matrix(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->rotation_matrix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coord_trans_msg::msg::Coordtrans_<ContainerAllocator> *;
  using ConstRawPtr =
    const coord_trans_msg::msg::Coordtrans_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coord_trans_msg::msg::Coordtrans_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coord_trans_msg::msg::Coordtrans_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coord_trans_msg__msg__Coordtrans
    std::shared_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coord_trans_msg__msg__Coordtrans
    std::shared_ptr<coord_trans_msg::msg::Coordtrans_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coordtrans_ & other) const
  {
    if (this->translation_x != other.translation_x) {
      return false;
    }
    if (this->translation_y != other.translation_y) {
      return false;
    }
    if (this->translation_z != other.translation_z) {
      return false;
    }
    if (this->rotation_matrix != other.rotation_matrix) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coordtrans_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coordtrans_

// alias to use template instance with default allocator
using Coordtrans =
  coord_trans_msg::msg::Coordtrans_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace coord_trans_msg

#endif  // COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__STRUCT_HPP_
