// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice
#include "coord_trans_msg/msg/detail/coordtrans__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "coord_trans_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "coord_trans_msg/msg/detail/coordtrans__struct.h"
#include "coord_trans_msg/msg/detail/coordtrans__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // rotation_matrix
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // rotation_matrix

// forward declare type support functions


using _Coordtrans__ros_msg_type = coord_trans_msg__msg__Coordtrans;

static bool _Coordtrans__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Coordtrans__ros_msg_type * ros_message = static_cast<const _Coordtrans__ros_msg_type *>(untyped_ros_message);
  // Field name: translation_x
  {
    cdr << ros_message->translation_x;
  }

  // Field name: translation_y
  {
    cdr << ros_message->translation_y;
  }

  // Field name: translation_z
  {
    cdr << ros_message->translation_z;
  }

  // Field name: rotation_matrix
  {
    size_t size = ros_message->rotation_matrix.size;
    auto array_ptr = ros_message->rotation_matrix.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Coordtrans__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Coordtrans__ros_msg_type * ros_message = static_cast<_Coordtrans__ros_msg_type *>(untyped_ros_message);
  // Field name: translation_x
  {
    cdr >> ros_message->translation_x;
  }

  // Field name: translation_y
  {
    cdr >> ros_message->translation_y;
  }

  // Field name: translation_z
  {
    cdr >> ros_message->translation_z;
  }

  // Field name: rotation_matrix
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rotation_matrix.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->rotation_matrix);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->rotation_matrix, size)) {
      return "failed to create array for field 'rotation_matrix'";
    }
    auto array_ptr = ros_message->rotation_matrix.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coord_trans_msg
size_t get_serialized_size_coord_trans_msg__msg__Coordtrans(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Coordtrans__ros_msg_type * ros_message = static_cast<const _Coordtrans__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name translation_x
  {
    size_t item_size = sizeof(ros_message->translation_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name translation_y
  {
    size_t item_size = sizeof(ros_message->translation_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name translation_z
  {
    size_t item_size = sizeof(ros_message->translation_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_matrix
  {
    size_t array_size = ros_message->rotation_matrix.size;
    auto array_ptr = ros_message->rotation_matrix.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Coordtrans__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_coord_trans_msg__msg__Coordtrans(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_coord_trans_msg
size_t max_serialized_size_coord_trans_msg__msg__Coordtrans(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: translation_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: translation_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: translation_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rotation_matrix
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

static size_t _Coordtrans__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_coord_trans_msg__msg__Coordtrans(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Coordtrans = {
  "coord_trans_msg::msg",
  "Coordtrans",
  _Coordtrans__cdr_serialize,
  _Coordtrans__cdr_deserialize,
  _Coordtrans__get_serialized_size,
  _Coordtrans__max_serialized_size
};

static rosidl_message_type_support_t _Coordtrans__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Coordtrans,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, coord_trans_msg, msg, Coordtrans)() {
  return &_Coordtrans__type_support;
}

#if defined(__cplusplus)
}
#endif
