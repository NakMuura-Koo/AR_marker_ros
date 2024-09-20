// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coord_trans_msg:msg/Coordtrans.idl
// generated code does not contain a copyright notice
#include "coord_trans_msg/msg/detail/coordtrans__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rotation_matrix`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
coord_trans_msg__msg__Coordtrans__init(coord_trans_msg__msg__Coordtrans * msg)
{
  if (!msg) {
    return false;
  }
  // translation_x
  // translation_y
  // translation_z
  // rotation_matrix
  if (!rosidl_runtime_c__double__Sequence__init(&msg->rotation_matrix, 0)) {
    coord_trans_msg__msg__Coordtrans__fini(msg);
    return false;
  }
  return true;
}

void
coord_trans_msg__msg__Coordtrans__fini(coord_trans_msg__msg__Coordtrans * msg)
{
  if (!msg) {
    return;
  }
  // translation_x
  // translation_y
  // translation_z
  // rotation_matrix
  rosidl_runtime_c__double__Sequence__fini(&msg->rotation_matrix);
}

bool
coord_trans_msg__msg__Coordtrans__are_equal(const coord_trans_msg__msg__Coordtrans * lhs, const coord_trans_msg__msg__Coordtrans * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // translation_x
  if (lhs->translation_x != rhs->translation_x) {
    return false;
  }
  // translation_y
  if (lhs->translation_y != rhs->translation_y) {
    return false;
  }
  // translation_z
  if (lhs->translation_z != rhs->translation_z) {
    return false;
  }
  // rotation_matrix
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->rotation_matrix), &(rhs->rotation_matrix)))
  {
    return false;
  }
  return true;
}

bool
coord_trans_msg__msg__Coordtrans__copy(
  const coord_trans_msg__msg__Coordtrans * input,
  coord_trans_msg__msg__Coordtrans * output)
{
  if (!input || !output) {
    return false;
  }
  // translation_x
  output->translation_x = input->translation_x;
  // translation_y
  output->translation_y = input->translation_y;
  // translation_z
  output->translation_z = input->translation_z;
  // rotation_matrix
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->rotation_matrix), &(output->rotation_matrix)))
  {
    return false;
  }
  return true;
}

coord_trans_msg__msg__Coordtrans *
coord_trans_msg__msg__Coordtrans__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coord_trans_msg__msg__Coordtrans * msg = (coord_trans_msg__msg__Coordtrans *)allocator.allocate(sizeof(coord_trans_msg__msg__Coordtrans), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coord_trans_msg__msg__Coordtrans));
  bool success = coord_trans_msg__msg__Coordtrans__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coord_trans_msg__msg__Coordtrans__destroy(coord_trans_msg__msg__Coordtrans * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coord_trans_msg__msg__Coordtrans__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coord_trans_msg__msg__Coordtrans__Sequence__init(coord_trans_msg__msg__Coordtrans__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coord_trans_msg__msg__Coordtrans * data = NULL;

  if (size) {
    data = (coord_trans_msg__msg__Coordtrans *)allocator.zero_allocate(size, sizeof(coord_trans_msg__msg__Coordtrans), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coord_trans_msg__msg__Coordtrans__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coord_trans_msg__msg__Coordtrans__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
coord_trans_msg__msg__Coordtrans__Sequence__fini(coord_trans_msg__msg__Coordtrans__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      coord_trans_msg__msg__Coordtrans__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

coord_trans_msg__msg__Coordtrans__Sequence *
coord_trans_msg__msg__Coordtrans__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coord_trans_msg__msg__Coordtrans__Sequence * array = (coord_trans_msg__msg__Coordtrans__Sequence *)allocator.allocate(sizeof(coord_trans_msg__msg__Coordtrans__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coord_trans_msg__msg__Coordtrans__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coord_trans_msg__msg__Coordtrans__Sequence__destroy(coord_trans_msg__msg__Coordtrans__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coord_trans_msg__msg__Coordtrans__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coord_trans_msg__msg__Coordtrans__Sequence__are_equal(const coord_trans_msg__msg__Coordtrans__Sequence * lhs, const coord_trans_msg__msg__Coordtrans__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coord_trans_msg__msg__Coordtrans__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coord_trans_msg__msg__Coordtrans__Sequence__copy(
  const coord_trans_msg__msg__Coordtrans__Sequence * input,
  coord_trans_msg__msg__Coordtrans__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coord_trans_msg__msg__Coordtrans);
    coord_trans_msg__msg__Coordtrans * data =
      (coord_trans_msg__msg__Coordtrans *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coord_trans_msg__msg__Coordtrans__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          coord_trans_msg__msg__Coordtrans__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coord_trans_msg__msg__Coordtrans__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
