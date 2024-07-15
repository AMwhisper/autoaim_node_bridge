// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/GraphicDataType.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/graphic_data_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__GraphicDataType__init(node_interface__msg__GraphicDataType * msg)
{
  if (!msg) {
    return false;
  }
  // graphic_name
  // operate_tpye
  // graphic_tpye
  // layer
  // color
  // start_angle
  // end_angle
  // width
  // start_x
  // start_y
  // radius
  // end_x
  // end_y
  return true;
}

void
node_interface__msg__GraphicDataType__fini(node_interface__msg__GraphicDataType * msg)
{
  if (!msg) {
    return;
  }
  // graphic_name
  // operate_tpye
  // graphic_tpye
  // layer
  // color
  // start_angle
  // end_angle
  // width
  // start_x
  // start_y
  // radius
  // end_x
  // end_y
}

bool
node_interface__msg__GraphicDataType__are_equal(const node_interface__msg__GraphicDataType * lhs, const node_interface__msg__GraphicDataType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // graphic_name
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->graphic_name[i] != rhs->graphic_name[i]) {
      return false;
    }
  }
  // operate_tpye
  if (lhs->operate_tpye != rhs->operate_tpye) {
    return false;
  }
  // graphic_tpye
  if (lhs->graphic_tpye != rhs->graphic_tpye) {
    return false;
  }
  // layer
  if (lhs->layer != rhs->layer) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // start_angle
  if (lhs->start_angle != rhs->start_angle) {
    return false;
  }
  // end_angle
  if (lhs->end_angle != rhs->end_angle) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // start_x
  if (lhs->start_x != rhs->start_x) {
    return false;
  }
  // start_y
  if (lhs->start_y != rhs->start_y) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // end_x
  if (lhs->end_x != rhs->end_x) {
    return false;
  }
  // end_y
  if (lhs->end_y != rhs->end_y) {
    return false;
  }
  return true;
}

bool
node_interface__msg__GraphicDataType__copy(
  const node_interface__msg__GraphicDataType * input,
  node_interface__msg__GraphicDataType * output)
{
  if (!input || !output) {
    return false;
  }
  // graphic_name
  for (size_t i = 0; i < 3; ++i) {
    output->graphic_name[i] = input->graphic_name[i];
  }
  // operate_tpye
  output->operate_tpye = input->operate_tpye;
  // graphic_tpye
  output->graphic_tpye = input->graphic_tpye;
  // layer
  output->layer = input->layer;
  // color
  output->color = input->color;
  // start_angle
  output->start_angle = input->start_angle;
  // end_angle
  output->end_angle = input->end_angle;
  // width
  output->width = input->width;
  // start_x
  output->start_x = input->start_x;
  // start_y
  output->start_y = input->start_y;
  // radius
  output->radius = input->radius;
  // end_x
  output->end_x = input->end_x;
  // end_y
  output->end_y = input->end_y;
  return true;
}

node_interface__msg__GraphicDataType *
node_interface__msg__GraphicDataType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__GraphicDataType * msg = (node_interface__msg__GraphicDataType *)allocator.allocate(sizeof(node_interface__msg__GraphicDataType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__GraphicDataType));
  bool success = node_interface__msg__GraphicDataType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__GraphicDataType__destroy(node_interface__msg__GraphicDataType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__GraphicDataType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__GraphicDataType__Sequence__init(node_interface__msg__GraphicDataType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__GraphicDataType * data = NULL;

  if (size) {
    data = (node_interface__msg__GraphicDataType *)allocator.zero_allocate(size, sizeof(node_interface__msg__GraphicDataType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__GraphicDataType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__GraphicDataType__fini(&data[i - 1]);
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
node_interface__msg__GraphicDataType__Sequence__fini(node_interface__msg__GraphicDataType__Sequence * array)
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
      node_interface__msg__GraphicDataType__fini(&array->data[i]);
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

node_interface__msg__GraphicDataType__Sequence *
node_interface__msg__GraphicDataType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__GraphicDataType__Sequence * array = (node_interface__msg__GraphicDataType__Sequence *)allocator.allocate(sizeof(node_interface__msg__GraphicDataType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__GraphicDataType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__GraphicDataType__Sequence__destroy(node_interface__msg__GraphicDataType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__GraphicDataType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__GraphicDataType__Sequence__are_equal(const node_interface__msg__GraphicDataType__Sequence * lhs, const node_interface__msg__GraphicDataType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__GraphicDataType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__GraphicDataType__Sequence__copy(
  const node_interface__msg__GraphicDataType__Sequence * input,
  node_interface__msg__GraphicDataType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__GraphicDataType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__GraphicDataType * data =
      (node_interface__msg__GraphicDataType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__GraphicDataType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__GraphicDataType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__GraphicDataType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
