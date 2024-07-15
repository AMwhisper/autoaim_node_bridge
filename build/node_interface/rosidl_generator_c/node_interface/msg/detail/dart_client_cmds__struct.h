// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/DartClientCmds.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DartClientCmds in the package node_interface.
/**
  * protocol_name: dartClientCmds
  * protocol_id: 0X020A
  * protocol_description: 飞镖机器人客户端指令数据
 */
typedef struct node_interface__msg__DartClientCmds
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
} node_interface__msg__DartClientCmds;

// Struct for a sequence of node_interface__msg__DartClientCmds.
typedef struct node_interface__msg__DartClientCmds__Sequence
{
  node_interface__msg__DartClientCmds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__DartClientCmds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__STRUCT_H_
