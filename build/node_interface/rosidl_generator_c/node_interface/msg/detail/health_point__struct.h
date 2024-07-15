// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/HealthPoint.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HealthPoint in the package node_interface.
/**
  * protocol_name: healthPoint
  * protocol_id: 0X0003
  * protocol_description: 机器人血量数据
 */
typedef struct node_interface__msg__HealthPoint
{
  uint16_t red_1_robot_hp;
  uint16_t red_2_robot_hp;
  uint16_t red_3_robot_hp;
  uint16_t red_4_robot_hp;
  uint16_t red_5_robot_hp;
  uint16_t red_7_robot_hp;
  uint16_t red_outpost_hp;
  uint16_t red_base_hp;
  uint16_t blue_1_robot_hp;
  uint16_t blue_2_robot_hp;
  uint16_t blue_3_robot_hp;
  uint16_t blue_4_robot_hp;
  uint16_t blue_5_robot_hp;
  uint16_t blue_7_robot_hp;
  uint16_t blue_outpost_hp;
  uint16_t blue_base_hp;
} node_interface__msg__HealthPoint;

// Struct for a sequence of node_interface__msg__HealthPoint.
typedef struct node_interface__msg__HealthPoint__Sequence
{
  node_interface__msg__HealthPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__HealthPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__STRUCT_H_
