// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/DartStatus.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/dart_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__DartStatus__init(node_interface__msg__DartStatus * msg)
{
  if (!msg) {
    return false;
  }
  // dart_belong
  // stage_remaining_time
  return true;
}

void
node_interface__msg__DartStatus__fini(node_interface__msg__DartStatus * msg)
{
  if (!msg) {
    return;
  }
  // dart_belong
  // stage_remaining_time
}

bool
node_interface__msg__DartStatus__are_equal(const node_interface__msg__DartStatus * lhs, const node_interface__msg__DartStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dart_belong
  if (lhs->dart_belong != rhs->dart_belong) {
    return false;
  }
  // stage_remaining_time
  if (lhs->stage_remaining_time != rhs->stage_remaining_time) {
    return false;
  }
  return true;
}

bool
node_interface__msg__DartStatus__copy(
  const node_interface__msg__DartStatus * input,
  node_interface__msg__DartStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // dart_belong
  output->dart_belong = input->dart_belong;
  // stage_remaining_time
  output->stage_remaining_time = input->stage_remaining_time;
  return true;
}

node_interface__msg__DartStatus *
node_interface__msg__DartStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartStatus * msg = (node_interface__msg__DartStatus *)allocator.allocate(sizeof(node_interface__msg__DartStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__DartStatus));
  bool success = node_interface__msg__DartStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__DartStatus__destroy(node_interface__msg__DartStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__DartStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__DartStatus__Sequence__init(node_interface__msg__DartStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartStatus * data = NULL;

  if (size) {
    data = (node_interface__msg__DartStatus *)allocator.zero_allocate(size, sizeof(node_interface__msg__DartStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__DartStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__DartStatus__fini(&data[i - 1]);
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
node_interface__msg__DartStatus__Sequence__fini(node_interface__msg__DartStatus__Sequence * array)
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
      node_interface__msg__DartStatus__fini(&array->data[i]);
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

node_interface__msg__DartStatus__Sequence *
node_interface__msg__DartStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartStatus__Sequence * array = (node_interface__msg__DartStatus__Sequence *)allocator.allocate(sizeof(node_interface__msg__DartStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__DartStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__DartStatus__Sequence__destroy(node_interface__msg__DartStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__DartStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__DartStatus__Sequence__are_equal(const node_interface__msg__DartStatus__Sequence * lhs, const node_interface__msg__DartStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__DartStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__DartStatus__Sequence__copy(
  const node_interface__msg__DartStatus__Sequence * input,
  node_interface__msg__DartStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__DartStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__DartStatus * data =
      (node_interface__msg__DartStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__DartStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__DartStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__DartStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
