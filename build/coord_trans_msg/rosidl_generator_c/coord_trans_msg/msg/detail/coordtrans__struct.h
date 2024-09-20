// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#ifndef COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__STRUCT_H_
#define COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rotation_matrix'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Coordtrans in the package coord_trans_msg.
typedef struct coord_trans_msg__msg__Coordtrans
{
  double translation_x;
  double translation_y;
  double translation_z;
  rosidl_runtime_c__double__Sequence rotation_matrix;
} coord_trans_msg__msg__Coordtrans;

// Struct for a sequence of coord_trans_msg__msg__Coordtrans.
typedef struct coord_trans_msg__msg__Coordtrans__Sequence
{
  coord_trans_msg__msg__Coordtrans * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} coord_trans_msg__msg__Coordtrans__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__STRUCT_H_
