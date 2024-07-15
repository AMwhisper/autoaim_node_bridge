// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PowerHeatData in the package node_interface.
/**
  * protocol_name: powerHeatData
  * protocol_id: 0X0202
  * protocol_description: 实时功率热量数据
 */
typedef struct node_interface__msg__PowerHeatData
{
  uint16_t chassis_volt;
  uint16_t chassis_current;
  float chassis_power;
  uint16_t chassis_power_buffer;
  uint16_t shooter_id1_17mm_cooling_heat;
  uint16_t shooter_id2_17mm_cooling_heat;
  uint16_t shooter_id1_42mm_cooling_heat;
} node_interface__msg__PowerHeatData;

// Struct for a sequence of node_interface__msg__PowerHeatData.
typedef struct node_interface__msg__PowerHeatData__Sequence
{
  node_interface__msg__PowerHeatData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__PowerHeatData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_
