// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RefereeWarning in the package node_interface.
/**
  * protocol_name: refereeWarning
  * protocol_id: 0X0104
  * protocol_description: 裁判警告信息
 */
typedef struct node_interface__msg__RefereeWarning
{
  uint8_t level;
  uint8_t foul_robot_id;
} node_interface__msg__RefereeWarning;

// Struct for a sequence of node_interface__msg__RefereeWarning.
typedef struct node_interface__msg__RefereeWarning__Sequence
{
  node_interface__msg__RefereeWarning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__RefereeWarning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
