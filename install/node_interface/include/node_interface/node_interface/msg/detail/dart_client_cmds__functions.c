// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/DartClientCmds.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/dart_client_cmds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__DartClientCmds__init(node_interface__msg__DartClientCmds * msg)
{
  if (!msg) {
    return false;
  }
  // dart_launch_opening_status
  // dart_attack_target
  // target_change_time
  // first_dart_speed
  // second_dart_speed
  // third_dart_speed
  // fourth_dart_speed
  // last_dart_launch_time
  // operate_launch_cmd_time
  return true;
}

void
node_interface__msg__DartClientCmds__fini(node_interface__msg__DartClientCmds * msg)
{
  if (!msg) {
    return;
  }
  // dart_launch_opening_status
  // dart_attack_target
  // target_change_time
  // first_dart_speed
  // second_dart_speed
  // third_dart_speed
  // fourth_dart_speed
  // last_dart_launch_time
  // operate_launch_cmd_time
}

bool
node_interface__msg__DartClientCmds__are_equal(const node_interface__msg__DartClientCmds * lhs, const node_interface__msg__DartClientCmds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dart_launch_opening_status
  if (lhs->dart_launch_opening_status != rhs->dart_launch_opening_status) {
    return false;
  }
  // dart_attack_target
  if (lhs->dart_attack_target != rhs->dart_attack_target) {
    return false;
  }
  // target_change_time
  if (lhs->target_change_time != rhs->target_change_time) {
    return false;
  }
  // first_dart_speed
  if (lhs->first_dart_speed != rhs->first_dart_speed) {
    return false;
  }
  // second_dart_speed
  if (lhs->second_dart_speed != rhs->second_dart_speed) {
    return false;
  }
  // third_dart_speed
  if (lhs->third_dart_speed != rhs->third_dart_speed) {
    return false;
  }
  // fourth_dart_speed
  if (lhs->fourth_dart_speed != rhs->fourth_dart_speed) {
    return false;
  }
  // last_dart_launch_time
  if (lhs->last_dart_launch_time != rhs->last_dart_launch_time) {
    return false;
  }
  // operate_launch_cmd_time
  if (lhs->operate_launch_cmd_time != rhs->operate_launch_cmd_time) {
    return false;
  }
  return true;
}

bool
node_interface__msg__DartClientCmds__copy(
  const node_interface__msg__DartClientCmds * input,
  node_interface__msg__DartClientCmds * output)
{
  if (!input || !output) {
    return false;
  }
  // dart_launch_opening_status
  output->dart_launch_opening_status = input->dart_launch_opening_status;
  // dart_attack_target
  output->dart_attack_target = input->dart_attack_target;
  // target_change_time
  output->target_change_time = input->target_change_time;
  // first_dart_speed
  output->first_dart_speed = input->first_dart_speed;
  // second_dart_speed
  output->second_dart_speed = input->second_dart_speed;
  // third_dart_speed
  output->third_dart_speed = input->third_dart_speed;
  // fourth_dart_speed
  output->fourth_dart_speed = input->fourth_dart_speed;
  // last_dart_launch_time
  output->last_dart_launch_time = input->last_dart_launch_time;
  // operate_launch_cmd_time
  output->operate_launch_cmd_time = input->operate_launch_cmd_time;
  return true;
}

node_interface__msg__DartClientCmds *
node_interface__msg__DartClientCmds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartClientCmds * msg = (node_interface__msg__DartClientCmds *)allocator.allocate(sizeof(node_interface__msg__DartClientCmds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__DartClientCmds));
  bool success = node_interface__msg__DartClientCmds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__DartClientCmds__destroy(node_interface__msg__DartClientCmds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__DartClientCmds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__DartClientCmds__Sequence__init(node_interface__msg__DartClientCmds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartClientCmds * data = NULL;

  if (size) {
    data = (node_interface__msg__DartClientCmds *)allocator.zero_allocate(size, sizeof(node_interface__msg__DartClientCmds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__DartClientCmds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__DartClientCmds__fini(&data[i - 1]);
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
node_interface__msg__DartClientCmds__Sequence__fini(node_interface__msg__DartClientCmds__Sequence * array)
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
      node_interface__msg__DartClientCmds__fini(&array->data[i]);
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

node_interface__msg__DartClientCmds__Sequence *
node_interface__msg__DartClientCmds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__DartClientCmds__Sequence * array = (node_interface__msg__DartClientCmds__Sequence *)allocator.allocate(sizeof(node_interface__msg__DartClientCmds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__DartClientCmds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__DartClientCmds__Sequence__destroy(node_interface__msg__DartClientCmds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__DartClientCmds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__DartClientCmds__Sequence__are_equal(const node_interface__msg__DartClientCmds__Sequence * lhs, const node_interface__msg__DartClientCmds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__DartClientCmds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__DartClientCmds__Sequence__copy(
  const node_interface__msg__DartClientCmds__Sequence * input,
  node_interface__msg__DartClientCmds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__DartClientCmds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__DartClientCmds * data =
      (node_interface__msg__DartClientCmds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__DartClientCmds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__DartClientCmds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__DartClientCmds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
