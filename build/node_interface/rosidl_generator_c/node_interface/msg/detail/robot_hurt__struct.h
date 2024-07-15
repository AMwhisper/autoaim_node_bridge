// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__ROBOT_HURT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotHurt in the package node_interface.
/**
  * protocol_name: robotHurt
  * protocol_id: 0X0206
  * protocol_description: 伤害状态
 */
typedef struct node_interface__msg__RobotHurt
{
  uint8_t armor_id;
  uint8_t hurt_type;
} node_interface__msg__RobotHurt;

// Struct for a sequence of node_interface__msg__RobotHurt.
typedef struct node_interface__msg__RobotHurt__Sequence
{
  node_interface__msg__RobotHurt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__RobotHurt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
