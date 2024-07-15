// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/ClientCustomGraphicFive.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/client_custom_graphic_five__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `grapic_data_struct`
#include "node_interface/msg/detail/graphic_data_type__functions.h"

bool
node_interface__msg__ClientCustomGraphicFive__init(node_interface__msg__ClientCustomGraphicFive * msg)
{
  if (!msg) {
    return false;
  }
  // data_cmd_id
  // send_id
  // receiver_id
  // grapic_data_struct
  for (size_t i = 0; i < 5; ++i) {
    if (!node_interface__msg__GraphicDataType__init(&msg->grapic_data_struct[i])) {
      node_interface__msg__ClientCustomGraphicFive__fini(msg);
      return false;
    }
  }
  return true;
}

void
node_interface__msg__ClientCustomGraphicFive__fini(node_interface__msg__ClientCustomGraphicFive * msg)
{
  if (!msg) {
    return;
  }
  // data_cmd_id
  // send_id
  // receiver_id
  // grapic_data_struct
  for (size_t i = 0; i < 5; ++i) {
    node_interface__msg__GraphicDataType__fini(&msg->grapic_data_struct[i]);
  }
}

bool
node_interface__msg__ClientCustomGraphicFive__are_equal(const node_interface__msg__ClientCustomGraphicFive * lhs, const node_interface__msg__ClientCustomGraphicFive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data_cmd_id
  if (lhs->data_cmd_id != rhs->data_cmd_id) {
    return false;
  }
  // send_id
  if (lhs->send_id != rhs->send_id) {
    return false;
  }
  // receiver_id
  if (lhs->receiver_id != rhs->receiver_id) {
    return false;
  }
  // grapic_data_struct
  for (size_t i = 0; i < 5; ++i) {
    if (!node_interface__msg__GraphicDataType__are_equal(
        &(lhs->grapic_data_struct[i]), &(rhs->grapic_data_struct[i])))
    {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__ClientCustomGraphicFive__copy(
  const node_interface__msg__ClientCustomGraphicFive * input,
  node_interface__msg__ClientCustomGraphicFive * output)
{
  if (!input || !output) {
    return false;
  }
  // data_cmd_id
  output->data_cmd_id = input->data_cmd_id;
  // send_id
  output->send_id = input->send_id;
  // receiver_id
  output->receiver_id = input->receiver_id;
  // grapic_data_struct
  for (size_t i = 0; i < 5; ++i) {
    if (!node_interface__msg__GraphicDataType__copy(
        &(input->grapic_data_struct[i]), &(output->grapic_data_struct[i])))
    {
      return false;
    }
  }
  return true;
}

node_interface__msg__ClientCustomGraphicFive *
node_interface__msg__ClientCustomGraphicFive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__ClientCustomGraphicFive * msg = (node_interface__msg__ClientCustomGraphicFive *)allocator.allocate(sizeof(node_interface__msg__ClientCustomGraphicFive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__ClientCustomGraphicFive));
  bool success = node_interface__msg__ClientCustomGraphicFive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__ClientCustomGraphicFive__destroy(node_interface__msg__ClientCustomGraphicFive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__ClientCustomGraphicFive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__ClientCustomGraphicFive__Sequence__init(node_interface__msg__ClientCustomGraphicFive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__ClientCustomGraphicFive * data = NULL;

  if (size) {
    data = (node_interface__msg__ClientCustomGraphicFive *)allocator.zero_allocate(size, sizeof(node_interface__msg__ClientCustomGraphicFive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__ClientCustomGraphicFive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__ClientCustomGraphicFive__fini(&data[i - 1]);
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
node_interface__msg__ClientCustomGraphicFive__Sequence__fini(node_interface__msg__ClientCustomGraphicFive__Sequence * array)
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
      node_interface__msg__ClientCustomGraphicFive__fini(&array->data[i]);
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

node_interface__msg__ClientCustomGraphicFive__Sequence *
node_interface__msg__ClientCustomGraphicFive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__ClientCustomGraphicFive__Sequence * array = (node_interface__msg__ClientCustomGraphicFive__Sequence *)allocator.allocate(sizeof(node_interface__msg__ClientCustomGraphicFive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__ClientCustomGraphicFive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__ClientCustomGraphicFive__Sequence__destroy(node_interface__msg__ClientCustomGraphicFive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__ClientCustomGraphicFive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__ClientCustomGraphicFive__Sequence__are_equal(const node_interface__msg__ClientCustomGraphicFive__Sequence * lhs, const node_interface__msg__ClientCustomGraphicFive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__ClientCustomGraphicFive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__ClientCustomGraphicFive__Sequence__copy(
  const node_interface__msg__ClientCustomGraphicFive__Sequence * input,
  node_interface__msg__ClientCustomGraphicFive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__ClientCustomGraphicFive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__ClientCustomGraphicFive * data =
      (node_interface__msg__ClientCustomGraphicFive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__ClientCustomGraphicFive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__ClientCustomGraphicFive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__ClientCustomGraphicFive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
