// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice

#ifndef COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__FUNCTIONS_H_
#define COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "coord_trans_msg/msg/rosidl_generator_c__visibility_control.h"

#include "coord_trans_msg/msg/detail/coordtrans__struct.h"

/// Initialize msg/Coordtrans message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * coord_trans_msg__msg__Coordtrans
 * )) before or use
 * coord_trans_msg__msg__Coordtrans__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
bool
coord_trans_msg__msg__Coordtrans__init(coord_trans_msg__msg__Coordtrans * msg);

/// Finalize msg/Coordtrans message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
void
coord_trans_msg__msg__Coordtrans__fini(coord_trans_msg__msg__Coordtrans * msg);

/// Create msg/Coordtrans message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * coord_trans_msg__msg__Coordtrans__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
coord_trans_msg__msg__Coordtrans *
coord_trans_msg__msg__Coordtrans__create();

/// Destroy msg/Coordtrans message.
/**
 * It calls
 * coord_trans_msg__msg__Coordtrans__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
void
coord_trans_msg__msg__Coordtrans__destroy(coord_trans_msg__msg__Coordtrans * msg);

/// Check for msg/Coordtrans message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
bool
coord_trans_msg__msg__Coordtrans__are_equal(const coord_trans_msg__msg__Coordtrans * lhs, const coord_trans_msg__msg__Coordtrans * rhs);

/// Copy a msg/Coordtrans message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
bool
coord_trans_msg__msg__Coordtrans__copy(
  const coord_trans_msg__msg__Coordtrans * input,
  coord_trans_msg__msg__Coordtrans * output);

/// Initialize array of msg/Coordtrans messages.
/**
 * It allocates the memory for the number of elements and calls
 * coord_trans_msg__msg__Coordtrans__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
bool
coord_trans_msg__msg__Coordtrans__Sequence__init(coord_trans_msg__msg__Coordtrans__Sequence * array, size_t size);

/// Finalize array of msg/Coordtrans messages.
/**
 * It calls
 * coord_trans_msg__msg__Coordtrans__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
void
coord_trans_msg__msg__Coordtrans__Sequence__fini(coord_trans_msg__msg__Coordtrans__Sequence * array);

/// Create array of msg/Coordtrans messages.
/**
 * It allocates the memory for the array and calls
 * coord_trans_msg__msg__Coordtrans__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
coord_trans_msg__msg__Coordtrans__Sequence *
coord_trans_msg__msg__Coordtrans__Sequence__create(size_t size);

/// Destroy array of msg/Coordtrans messages.
/**
 * It calls
 * coord_trans_msg__msg__Coordtrans__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
void
coord_trans_msg__msg__Coordtrans__Sequence__destroy(coord_trans_msg__msg__Coordtrans__Sequence * array);

/// Check for msg/Coordtrans message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
bool
coord_trans_msg__msg__Coordtrans__Sequence__are_equal(const coord_trans_msg__msg__Coordtrans__Sequence * lhs, const coord_trans_msg__msg__Coordtrans__Sequence * rhs);

/// Copy an array of msg/Coordtrans messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_coord_trans_msg
bool
coord_trans_msg__msg__Coordtrans__Sequence__copy(
  const coord_trans_msg__msg__Coordtrans__Sequence * input,
  coord_trans_msg__msg__Coordtrans__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COORD_TRANS_MSG__MSG__DETAIL__COORDTRANS__FUNCTIONS_H_
