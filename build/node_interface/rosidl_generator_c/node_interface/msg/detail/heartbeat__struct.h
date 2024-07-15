// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/Heartbeat.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__HEARTBEAT__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__HEARTBEAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Heartbeat in the package node_interface.
/**
  * protocol_name: heartbeat
  * protocol_id: 0X0120
  * protocol_description: 心跳包
 */
typedef struct node_interface__msg__Heartbeat
{
  uint8_t structure_needs_at_least_one_member;
} node_interface__msg__Heartbeat;

// Struct for a sequence of node_interface__msg__Heartbeat.
typedef struct node_interface__msg__Heartbeat__Sequence
{
  node_interface__msg__Heartbeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__Heartbeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__HEARTBEAT__STRUCT_H_
