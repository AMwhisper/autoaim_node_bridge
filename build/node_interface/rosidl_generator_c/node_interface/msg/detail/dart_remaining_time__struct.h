// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/DartRemainingTime.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_REMAINING_TIME__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__DART_REMAINING_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DartRemainingTime in the package node_interface.
/**
  * protocol_name: dartRemainingtime
  * protocol_id: 0X0105
  * protocol_description: 飞镖发射口倒计
 */
typedef struct node_interface__msg__DartRemainingTime
{
  uint8_t dart_remaining_time;
} node_interface__msg__DartRemainingTime;

// Struct for a sequence of node_interface__msg__DartRemainingTime.
typedef struct node_interface__msg__DartRemainingTime__Sequence
{
  node_interface__msg__DartRemainingTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__DartRemainingTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_REMAINING_TIME__STRUCT_H_
