// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "coord_trans_msg/msg/detail/coordtrans__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace coord_trans_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Coordtrans_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) coord_trans_msg::msg::Coordtrans(_init);
}

void Coordtrans_fini_function(void * message_memory)
{
  auto typed_message = static_cast<coord_trans_msg::msg::Coordtrans *>(message_memory);
  typed_message->~Coordtrans();
}

size_t size_function__Coordtrans__rotation_matrix(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Coordtrans__rotation_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Coordtrans__rotation_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__Coordtrans__rotation_matrix(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Coordtrans_message_member_array[4] = {
  {
    "translation_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg::msg::Coordtrans, translation_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "translation_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg::msg::Coordtrans, translation_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "translation_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg::msg::Coordtrans, translation_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rotation_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(coord_trans_msg::msg::Coordtrans, rotation_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__Coordtrans__rotation_matrix,  // size() function pointer
    get_const_function__Coordtrans__rotation_matrix,  // get_const(index) function pointer
    get_function__Coordtrans__rotation_matrix,  // get(index) function pointer
    resize_function__Coordtrans__rotation_matrix  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Coordtrans_message_members = {
  "coord_trans_msg::msg",  // message namespace
  "Coordtrans",  // message name
  4,  // number of fields
  sizeof(coord_trans_msg::msg::Coordtrans),
  Coordtrans_message_member_array,  // message members
  Coordtrans_init_function,  // function to initialize message memory (memory has to be allocated)
  Coordtrans_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Coordtrans_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Coordtrans_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace coord_trans_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<coord_trans_msg::msg::Coordtrans>()
{
  return &::coord_trans_msg::msg::rosidl_typesupport_introspection_cpp::Coordtrans_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, coord_trans_msg, msg, Coordtrans)() {
  return &::coord_trans_msg::msg::rosidl_typesupport_introspection_cpp::Coordtrans_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
