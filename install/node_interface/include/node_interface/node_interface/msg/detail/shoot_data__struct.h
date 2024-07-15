// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ShootData in the package node_interface.
/**
  * protocol_name: shootData
  * protocol_id: 0X0207
  * protocol_description: 实时射击信息
 */
typedef struct node_interface__msg__ShootData
{
  uint8_t bullet_type;
  uint8_t shooter_id;
  uint8_t bullet_freq;
  float bullet_speed;
} node_interface__msg__ShootData;

// Struct for a sequence of node_interface__msg__ShootData.
typedef struct node_interface__msg__ShootData__Sequence
{
  node_interface__msg__ShootData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__ShootData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__STRUCT_H_
