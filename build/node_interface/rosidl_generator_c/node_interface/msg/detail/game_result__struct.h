// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameResult in the package node_interface.
/**
  * protocol_name: gameResult
  * protocol_id: 0X0002
  * protocol_description: 比赛结果的数据
 */
typedef struct node_interface__msg__GameResult
{
  uint8_t winner;
} node_interface__msg__GameResult;

// Struct for a sequence of node_interface__msg__GameResult.
typedef struct node_interface__msg__GameResult__Sequence
{
  node_interface__msg__GameResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__GameResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__STRUCT_H_
