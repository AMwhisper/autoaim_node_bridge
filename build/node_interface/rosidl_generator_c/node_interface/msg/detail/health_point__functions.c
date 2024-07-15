// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/HealthPoint.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/health_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__HealthPoint__init(node_interface__msg__HealthPoint * msg)
{
  if (!msg) {
    return false;
  }
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_5_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_5_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
  return true;
}

void
node_interface__msg__HealthPoint__fini(node_interface__msg__HealthPoint * msg)
{
  if (!msg) {
    return;
  }
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_5_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_5_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
}

bool
node_interface__msg__HealthPoint__are_equal(const node_interface__msg__HealthPoint * lhs, const node_interface__msg__HealthPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red_1_robot_hp
  if (lhs->red_1_robot_hp != rhs->red_1_robot_hp) {
    return false;
  }
  // red_2_robot_hp
  if (lhs->red_2_robot_hp != rhs->red_2_robot_hp) {
    return false;
  }
  // red_3_robot_hp
  if (lhs->red_3_robot_hp != rhs->red_3_robot_hp) {
    return false;
  }
  // red_4_robot_hp
  if (lhs->red_4_robot_hp != rhs->red_4_robot_hp) {
    return false;
  }
  // red_5_robot_hp
  if (lhs->red_5_robot_hp != rhs->red_5_robot_hp) {
    return false;
  }
  // red_7_robot_hp
  if (lhs->red_7_robot_hp != rhs->red_7_robot_hp) {
    return false;
  }
  // red_outpost_hp
  if (lhs->red_outpost_hp != rhs->red_outpost_hp) {
    return false;
  }
  // red_base_hp
  if (lhs->red_base_hp != rhs->red_base_hp) {
    return false;
  }
  // blue_1_robot_hp
  if (lhs->blue_1_robot_hp != rhs->blue_1_robot_hp) {
    return false;
  }
  // blue_2_robot_hp
  if (lhs->blue_2_robot_hp != rhs->blue_2_robot_hp) {
    return false;
  }
  // blue_3_robot_hp
  if (lhs->blue_3_robot_hp != rhs->blue_3_robot_hp) {
    return false;
  }
  // blue_4_robot_hp
  if (lhs->blue_4_robot_hp != rhs->blue_4_robot_hp) {
    return false;
  }
  // blue_5_robot_hp
  if (lhs->blue_5_robot_hp != rhs->blue_5_robot_hp) {
    return false;
  }
  // blue_7_robot_hp
  if (lhs->blue_7_robot_hp != rhs->blue_7_robot_hp) {
    return false;
  }
  // blue_outpost_hp
  if (lhs->blue_outpost_hp != rhs->blue_outpost_hp) {
    return false;
  }
  // blue_base_hp
  if (lhs->blue_base_hp != rhs->blue_base_hp) {
    return false;
  }
  return true;
}

bool
node_interface__msg__HealthPoint__copy(
  const node_interface__msg__HealthPoint * input,
  node_interface__msg__HealthPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // red_1_robot_hp
  output->red_1_robot_hp = input->red_1_robot_hp;
  // red_2_robot_hp
  output->red_2_robot_hp = input->red_2_robot_hp;
  // red_3_robot_hp
  output->red_3_robot_hp = input->red_3_robot_hp;
  // red_4_robot_hp
  output->red_4_robot_hp = input->red_4_robot_hp;
  // red_5_robot_hp
  output->red_5_robot_hp = input->red_5_robot_hp;
  // red_7_robot_hp
  output->red_7_robot_hp = input->red_7_robot_hp;
  // red_outpost_hp
  output->red_outpost_hp = input->red_outpost_hp;
  // red_base_hp
  output->red_base_hp = input->red_base_hp;
  // blue_1_robot_hp
  output->blue_1_robot_hp = input->blue_1_robot_hp;
  // blue_2_robot_hp
  output->blue_2_robot_hp = input->blue_2_robot_hp;
  // blue_3_robot_hp
  output->blue_3_robot_hp = input->blue_3_robot_hp;
  // blue_4_robot_hp
  output->blue_4_robot_hp = input->blue_4_robot_hp;
  // blue_5_robot_hp
  output->blue_5_robot_hp = input->blue_5_robot_hp;
  // blue_7_robot_hp
  output->blue_7_robot_hp = input->blue_7_robot_hp;
  // blue_outpost_hp
  output->blue_outpost_hp = input->blue_outpost_hp;
  // blue_base_hp
  output->blue_base_hp = input->blue_base_hp;
  return true;
}

node_interface__msg__HealthPoint *
node_interface__msg__HealthPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__HealthPoint * msg = (node_interface__msg__HealthPoint *)allocator.allocate(sizeof(node_interface__msg__HealthPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__HealthPoint));
  bool success = node_interface__msg__HealthPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__HealthPoint__destroy(node_interface__msg__HealthPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__HealthPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__HealthPoint__Sequence__init(node_interface__msg__HealthPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__HealthPoint * data = NULL;

  if (size) {
    data = (node_interface__msg__HealthPoint *)allocator.zero_allocate(size, sizeof(node_interface__msg__HealthPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__HealthPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__HealthPoint__fini(&data[i - 1]);
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
node_interface__msg__HealthPoint__Sequence__fini(node_interface__msg__HealthPoint__Sequence * array)
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
      node_interface__msg__HealthPoint__fini(&array->data[i]);
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

node_interface__msg__HealthPoint__Sequence *
node_interface__msg__HealthPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__HealthPoint__Sequence * array = (node_interface__msg__HealthPoint__Sequence *)allocator.allocate(sizeof(node_interface__msg__HealthPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__HealthPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__HealthPoint__Sequence__destroy(node_interface__msg__HealthPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__HealthPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__HealthPoint__Sequence__are_equal(const node_interface__msg__HealthPoint__Sequence * lhs, const node_interface__msg__HealthPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__HealthPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__HealthPoint__Sequence__copy(
  const node_interface__msg__HealthPoint__Sequence * input,
  node_interface__msg__HealthPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__HealthPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__HealthPoint * data =
      (node_interface__msg__HealthPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__HealthPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__HealthPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__HealthPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}