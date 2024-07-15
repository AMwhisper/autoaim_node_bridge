// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_STATUS__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__GAME_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameStatus in the package node_interface.
/**
  * protocol_name: gameStatus
  * protocol_id: 0X0001
  * protocol_description: 比赛状态数据
 */
typedef struct node_interface__msg__GameStatus
{
  uint8_t game_type;
  uint8_t game_progress;
  uint16_t stage_remain_time;
  uint64_t sync_time_stamp;
} node_interface__msg__GameStatus;

// Struct for a sequence of node_interface__msg__GameStatus.
typedef struct node_interface__msg__GameStatus__Sequence
{
  node_interface__msg__GameStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__GameStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_STATUS__STRUCT_H_
