// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/DartRemainingTime.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/dart_remaining_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__DartRemainingTime__init(node_interface__msg__DartRemainingTime * msg)
{
  if (!msg) {
    return false;
  }
  // dart_remaining_time
  return true;
}

void
node_interface__msg__DartRemainingTime__fini(node_interface__msg__DartRemainingTime * msg)
{
  if (!msg) {
    return;
  }
  // dart_remaining_time
}

bool
node_interface__msg__DartRemainingTime__are_equal(const node_interface__msg__DartRemainingTime * lhs, const node_interface__msg__DartRemainingTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dart_remaining_time
  if (lhs->dart_remaining_time != rhs->dart_remaining_time) {
    return false;
  }
  return true;
}

bool
node_interface__msg__DartRemainingTime__copy(
  const node_interface__msg__DartRemainingTime * input,
  node_interface__msg__DartRemainingTime * output)
{
  if (!input || !output) {
    return false;
  }
  // dart_remaining_time
  output->dart_remaining_time = input->dart_remaining_time;
  return true;
}

node_interface__msg__DartRemainingTime *
node_interface__msg__DartRemainingTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartRemainingTime * msg = (node_interface__msg__DartRemainingTime *)allocator.allocate(sizeof(node_interface__msg__DartRemainingTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__DartRemainingTime));
  bool success = node_interface__msg__DartRemainingTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__DartRemainingTime__destroy(node_interface__msg__DartRemainingTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__DartRemainingTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__DartRemainingTime__Sequence__init(node_interface__msg__DartRemainingTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartRemainingTime * data = NULL;

  if (size) {
    data = (node_interface__msg__DartRemainingTime *)allocator.zero_allocate(size, sizeof(node_interface__msg__DartRemainingTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__DartRemainingTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__DartRemainingTime__fini(&data[i - 1]);
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
node_interface__msg__DartRemainingTime__Sequence__fini(node_interface__msg__DartRemainingTime__Sequence * array)
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
      node_interface__msg__DartRemainingTime__fini(&array->data[i]);
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

node_interface__msg__DartRemainingTime__Sequence *
node_interface__msg__DartRemainingTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartRemainingTime__Sequence * array = (node_interface__msg__DartRemainingTime__Sequence *)allocator.allocate(sizeof(node_interface__msg__DartRemainingTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__DartRemainingTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__DartRemainingTime__Sequence__destroy(node_interface__msg__DartRemainingTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__DartRemainingTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__DartRemainingTime__Sequence__are_equal(const node_interface__msg__DartRemainingTime__Sequence * lhs, const node_interface__msg__DartRemainingTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__DartRemainingTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__DartRemainingTime__Sequence__copy(
  const node_interface__msg__DartRemainingTime__Sequence * input,
  node_interface__msg__DartRemainingTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__DartRemainingTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__DartRemainingTime * data =
      (node_interface__msg__DartRemainingTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__DartRemainingTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__DartRemainingTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__DartRemainingTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
