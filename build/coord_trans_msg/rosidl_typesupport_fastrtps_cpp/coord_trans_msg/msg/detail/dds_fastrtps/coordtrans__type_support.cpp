// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice
#include "coord_trans_msg/msg/detail/coordtrans__rosidl_typesupport_fastrtps_cpp.hpp"
#include "coord_trans_msg/msg/detail/coordtrans__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: translation_x
  cdr << ros_message.translation_x;
  // Member: translation_y
  cdr << ros_message.translation_y;
  // Member: translation_z
  cdr << ros_message.translation_z;
  // Member: rotation_matrix
  {
    cdr << ros_message.rotation_matrix;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  coord_trans_msg::msg::Coordtrans & ros_message)
{
  // Member: translation_x
  cdr >> ros_message.translation_x;

  // Member: translation_y
  cdr >> ros_message.translation_y;

  // Member: translation_z
  cdr >> ros_message.translation_z;

  // Member: rotation_matrix
  {
    cdr >> ros_message.rotation_matrix;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
get_serialized_size(
  const coord_trans_msg::msg::Coordtrans & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: translation_x
  {
    size_t item_size = sizeof(ros_message.translation_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: translation_y
  {
    size_t item_size = sizeof(ros_message.translation_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: translation_z
  {
    size_t item_size = sizeof(ros_message.translation_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotation_matrix
  {
    size_t array_size = ros_message.rotation_matrix.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rotation_matrix[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_coord_trans_msg
max_serialized_size_Coordtrans(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: translation_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: translation_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: translation_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rotation_matrix
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Coordtrans__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const coord_trans_msg::msg::Coordtrans *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Coordtrans__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<coord_trans_msg::msg::Coordtrans *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Coordtrans__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const coord_trans_msg::msg::Coordtrans *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Coordtrans__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Coordtrans(full_bounded, 0);
}

static message_type_support_callbacks_t _Coordtrans__callbacks = {
  "coord_trans_msg::msg",
  "Coordtrans",
  _Coordtrans__cdr_serialize,
  _Coordtrans__cdr_deserialize,
  _Coordtrans__get_serialized_size,
  _Coordtrans__max_serialized_size
};

static rosidl_message_type_support_t _Coordtrans__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Coordtrans__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace coord_trans_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_coord_trans_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<coord_trans_msg::msg::Coordtrans>()
{
  return &coord_trans_msg::msg::typesupport_fastrtps_cpp::_Coordtrans__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, coord_trans_msg, msg, Coordtrans)() {
  return &coord_trans_msg::msg::typesupport_fastrtps_cpp::_Coordtrans__handle;
}

#ifdef __cplusplus
}
#endif
