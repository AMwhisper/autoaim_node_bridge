// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/BuffInfo.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/buff_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__BuffInfo__init(node_interface__msg__BuffInfo * msg)
{
  if (!msg) {
    return false;
  }
  // power_rune_buff
  return true;
}

void
node_interface__msg__BuffInfo__fini(node_interface__msg__BuffInfo * msg)
{
  if (!msg) {
    return;
  }
  // power_rune_buff
}

bool
node_interface__msg__BuffInfo__are_equal(const node_interface__msg__BuffInfo * lhs, const node_interface__msg__BuffInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // power_rune_buff
  if (lhs->power_rune_buff != rhs->power_rune_buff) {
    return false;
  }
  return true;
}

bool
node_interface__msg__BuffInfo__copy(
  const node_interface__msg__BuffInfo * input,
  node_interface__msg__BuffInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // power_rune_buff
  output->power_rune_buff = input->power_rune_buff;
  return true;
}

node_interface__msg__BuffInfo *
node_interface__msg__BuffInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__BuffInfo * msg = (node_interface__msg__BuffInfo *)allocator.allocate(sizeof(node_interface__msg__BuffInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__BuffInfo));
  bool success = node_interface__msg__BuffInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__BuffInfo__destroy(node_interface__msg__BuffInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__BuffInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__BuffInfo__Sequence__init(node_interface__msg__BuffInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__BuffInfo * data = NULL;

  if (size) {
    data = (node_interface__msg__BuffInfo *)allocator.zero_allocate(size, sizeof(node_interface__msg__BuffInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__BuffInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__BuffInfo__fini(&data[i - 1]);
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
node_interface__msg__BuffInfo__Sequence__fini(node_interface__msg__BuffInfo__Sequence * array)
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
      node_interface__msg__BuffInfo__fini(&array->data[i]);
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

node_interface__msg__BuffInfo__Sequence *
node_interface__msg__BuffInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__BuffInfo__Sequence * array = (node_interface__msg__BuffInfo__Sequence *)allocator.allocate(sizeof(node_interface__msg__BuffInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__BuffInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__BuffInfo__Sequence__destroy(node_interface__msg__BuffInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__BuffInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__BuffInfo__Sequence__are_equal(const node_interface__msg__BuffInfo__Sequence * lhs, const node_interface__msg__BuffInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__BuffInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__BuffInfo__Sequence__copy(
  const node_interface__msg__BuffInfo__Sequence * input,
  node_interface__msg__BuffInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__BuffInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__BuffInfo * data =
      (node_interface__msg__BuffInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__BuffInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__BuffInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__BuffInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
