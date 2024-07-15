// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:srv/SendJointState.idl
// generated code does not contain a copyright notice
#include "node_interface/srv/detail/send_joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
node_interface__srv__SendJointState_Request__init(node_interface__srv__SendJointState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // state_code
  // base_joint_position
  // base_joint_speed
  // shoulder_joint_position
  // shoulder_joint_speed
  // elbow_joint_position
  // elbow_joint_speed
  // wrist_joint_1_position
  // wrist_joint_1_speed
  // wrist_joint_2_position
  // wrist_joint_2_speed
  return true;
}

void
node_interface__srv__SendJointState_Request__fini(node_interface__srv__SendJointState_Request * msg)
{
  if (!msg) {
    return;
  }
  // state_code
  // base_joint_position
  // base_joint_speed
  // shoulder_joint_position
  // shoulder_joint_speed
  // elbow_joint_position
  // elbow_joint_speed
  // wrist_joint_1_position
  // wrist_joint_1_speed
  // wrist_joint_2_position
  // wrist_joint_2_speed
}

bool
node_interface__srv__SendJointState_Request__are_equal(const node_interface__srv__SendJointState_Request * lhs, const node_interface__srv__SendJointState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state_code
  if (lhs->state_code != rhs->state_code) {
    return false;
  }
  // base_joint_position
  if (lhs->base_joint_position != rhs->base_joint_position) {
    return false;
  }
  // base_joint_speed
  if (lhs->base_joint_speed != rhs->base_joint_speed) {
    return false;
  }
  // shoulder_joint_position
  if (lhs->shoulder_joint_position != rhs->shoulder_joint_position) {
    return false;
  }
  // shoulder_joint_speed
  if (lhs->shoulder_joint_speed != rhs->shoulder_joint_speed) {
    return false;
  }
  // elbow_joint_position
  if (lhs->elbow_joint_position != rhs->elbow_joint_position) {
    return false;
  }
  // elbow_joint_speed
  if (lhs->elbow_joint_speed != rhs->elbow_joint_speed) {
    return false;
  }
  // wrist_joint_1_position
  if (lhs->wrist_joint_1_position != rhs->wrist_joint_1_position) {
    return false;
  }
  // wrist_joint_1_speed
  if (lhs->wrist_joint_1_speed != rhs->wrist_joint_1_speed) {
    return false;
  }
  // wrist_joint_2_position
  if (lhs->wrist_joint_2_position != rhs->wrist_joint_2_position) {
    return false;
  }
  // wrist_joint_2_speed
  if (lhs->wrist_joint_2_speed != rhs->wrist_joint_2_speed) {
    return false;
  }
  return true;
}

bool
node_interface__srv__SendJointState_Request__copy(
  const node_interface__srv__SendJointState_Request * input,
  node_interface__srv__SendJointState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // state_code
  output->state_code = input->state_code;
  // base_joint_position
  output->base_joint_position = input->base_joint_position;
  // base_joint_speed
  output->base_joint_speed = input->base_joint_speed;
  // shoulder_joint_position
  output->shoulder_joint_position = input->shoulder_joint_position;
  // shoulder_joint_speed
  output->shoulder_joint_speed = input->shoulder_joint_speed;
  // elbow_joint_position
  output->elbow_joint_position = input->elbow_joint_position;
  // elbow_joint_speed
  output->elbow_joint_speed = input->elbow_joint_speed;
  // wrist_joint_1_position
  output->wrist_joint_1_position = input->wrist_joint_1_position;
  // wrist_joint_1_speed
  output->wrist_joint_1_speed = input->wrist_joint_1_speed;
  // wrist_joint_2_position
  output->wrist_joint_2_position = input->wrist_joint_2_position;
  // wrist_joint_2_speed
  output->wrist_joint_2_speed = input->wrist_joint_2_speed;
  return true;
}

node_interface__srv__SendJointState_Request *
node_interface__srv__SendJointState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendJointState_Request * msg = (node_interface__srv__SendJointState_Request *)allocator.allocate(sizeof(node_interface__srv__SendJointState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__srv__SendJointState_Request));
  bool success = node_interface__srv__SendJointState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__srv__SendJointState_Request__destroy(node_interface__srv__SendJointState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__srv__SendJointState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__srv__SendJointState_Request__Sequence__init(node_interface__srv__SendJointState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendJointState_Request * data = NULL;

  if (size) {
    data = (node_interface__srv__SendJointState_Request *)allocator.zero_allocate(size, sizeof(node_interface__srv__SendJointState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__srv__SendJointState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__srv__SendJointState_Request__fini(&data[i - 1]);
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
node_interface__srv__SendJointState_Request__Sequence__fini(node_interface__srv__SendJointState_Request__Sequence * array)
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
      node_interface__srv__SendJointState_Request__fini(&array->data[i]);
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

node_interface__srv__SendJointState_Request__Sequence *
node_interface__srv__SendJointState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendJointState_Request__Sequence * array = (node_interface__srv__SendJointState_Request__Sequence *)allocator.allocate(sizeof(node_interface__srv__SendJointState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__srv__SendJointState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__srv__SendJointState_Request__Sequence__destroy(node_interface__srv__SendJointState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__srv__SendJointState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__srv__SendJointState_Request__Sequence__are_equal(const node_interface__srv__SendJointState_Request__Sequence * lhs, const node_interface__srv__SendJointState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__srv__SendJointState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__srv__SendJointState_Request__Sequence__copy(
  const node_interface__srv__SendJointState_Request__Sequence * input,
  node_interface__srv__SendJointState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__srv__SendJointState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__srv__SendJointState_Request * data =
      (node_interface__srv__SendJointState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__srv__SendJointState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__srv__SendJointState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__srv__SendJointState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
node_interface__srv__SendJointState_Response__init(node_interface__srv__SendJointState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    node_interface__srv__SendJointState_Response__fini(msg);
    return false;
  }
  return true;
}

void
node_interface__srv__SendJointState_Response__fini(node_interface__srv__SendJointState_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
node_interface__srv__SendJointState_Response__are_equal(const node_interface__srv__SendJointState_Response * lhs, const node_interface__srv__SendJointState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
node_interface__srv__SendJointState_Response__copy(
  const node_interface__srv__SendJointState_Response * input,
  node_interface__srv__SendJointState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

node_interface__srv__SendJointState_Response *
node_interface__srv__SendJointState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendJointState_Response * msg = (node_interface__srv__SendJointState_Response *)allocator.allocate(sizeof(node_interface__srv__SendJointState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__srv__SendJointState_Response));
  bool success = node_interface__srv__SendJointState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__srv__SendJointState_Response__destroy(node_interface__srv__SendJointState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__srv__SendJointState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__srv__SendJointState_Response__Sequence__init(node_interface__srv__SendJointState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendJointState_Response * data = NULL;

  if (size) {
    data = (node_interface__srv__SendJointState_Response *)allocator.zero_allocate(size, sizeof(node_interface__srv__SendJointState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__srv__SendJointState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__srv__SendJointState_Response__fini(&data[i - 1]);
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
node_interface__srv__SendJointState_Response__Sequence__fini(node_interface__srv__SendJointState_Response__Sequence * array)
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
      node_interface__srv__SendJointState_Response__fini(&array->data[i]);
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

node_interface__srv__SendJointState_Response__Sequence *
node_interface__srv__SendJointState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendJointState_Response__Sequence * array = (node_interface__srv__SendJointState_Response__Sequence *)allocator.allocate(sizeof(node_interface__srv__SendJointState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__srv__SendJointState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__srv__SendJointState_Response__Sequence__destroy(node_interface__srv__SendJointState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__srv__SendJointState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__srv__SendJointState_Response__Sequence__are_equal(const node_interface__srv__SendJointState_Response__Sequence * lhs, const node_interface__srv__SendJointState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__srv__SendJointState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__srv__SendJointState_Response__Sequence__copy(
  const node_interface__srv__SendJointState_Response__Sequence * input,
  node_interface__srv__SendJointState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__srv__SendJointState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__srv__SendJointState_Response * data =
      (node_interface__srv__SendJointState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__srv__SendJointState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__srv__SendJointState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__srv__SendJointState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
