// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/DartStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_STATUS__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__DART_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DartStatus in the package node_interface.
/**
  * protocol_name: dartStatus
  * protocol_id: 0X0004
  * protocol_description: 飞镖发射状态
 */
typedef struct node_interface__msg__DartStatus
{
  uint8_t dart_belong;
  uint16_t stage_remaining_time;
} node_interface__msg__DartStatus;

// Struct for a sequence of node_interface__msg__DartStatus.
typedef struct node_interface__msg__DartStatus__Sequence
{
  node_interface__msg__DartStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__DartStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_STATUS__STRUCT_H_
