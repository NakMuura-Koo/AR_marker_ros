// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#ifndef COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "coord_trans_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "coord_trans_msg/msg/detail/coordtrans__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace coord_trans_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
cdr_serialize(
  const coord_trans_msg::msg::Coordtrans & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  coord_trans_msg::msg::Coordtrans & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
get_serialized_size(
  const coord_trans_msg::msg::Coordtrans & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
max_serialized_size_Coordtrans(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace coord_trans_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coord_trans_msg, msg, Coordtrans)();

#ifdef __cplusplus
}
#endif

#endif  // COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
