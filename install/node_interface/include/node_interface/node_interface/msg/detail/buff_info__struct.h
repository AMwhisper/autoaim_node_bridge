// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/BuffInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BuffInfo in the package node_interface.
/**
  * protocol_name: buffInfo
  * protocol_id: 0X0204
  * protocol_description: 机器人增益
 */
typedef struct node_interface__msg__BuffInfo
{
  uint8_t power_rune_buff;
} node_interface__msg__BuffInfo;

// Struct for a sequence of node_interface__msg__BuffInfo.
typedef struct node_interface__msg__BuffInfo__Sequence
{
  node_interface__msg__BuffInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__BuffInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__STRUCT_H_
