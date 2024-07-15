// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/game_robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__GameRobotStatus__init(node_interface__msg__GameRobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // robot_level
  // remain_hp
  // max_hp
  // shooter_id1_17mm_cooling_rate
  // shooter_id1_17mm_cooling_limit
  // shooter_id1_17mm_speed_limit
  // shooter_id2_17mm_cooling_rate
  // shooter_id2_17mm_cooling_limit
  // shooter_id2_17mm_speed_limit
  // shooter_id1_42mm_cooling_rate
  // shooter_id1_42mm_cooling_limit
  // shooter_id1_42mm_speed_limit
  // chassis_power_limit
  // mains_power_gimbal_output
  // mains_power_chassis_output
  // mains_power_shooter_output
  return true;
}

void
node_interface__msg__GameRobotStatus__fini(node_interface__msg__GameRobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // robot_level
  // remain_hp
  // max_hp
  // shooter_id1_17mm_cooling_rate
  // shooter_id1_17mm_cooling_limit
  // shooter_id1_17mm_speed_limit
  // shooter_id2_17mm_cooling_rate
  // shooter_id2_17mm_cooling_limit
  // shooter_id2_17mm_speed_limit
  // shooter_id1_42mm_cooling_rate
  // shooter_id1_42mm_cooling_limit
  // shooter_id1_42mm_speed_limit
  // chassis_power_limit
  // mains_power_gimbal_output
  // mains_power_chassis_output
  // mains_power_shooter_output
}

bool
node_interface__msg__GameRobotStatus__are_equal(const node_interface__msg__GameRobotStatus * lhs, const node_interface__msg__GameRobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // robot_level
  if (lhs->robot_level != rhs->robot_level) {
    return false;
  }
  // remain_hp
  if (lhs->remain_hp != rhs->remain_hp) {
    return false;
  }
  // max_hp
  if (lhs->max_hp != rhs->max_hp) {
    return false;
  }
  // shooter_id1_17mm_cooling_rate
  if (lhs->shooter_id1_17mm_cooling_rate != rhs->shooter_id1_17mm_cooling_rate) {
    return false;
  }
  // shooter_id1_17mm_cooling_limit
  if (lhs->shooter_id1_17mm_cooling_limit != rhs->shooter_id1_17mm_cooling_limit) {
    return false;
  }
  // shooter_id1_17mm_speed_limit
  if (lhs->shooter_id1_17mm_speed_limit != rhs->shooter_id1_17mm_speed_limit) {
    return false;
  }
  // shooter_id2_17mm_cooling_rate
  if (lhs->shooter_id2_17mm_cooling_rate != rhs->shooter_id2_17mm_cooling_rate) {
    return false;
  }
  // shooter_id2_17mm_cooling_limit
  if (lhs->shooter_id2_17mm_cooling_limit != rhs->shooter_id2_17mm_cooling_limit) {
    return false;
  }
  // shooter_id2_17mm_speed_limit
  if (lhs->shooter_id2_17mm_speed_limit != rhs->shooter_id2_17mm_speed_limit) {
    return false;
  }
  // shooter_id1_42mm_cooling_rate
  if (lhs->shooter_id1_42mm_cooling_rate != rhs->shooter_id1_42mm_cooling_rate) {
    return false;
  }
  // shooter_id1_42mm_cooling_limit
  if (lhs->shooter_id1_42mm_cooling_limit != rhs->shooter_id1_42mm_cooling_limit) {
    return false;
  }
  // shooter_id1_42mm_speed_limit
  if (lhs->shooter_id1_42mm_speed_limit != rhs->shooter_id1_42mm_speed_limit) {
    return false;
  }
  // chassis_power_limit
  if (lhs->chassis_power_limit != rhs->chassis_power_limit) {
    return false;
  }
  // mains_power_gimbal_output
  if (lhs->mains_power_gimbal_output != rhs->mains_power_gimbal_output) {
    return false;
  }
  // mains_power_chassis_output
  if (lhs->mains_power_chassis_output != rhs->mains_power_chassis_output) {
    return false;
  }
  // mains_power_shooter_output
  if (lhs->mains_power_shooter_output != rhs->mains_power_shooter_output) {
    return false;
  }
  return true;
}

bool
node_interface__msg__GameRobotStatus__copy(
  const node_interface__msg__GameRobotStatus * input,
  node_interface__msg__GameRobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // robot_level
  output->robot_level = input->robot_level;
  // remain_hp
  output->remain_hp = input->remain_hp;
  // max_hp
  output->max_hp = input->max_hp;
  // shooter_id1_17mm_cooling_rate
  output->shooter_id1_17mm_cooling_rate = input->shooter_id1_17mm_cooling_rate;
  // shooter_id1_17mm_cooling_limit
  output->shooter_id1_17mm_cooling_limit = input->shooter_id1_17mm_cooling_limit;
  // shooter_id1_17mm_speed_limit
  output->shooter_id1_17mm_speed_limit = input->shooter_id1_17mm_speed_limit;
  // shooter_id2_17mm_cooling_rate
  output->shooter_id2_17mm_cooling_rate = input->shooter_id2_17mm_cooling_rate;
  // shooter_id2_17mm_cooling_limit
  output->shooter_id2_17mm_cooling_limit = input->shooter_id2_17mm_cooling_limit;
  // shooter_id2_17mm_speed_limit
  output->shooter_id2_17mm_speed_limit = input->shooter_id2_17mm_speed_limit;
  // shooter_id1_42mm_cooling_rate
  output->shooter_id1_42mm_cooling_rate = input->shooter_id1_42mm_cooling_rate;
  // shooter_id1_42mm_cooling_limit
  output->shooter_id1_42mm_cooling_limit = input->shooter_id1_42mm_cooling_limit;
  // shooter_id1_42mm_speed_limit
  output->shooter_id1_42mm_speed_limit = input->shooter_id1_42mm_speed_limit;
  // chassis_power_limit
  output->chassis_power_limit = input->chassis_power_limit;
  // mains_power_gimbal_output
  output->mains_power_gimbal_output = input->mains_power_gimbal_output;
  // mains_power_chassis_output
  output->mains_power_chassis_output = input->mains_power_chassis_output;
  // mains_power_shooter_output
  output->mains_power_shooter_output = input->mains_power_shooter_output;
  return true;
}

node_interface__msg__GameRobotStatus *
node_interface__msg__GameRobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__GameRobotStatus * msg = (node_interface__msg__GameRobotStatus *)allocator.allocate(sizeof(node_interface__msg__GameRobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__GameRobotStatus));
  bool success = node_interface__msg__GameRobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__GameRobotStatus__destroy(node_interface__msg__GameRobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__GameRobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__GameRobotStatus__Sequence__init(node_interface__msg__GameRobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__GameRobotStatus * data = NULL;

  if (size) {
    data = (node_interface__msg__GameRobotStatus *)allocator.zero_allocate(size, sizeof(node_interface__msg__GameRobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__GameRobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__GameRobotStatus__fini(&data[i - 1]);
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
node_interface__msg__GameRobotStatus__Sequence__fini(node_interface__msg__GameRobotStatus__Sequence * array)
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
      node_interface__msg__GameRobotStatus__fini(&array->data[i]);
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

node_interface__msg__GameRobotStatus__Sequence *
node_interface__msg__GameRobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__GameRobotStatus__Sequence * array = (node_interface__msg__GameRobotStatus__Sequence *)allocator.allocate(sizeof(node_interface__msg__GameRobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__GameRobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__GameRobotStatus__Sequence__destroy(node_interface__msg__GameRobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__GameRobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__GameRobotStatus__Sequence__are_equal(const node_interface__msg__GameRobotStatus__Sequence * lhs, const node_interface__msg__GameRobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__GameRobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__GameRobotStatus__Sequence__copy(
  const node_interface__msg__GameRobotStatus__Sequence * input,
  node_interface__msg__GameRobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__GameRobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__GameRobotStatus * data =
      (node_interface__msg__GameRobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__GameRobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__GameRobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__GameRobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
