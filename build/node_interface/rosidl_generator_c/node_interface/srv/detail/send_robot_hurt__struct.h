// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:srv/SendRobotHurt.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__STRUCT_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendRobotHurt in the package node_interface.
typedef struct node_interface__srv__SendRobotHurt_Request
{
  uint8_t armor_id;
  uint8_t hurt_type;
} node_interface__srv__SendRobotHurt_Request;

// Struct for a sequence of node_interface__srv__SendRobotHurt_Request.
typedef struct node_interface__srv__SendRobotHurt_Request__Sequence
{
  node_interface__srv__SendRobotHurt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendRobotHurt_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendRobotHurt in the package node_interface.
typedef struct node_interface__srv__SendRobotHurt_Response
{
  rosidl_runtime_c__String result;
} node_interface__srv__SendRobotHurt_Response;

// Struct for a sequence of node_interface__srv__SendRobotHurt_Response.
typedef struct node_interface__srv__SendRobotHurt_Response__Sequence
{
  node_interface__srv__SendRobotHurt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendRobotHurt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__STRUCT_H_
