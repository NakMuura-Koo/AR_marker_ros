// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#ifndef COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__TRAITS_HPP_
#define COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__TRAITS_HPP_

#include "coord_trans_msg/msg/detail/coordtrans__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<coord_trans_msg::msg::Coordtrans>()
{
  return "coord_trans_msg::msg::Coordtrans";
}

template<>
inline const char * name<coord_trans_msg::msg::Coordtrans>()
{
  return "coord_trans_msg/msg/Coordtrans";
}

template<>
struct has_fixed_size<coord_trans_msg::msg::Coordtrans>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<coord_trans_msg::msg::Coordtrans>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<coord_trans_msg::msg::Coordtrans>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__TRAITS_HPP_
