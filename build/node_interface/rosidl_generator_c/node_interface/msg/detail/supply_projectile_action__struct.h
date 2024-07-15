// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SupplyProjectileAction in the package node_interface.
/**
  * protocol_name: supplyProjectileaction
  * protocol_id: 0X0102
  * protocol_description: 补给站动作标识
 */
typedef struct node_interface__msg__SupplyProjectileAction
{
  uint8_t supply_projectile_id;
  uint8_t supply_robot_id;
  uint8_t supply_projectile_step;
  uint8_t supply_projectile_num;
} node_interface__msg__SupplyProjectileAction;

// Struct for a sequence of node_interface__msg__SupplyProjectileAction.
typedef struct node_interface__msg__SupplyProjectileAction__Sequence
{
  node_interface__msg__SupplyProjectileAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__SupplyProjectileAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_H_
