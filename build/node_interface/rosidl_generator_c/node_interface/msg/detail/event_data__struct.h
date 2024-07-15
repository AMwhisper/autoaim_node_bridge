// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EventData in the package node_interface.
/**
  * protocol_name: eventData
  * protocol_id: 0X0101
  * protocol_description: 场地事件数据
 */
typedef struct node_interface__msg__EventData
{
  uint32_t event_type;
} node_interface__msg__EventData;

// Struct for a sequence of node_interface__msg__EventData.
typedef struct node_interface__msg__EventData__Sequence
{
  node_interface__msg__EventData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__EventData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__STRUCT_H_
