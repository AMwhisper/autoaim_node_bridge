// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/Heartbeat.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/heartbeat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__Heartbeat__init(node_interface__msg__Heartbeat * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
node_interface__msg__Heartbeat__fini(node_interface__msg__Heartbeat * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
node_interface__msg__Heartbeat__are_equal(const node_interface__msg__Heartbeat * lhs, const node_interface__msg__Heartbeat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
node_interface__msg__Heartbeat__copy(
  const node_interface__msg__Heartbeat * input,
  node_interface__msg__Heartbeat * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

node_interface__msg__Heartbeat *
node_interface__msg__Heartbeat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__Heartbeat * msg = (node_interface__msg__Heartbeat *)allocator.allocate(sizeof(node_interface__msg__Heartbeat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__Heartbeat));
  bool success = node_interface__msg__Heartbeat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__Heartbeat__destroy(node_interface__msg__Heartbeat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__Heartbeat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__Heartbeat__Sequence__init(node_interface__msg__Heartbeat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__Heartbeat * data = NULL;

  if (size) {
    data = (node_interface__msg__Heartbeat *)allocator.zero_allocate(size, sizeof(node_interface__msg__Heartbeat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__Heartbeat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__Heartbeat__fini(&data[i - 1]);
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
node_interface__msg__Heartbeat__Sequence__fini(node_interface__msg__Heartbeat__Sequence * array)
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
      node_interface__msg__Heartbeat__fini(&array->data[i]);
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

node_interface__msg__Heartbeat__Sequence *
node_interface__msg__Heartbeat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__Heartbeat__Sequence * array = (node_interface__msg__Heartbeat__Sequence *)allocator.allocate(sizeof(node_interface__msg__Heartbeat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__Heartbeat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__Heartbeat__Sequence__destroy(node_interface__msg__Heartbeat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__Heartbeat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__Heartbeat__Sequence__are_equal(const node_interface__msg__Heartbeat__Sequence * lhs, const node_interface__msg__Heartbeat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__Heartbeat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__Heartbeat__Sequence__copy(
  const node_interface__msg__Heartbeat__Sequence * input,
  node_interface__msg__Heartbeat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__Heartbeat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__Heartbeat * data =
      (node_interface__msg__Heartbeat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__Heartbeat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__Heartbeat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__Heartbeat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
