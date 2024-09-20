// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "coord_trans_msg/msg/detail/coordtrans__rosidl_typesupport_introspection_c.h"
#include "coord_trans_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "coord_trans_msg/msg/detail/coordtrans__functions.h"
#include "coord_trans_msg/msg/detail/coordtrans__struct.h"


// Include directives for member types
// Member `rotation_matrix`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  coord_trans_msg__msg__Coordtrans__init(message_memory);
}

void Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_fini_function(void * message_memory)
{
  coord_trans_msg__msg__Coordtrans__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_member_array[4] = {
  {
    "translation_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg__msg__Coordtrans, translation_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg__msg__Coordtrans, translation_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg__msg__Coordtrans, translation_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg__msg__Coordtrans, rotation_matrix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_members = {
  "coord_trans_msg__msg",  // message namespace
  "Coordtrans",  // message name
  4,  // number of fields
  sizeof(coord_trans_msg__msg__Coordtrans),
  Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_member_array,  // message members
  Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_init_function,  // function to initialize message memory (memory has to be allocated)
  Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_type_support_handle = {
  0,
  &Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_coord_trans_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, coord_trans_msg, msg, Coordtrans)() {
  if (!Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_type_support_handle.typesupport_identifier) {
    Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Coordtrans__rosidl_typesupport_introspection_c__Coordtrans_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
