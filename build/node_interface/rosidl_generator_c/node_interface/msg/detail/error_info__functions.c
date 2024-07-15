// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/ErrorInfo.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/error_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__ErrorInfo__init(node_interface__msg__ErrorInfo * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // text
  return true;
}

void
node_interface__msg__ErrorInfo__fini(node_interface__msg__ErrorInfo * msg)
{
  if (!msg) {
    return;
  }
  // code
  // text
}

bool
node_interface__msg__ErrorInfo__are_equal(const node_interface__msg__ErrorInfo * lhs, const node_interface__msg__ErrorInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // text
  for (size_t i = 0; i < 22; ++i) {
    if (lhs->text[i] != rhs->text[i]) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__ErrorInfo__copy(
  const node_interface__msg__ErrorInfo * input,
  node_interface__msg__ErrorInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // text
  for (size_t i = 0; i < 22; ++i) {
    output->text[i] = input->text[i];
  }
  return true;
}

node_interface__msg__ErrorInfo *
node_interface__msg__ErrorInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__ErrorInfo * msg = (node_interface__msg__ErrorInfo *)allocator.allocate(sizeof(node_interface__msg__ErrorInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__ErrorInfo));
  bool success = node_interface__msg__ErrorInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__ErrorInfo__destroy(node_interface__msg__ErrorInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__ErrorInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__ErrorInfo__Sequence__init(node_interface__msg__ErrorInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__ErrorInfo * data = NULL;

  if (size) {
    data = (node_interface__msg__ErrorInfo *)allocator.zero_allocate(size, sizeof(node_interface__msg__ErrorInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__ErrorInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__ErrorInfo__fini(&data[i - 1]);
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
node_interface__msg__ErrorInfo__Sequence__fini(node_interface__msg__ErrorInfo__Sequence * array)
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
      node_interface__msg__ErrorInfo__fini(&array->data[i]);
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

node_interface__msg__ErrorInfo__Sequence *
node_interface__msg__ErrorInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__ErrorInfo__Sequence * array = (node_interface__msg__ErrorInfo__Sequence *)allocator.allocate(sizeof(node_interface__msg__ErrorInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__ErrorInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__ErrorInfo__Sequence__destroy(node_interface__msg__ErrorInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__ErrorInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__ErrorInfo__Sequence__are_equal(const node_interface__msg__ErrorInfo__Sequence * lhs, const node_interface__msg__ErrorInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__ErrorInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__ErrorInfo__Sequence__copy(
  const node_interface__msg__ErrorInfo__Sequence * input,
  node_interface__msg__ErrorInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__ErrorInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__ErrorInfo * data =
      (node_interface__msg__ErrorInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__ErrorInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__ErrorInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__ErrorInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
