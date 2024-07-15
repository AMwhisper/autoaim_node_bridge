// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/DebugDataType.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/debug_data_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__DebugDataType__init(node_interface__msg__DebugDataType * msg)
{
  if (!msg) {
    return false;
  }
  // debug1
  // debug2
  // debug3
  // debug4
  // debug5
  // debug6
  // debug7
  // debug8
  return true;
}

void
node_interface__msg__DebugDataType__fini(node_interface__msg__DebugDataType * msg)
{
  if (!msg) {
    return;
  }
  // debug1
  // debug2
  // debug3
  // debug4
  // debug5
  // debug6
  // debug7
  // debug8
}

bool
node_interface__msg__DebugDataType__are_equal(const node_interface__msg__DebugDataType * lhs, const node_interface__msg__DebugDataType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // debug1
  if (lhs->debug1 != rhs->debug1) {
    return false;
  }
  // debug2
  if (lhs->debug2 != rhs->debug2) {
    return false;
  }
  // debug3
  if (lhs->debug3 != rhs->debug3) {
    return false;
  }
  // debug4
  if (lhs->debug4 != rhs->debug4) {
    return false;
  }
  // debug5
  if (lhs->debug5 != rhs->debug5) {
    return false;
  }
  // debug6
  if (lhs->debug6 != rhs->debug6) {
    return false;
  }
  // debug7
  if (lhs->debug7 != rhs->debug7) {
    return false;
  }
  // debug8
  if (lhs->debug8 != rhs->debug8) {
    return false;
  }
  return true;
}

bool
node_interface__msg__DebugDataType__copy(
  const node_interface__msg__DebugDataType * input,
  node_interface__msg__DebugDataType * output)
{
  if (!input || !output) {
    return false;
  }
  // debug1
  output->debug1 = input->debug1;
  // debug2
  output->debug2 = input->debug2;
  // debug3
  output->debug3 = input->debug3;
  // debug4
  output->debug4 = input->debug4;
  // debug5
  output->debug5 = input->debug5;
  // debug6
  output->debug6 = input->debug6;
  // debug7
  output->debug7 = input->debug7;
  // debug8
  output->debug8 = input->debug8;
  return true;
}

node_interface__msg__DebugDataType *
node_interface__msg__DebugDataType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DebugDataType * msg = (node_interface__msg__DebugDataType *)allocator.allocate(sizeof(node_interface__msg__DebugDataType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__DebugDataType));
  bool success = node_interface__msg__DebugDataType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__DebugDataType__destroy(node_interface__msg__DebugDataType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__DebugDataType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__DebugDataType__Sequence__init(node_interface__msg__DebugDataType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DebugDataType * data = NULL;

  if (size) {
    data = (node_interface__msg__DebugDataType *)allocator.zero_allocate(size, sizeof(node_interface__msg__DebugDataType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__DebugDataType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__DebugDataType__fini(&data[i - 1]);
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
node_interface__msg__DebugDataType__Sequence__fini(node_interface__msg__DebugDataType__Sequence * array)
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
      node_interface__msg__DebugDataType__fini(&array->data[i]);
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

node_interface__msg__DebugDataType__Sequence *
node_interface__msg__DebugDataType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DebugDataType__Sequence * array = (node_interface__msg__DebugDataType__Sequence *)allocator.allocate(sizeof(node_interface__msg__DebugDataType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__DebugDataType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__DebugDataType__Sequence__destroy(node_interface__msg__DebugDataType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__DebugDataType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__DebugDataType__Sequence__are_equal(const node_interface__msg__DebugDataType__Sequence * lhs, const node_interface__msg__DebugDataType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__DebugDataType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__DebugDataType__Sequence__copy(
  const node_interface__msg__DebugDataType__Sequence * input,
  node_interface__msg__DebugDataType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__DebugDataType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__DebugDataType * data =
      (node_interface__msg__DebugDataType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__DebugDataType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__DebugDataType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__DebugDataType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
