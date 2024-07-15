// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from node_interface:srv/SendGameStatus.idl
// generated code does not contain a copyright notice
#include "node_interface/srv/detail/send_game_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
node_interface__srv__SendGameStatus_Request__init(node_interface__srv__SendGameStatus_Request * msg)
{
  if (!msg) {
    return false;
  }
  // game_type
  // game_progress
  // stage_remain_time
  // sync_time_stamp
  return true;
}

void
node_interface__srv__SendGameStatus_Request__fini(node_interface__srv__SendGameStatus_Request * msg)
{
  if (!msg) {
    return;
  }
  // game_type
  // game_progress
  // stage_remain_time
  // sync_time_stamp
}

bool
node_interface__srv__SendGameStatus_Request__are_equal(const node_interface__srv__SendGameStatus_Request * lhs, const node_interface__srv__SendGameStatus_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // game_type
  if (lhs->game_type != rhs->game_type) {
    return false;
  }
  // game_progress
  if (lhs->game_progress != rhs->game_progress) {
    return false;
  }
  // stage_remain_time
  if (lhs->stage_remain_time != rhs->stage_remain_time) {
    return false;
  }
  // sync_time_stamp
  if (lhs->sync_time_stamp != rhs->sync_time_stamp) {
    return false;
  }
  return true;
}

bool
node_interface__srv__SendGameStatus_Request__copy(
  const node_interface__srv__SendGameStatus_Request * input,
  node_interface__srv__SendGameStatus_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // game_type
  output->game_type = input->game_type;
  // game_progress
  output->game_progress = input->game_progress;
  // stage_remain_time
  output->stage_remain_time = input->stage_remain_time;
  // sync_time_stamp
  output->sync_time_stamp = input->sync_time_stamp;
  return true;
}

node_interface__srv__SendGameStatus_Request *
node_interface__srv__SendGameStatus_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendGameStatus_Request * msg = (node_interface__srv__SendGameStatus_Request *)allocator.allocate(sizeof(node_interface__srv__SendGameStatus_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__srv__SendGameStatus_Request));
  bool success = node_interface__srv__SendGameStatus_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__srv__SendGameStatus_Request__destroy(node_interface__srv__SendGameStatus_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__srv__SendGameStatus_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__srv__SendGameStatus_Request__Sequence__init(node_interface__srv__SendGameStatus_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendGameStatus_Request * data = NULL;

  if (size) {
    data = (node_interface__srv__SendGameStatus_Request *)allocator.zero_allocate(size, sizeof(node_interface__srv__SendGameStatus_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__srv__SendGameStatus_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__srv__SendGameStatus_Request__fini(&data[i - 1]);
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
node_interface__srv__SendGameStatus_Request__Sequence__fini(node_interface__srv__SendGameStatus_Request__Sequence * array)
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
      node_interface__srv__SendGameStatus_Request__fini(&array->data[i]);
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

node_interface__srv__SendGameStatus_Request__Sequence *
node_interface__srv__SendGameStatus_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendGameStatus_Request__Sequence * array = (node_interface__srv__SendGameStatus_Request__Sequence *)allocator.allocate(sizeof(node_interface__srv__SendGameStatus_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__srv__SendGameStatus_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__srv__SendGameStatus_Request__Sequence__destroy(node_interface__srv__SendGameStatus_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__srv__SendGameStatus_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__srv__SendGameStatus_Request__Sequence__are_equal(const node_interface__srv__SendGameStatus_Request__Sequence * lhs, const node_interface__srv__SendGameStatus_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__srv__SendGameStatus_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__srv__SendGameStatus_Request__Sequence__copy(
  const node_interface__srv__SendGameStatus_Request__Sequence * input,
  node_interface__srv__SendGameStatus_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__srv__SendGameStatus_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__srv__SendGameStatus_Request * data =
      (node_interface__srv__SendGameStatus_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__srv__SendGameStatus_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__srv__SendGameStatus_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__srv__SendGameStatus_Request__copy(
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
node_interface__srv__SendGameStatus_Response__init(node_interface__srv__SendGameStatus_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    node_interface__srv__SendGameStatus_Response__fini(msg);
    return false;
  }
  return true;
}

void
node_interface__srv__SendGameStatus_Response__fini(node_interface__srv__SendGameStatus_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
node_interface__srv__SendGameStatus_Response__are_equal(const node_interface__srv__SendGameStatus_Response * lhs, const node_interface__srv__SendGameStatus_Response * rhs)
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
node_interface__srv__SendGameStatus_Response__copy(
  const node_interface__srv__SendGameStatus_Response * input,
  node_interface__srv__SendGameStatus_Response * output)
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

node_interface__srv__SendGameStatus_Response *
node_interface__srv__SendGameStatus_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendGameStatus_Response * msg = (node_interface__srv__SendGameStatus_Response *)allocator.allocate(sizeof(node_interface__srv__SendGameStatus_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(node_interface__srv__SendGameStatus_Response));
  bool success = node_interface__srv__SendGameStatus_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
node_interface__srv__SendGameStatus_Response__destroy(node_interface__srv__SendGameStatus_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    node_interface__srv__SendGameStatus_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
node_interface__srv__SendGameStatus_Response__Sequence__init(node_interface__srv__SendGameStatus_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendGameStatus_Response * data = NULL;

  if (size) {
    data = (node_interface__srv__SendGameStatus_Response *)allocator.zero_allocate(size, sizeof(node_interface__srv__SendGameStatus_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = node_interface__srv__SendGameStatus_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        node_interface__srv__SendGameStatus_Response__fini(&data[i - 1]);
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
node_interface__srv__SendGameStatus_Response__Sequence__fini(node_interface__srv__SendGameStatus_Response__Sequence * array)
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
      node_interface__srv__SendGameStatus_Response__fini(&array->data[i]);
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

node_interface__srv__SendGameStatus_Response__Sequence *
node_interface__srv__SendGameStatus_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  node_interface__srv__SendGameStatus_Response__Sequence * array = (node_interface__srv__SendGameStatus_Response__Sequence *)allocator.allocate(sizeof(node_interface__srv__SendGameStatus_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = node_interface__srv__SendGameStatus_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
node_interface__srv__SendGameStatus_Response__Sequence__destroy(node_interface__srv__SendGameStatus_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    node_interface__srv__SendGameStatus_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
node_interface__srv__SendGameStatus_Response__Sequence__are_equal(const node_interface__srv__SendGameStatus_Response__Sequence * lhs, const node_interface__srv__SendGameStatus_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!node_interface__srv__SendGameStatus_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
node_interface__srv__SendGameStatus_Response__Sequence__copy(
  const node_interface__srv__SendGameStatus_Response__Sequence * input,
  node_interface__srv__SendGameStatus_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(node_interface__srv__SendGameStatus_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    node_interface__srv__SendGameStatus_Response * data =
      (node_interface__srv__SendGameStatus_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!node_interface__srv__SendGameStatus_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          node_interface__srv__SendGameStatus_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!node_interface__srv__SendGameStatus_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
