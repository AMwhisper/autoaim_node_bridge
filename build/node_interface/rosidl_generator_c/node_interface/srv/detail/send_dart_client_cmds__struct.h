// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:srv/SendDartClientCmds.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DART_CLIENT_CMDS__STRUCT_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DART_CLIENT_CMDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendDartClientCmds in the package node_interface.
typedef struct node_interface__srv__SendDartClientCmds_Request
{
  uint8_t dart_launch_opening_status;
  uint8_t dart_attack_target;
  uint16_t target_change_time;
  uint8_t first_dart_speed;
  uint8_t second_dart_speed;
  uint8_t third_dart_speed;
  uint8_t fourth_dart_speed;
  uint16_t last_dart_launch_time;
  uint16_t operate_launch_cmd_time;
} node_interface__srv__SendDartClientCmds_Request;

// Struct for a sequence of node_interface__srv__SendDartClientCmds_Request.
typedef struct node_interface__srv__SendDartClientCmds_Request__Sequence
{
  node_interface__srv__SendDartClientCmds_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendDartClientCmds_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendDartClientCmds in the package node_interface.
typedef struct node_interface__srv__SendDartClientCmds_Response
{
  rosidl_runtime_c__String result;
} node_interface__srv__SendDartClientCmds_Response;

// Struct for a sequence of node_interface__srv__SendDartClientCmds_Response.
typedef struct node_interface__srv__SendDartClientCmds_Response__Sequence
{
  node_interface__srv__SendDartClientCmds_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendDartClientCmds_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DART_CLIENT_CMDS__STRUCT_H_
