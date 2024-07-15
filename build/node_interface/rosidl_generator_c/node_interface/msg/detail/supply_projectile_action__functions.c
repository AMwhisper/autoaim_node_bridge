// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/supply_projectile_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
node_interface__msg__SupplyProjectileAction__init(node_interface__msg__SupplyProjectileAction * msg)
{
  if (!msg) {
    return false;
  }
  // supply_projectile_id
  // supply_robot_id
  // supply_projectile_step
  // supply_projectile_num
  return true;
}

void
node_interface__msg__SupplyProjectileAction__fini(node_interface__msg__SupplyProjectileAction * msg)
{
  if (!msg) {
    return;
  }
  // supply_projectile_id
  // supply_robot_id
  // supply_projectile_step
  // supply_projectile_num
}

bool
node_interface__msg__SupplyProjectileAction__are_equal(const node_interface__msg__SupplyProjectileAction * lhs, const node_interface__msg__SupplyProjectileAction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // supply_projectile_id
  if (lhs->supply_projectile_id != rhs->supply_projectile_id) {
    return false;
  }
  // supply_robot_id
  if (lhs->supply_robot_id != rhs->supply_robot_id) {
    return false;
  }
  // supply_projectile_step
  if (lhs->supply_projectile_step != rhs->supply_projectile_step) {
    return false;
  }
  // supply_projectile_num
  if (lhs->supply_projectile_num != rhs->supply_projectile_num) {
    return false;
  }
  return true;
}

bool
node_interface__msg__SupplyProjectileAction__copy(
  const node_interface__msg__SupplyProjectileAction * input,
  node_interface__msg__SupplyProjectileAction * output)
{
  if (!input || !output) {
    return false;
  }
  // supply_projectile_id
  output->supply_projectile_id = input->supply_projectile_id;
  // supply_robot_id
  output->supply_robot_id = input->supply_robot_id;
  // supply_projectile_step
  output->supply_projectile_step = input->supply_projectile_step;
  // supply_projectile_num
  output->supply_projectile_num = input->supply_projectile_num;
  return true;
}

node_interface__msg__SupplyProjectileAction *
node_interface__msg__SupplyProjectileAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__SupplyProjectileAction * msg = (node_interface__msg__SupplyProjectileAction *)allocator.allocate(sizeof(node_interface__msg__SupplyProjectileAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__msg__SupplyProjectileAction));
  bool success = node_interface__msg__SupplyProjectileAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__msg__SupplyProjectileAction__destroy(node_interface__msg__SupplyProjectileAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__msg__SupplyProjectileAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__msg__SupplyProjectileAction__Sequence__init(node_interface__msg__SupplyProjectileAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__SupplyProjectileAction * data = NULL;

  if (size) {
    data = (node_interface__msg__SupplyProjectileAction *)allocator.zero_allocate(size, sizeof(node_interface__msg__SupplyProjectileAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__msg__SupplyProjectileAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__msg__SupplyProjectileAction__fini(&data[i - 1]);
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
node_interface__msg__SupplyProjectileAction__Sequence__fini(node_interface__msg__SupplyProjectileAction__Sequence * array)
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
      node_interface__msg__SupplyProjectileAction__fini(&array->data[i]);
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

node_interface__msg__SupplyProjectileAction__Sequence *
node_interface__msg__SupplyProjectileAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__msg__SupplyProjectileAction__Sequence * array = (node_interface__msg__SupplyProjectileAction__Sequence *)allocator.allocate(sizeof(node_interface__msg__SupplyProjectileAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__msg__SupplyProjectileAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__msg__SupplyProjectileAction__Sequence__destroy(node_interface__msg__SupplyProjectileAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__msg__SupplyProjectileAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__msg__SupplyProjectileAction__Sequence__are_equal(const node_interface__msg__SupplyProjectileAction__Sequence * lhs, const node_interface__msg__SupplyProjectileAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__msg__SupplyProjectileAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__msg__SupplyProjectileAction__Sequence__copy(
  const node_interface__msg__SupplyProjectileAction__Sequence * input,
  node_interface__msg__SupplyProjectileAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__msg__SupplyProjectileAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__msg__SupplyProjectileAction * data =
      (node_interface__msg__SupplyProjectileAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__msg__SupplyProjectileAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__msg__SupplyProjectileAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__msg__SupplyProjectileAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
