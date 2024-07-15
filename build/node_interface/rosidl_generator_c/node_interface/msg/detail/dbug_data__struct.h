// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/DbugData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DbugData in the package node_interface.
/**
  * protocol_name: dbugData
  * protocol_id: 0X0404
  * protocol_description: 遥控器及键鼠数据
 */
typedef struct node_interface__msg__DbugData
{
  uint8_t dbus_buffer[18];
} node_interface__msg__DbugData;

// Struct for a sequence of node_interface__msg__DbugData.
typedef struct node_interface__msg__DbugData__Sequence
{
  node_interface__msg__DbugData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__DbugData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__STRUCT_H_
