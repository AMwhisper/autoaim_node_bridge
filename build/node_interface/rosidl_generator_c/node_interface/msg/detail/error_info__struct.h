// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/ErrorInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ERROR_INFO__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__ERROR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ErrorInfo in the package node_interface.
/**
  * protocol_name: errorInfo
  * protocol_id: 0X6666
  * protocol_description: 报错信息
 */
typedef struct node_interface__msg__ErrorInfo
{
  uint16_t code;
  uint8_t text[22];
} node_interface__msg__ErrorInfo;

// Struct for a sequence of node_interface__msg__ErrorInfo.
typedef struct node_interface__msg__ErrorInfo__Sequence
{
  node_interface__msg__ErrorInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__ErrorInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__ERROR_INFO__STRUCT_H_
