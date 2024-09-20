// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#ifndef COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__BUILDER_HPP_
#define COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__BUILDER_HPP_

#include "coord_trans_msg/msg/detail/coordtrans__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace coord_trans_msg
{

namespace msg
{

namespace builder
{

class Init_Coordtrans_rotation_matrix
{
public:
  explicit Init_Coordtrans_rotation_matrix(::coord_trans_msg::msg::Coordtrans & msg)
  : msg_(msg)
  {}
  ::coord_trans_msg::msg::Coordtrans rotation_matrix(::coord_trans_msg::msg::Coordtrans::_rotation_matrix_type arg)
  {
    msg_.rotation_matrix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coord_trans_msg::msg::Coordtrans msg_;
};

class Init_Coordtrans_translation_z
{
public:
  explicit Init_Coordtrans_translation_z(::coord_trans_msg::msg::Coordtrans & msg)
  : msg_(msg)
  {}
  Init_Coordtrans_rotation_matrix translation_z(::coord_trans_msg::msg::Coordtrans::_translation_z_type arg)
  {
    msg_.translation_z = std::move(arg);
    return Init_Coordtrans_rotation_matrix(msg_);
  }

private:
  ::coord_trans_msg::msg::Coordtrans msg_;
};

class Init_Coordtrans_translation_y
{
public:
  explicit Init_Coordtrans_translation_y(::coord_trans_msg::msg::Coordtrans & msg)
  : msg_(msg)
  {}
  Init_Coordtrans_translation_z translation_y(::coord_trans_msg::msg::Coordtrans::_translation_y_type arg)
  {
    msg_.translation_y = std::move(arg);
    return Init_Coordtrans_translation_z(msg_);
  }

private:
  ::coord_trans_msg::msg::Coordtrans msg_;
};

class Init_Coordtrans_translation_x
{
public:
  Init_Coordtrans_translation_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordtrans_translation_y translation_x(::coord_trans_msg::msg::Coordtrans::_translation_x_type arg)
  {
    msg_.translation_x = std::move(arg);
    return Init_Coordtrans_translation_y(msg_);
  }

private:
  ::coord_trans_msg::msg::Coordtrans msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::coord_trans_msg::msg::Coordtrans>()
{
  return coord_trans_msg::msg::builder::Init_Coordtrans_translation_x();
}

}  // namespace coord_trans_msg

#endif  // COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__BUILDER_HPP_
