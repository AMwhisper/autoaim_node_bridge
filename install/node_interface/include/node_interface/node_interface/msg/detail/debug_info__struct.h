// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/DebugInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debug_data'
#include "node_interface/msg/detail/debug_data_type__struct.h"

/// Struct defined in msg/DebugInfo in the package node_interface.
/**
  * protocol_name: debugInfo
  * protocol_id: 0X1024
  * protocol_description: 调试信息
 */
typedef struct node_interface__msg__DebugInfo
{
  node_interface__msg__DebugDataType debug_data;
} node_interface__msg__DebugInfo;

// Struct for a sequence of node_interface__msg__DebugInfo.
typedef struct node_interface__msg__DebugInfo__Sequence
{
  node_interface__msg__DebugInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__DebugInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__STRUCT_H_
