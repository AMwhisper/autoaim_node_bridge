// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/BoardAlpha.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BOARD_ALPHA__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__BOARD_ALPHA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BoardAlpha in the package node_interface.
/**
  * protocol_name: boardAlpha
  * protocol_id: 0X0501
  * protocol_description: 主控板间通信
 */
typedef struct node_interface__msg__BoardAlpha
{
  int32_t data1;
  int32_t data2;
  int32_t data3;
  int32_t data4;
} node_interface__msg__BoardAlpha;

// Struct for a sequence of node_interface__msg__BoardAlpha.
typedef struct node_interface__msg__BoardAlpha__Sequence
{
  node_interface__msg__BoardAlpha * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__BoardAlpha__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__BOARD_ALPHA__STRUCT_H_
