// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/GameRobotPos.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_POS__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameRobotPos in the package node_interface.
/**
  * protocol_name: gameRobotpos
  * protocol_id: 0X0203
  * protocol_description: 机器人位置
 */
typedef struct node_interface__msg__GameRobotPos
{
  float x;
  float y;
  float z;
  float yaw;
} node_interface__msg__GameRobotPos;

// Struct for a sequence of node_interface__msg__GameRobotPos.
typedef struct node_interface__msg__GameRobotPos__Sequence
{
  node_interface__msg__GameRobotPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__GameRobotPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_POS__STRUCT_H_
