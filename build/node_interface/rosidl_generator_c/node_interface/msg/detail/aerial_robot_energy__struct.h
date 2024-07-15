// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/AerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AerialRobotEnergy in the package node_interface.
/**
  * protocol_name: aerialRobotenergy
  * protocol_id: 0X0205
  * protocol_description: 空中机器人能量状态
 */
typedef struct node_interface__msg__AerialRobotEnergy
{
  uint8_t attack_time;
} node_interface__msg__AerialRobotEnergy;

// Struct for a sequence of node_interface__msg__AerialRobotEnergy.
typedef struct node_interface__msg__AerialRobotEnergy__Sequence
{
  node_interface__msg__AerialRobotEnergy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__AerialRobotEnergy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__AERIAL_ROBOT_ENERGY__STRUCT_H_
