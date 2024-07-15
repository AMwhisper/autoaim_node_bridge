// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BulletRemaining in the package node_interface.
/**
  * protocol_name: bulletRemaining
  * protocol_id: 0X0208
  * protocol_description: 子弹剩余发射数
 */
typedef struct node_interface__msg__BulletRemaining
{
  uint16_t bullet_remaining_num_17mm;
  uint16_t bullet_remaining_num_42mm;
  uint16_t coin_remaining_num;
} node_interface__msg__BulletRemaining;

// Struct for a sequence of node_interface__msg__BulletRemaining.
typedef struct node_interface__msg__BulletRemaining__Sequence
{
  node_interface__msg__BulletRemaining * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__BulletRemaining__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
