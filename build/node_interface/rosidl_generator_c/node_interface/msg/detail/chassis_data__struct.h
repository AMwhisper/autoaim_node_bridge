// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/ChassisData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChassisData in the package node_interface.
/**
  * protocol_name: chassisData
  * protocol_id: 0X0402
  * protocol_description: 底盘控制
 */
typedef struct node_interface__msg__ChassisData
{
  float vx;
  float vy;
  float vw;
} node_interface__msg__ChassisData;

// Struct for a sequence of node_interface__msg__ChassisData.
typedef struct node_interface__msg__ChassisData__Sequence
{
  node_interface__msg__ChassisData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__ChassisData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__STRUCT_H_
