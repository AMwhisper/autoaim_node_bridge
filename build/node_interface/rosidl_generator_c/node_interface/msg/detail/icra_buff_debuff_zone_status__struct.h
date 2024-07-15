// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/IcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IcraBuffDebuffZoneStatus in the package node_interface.
/**
  * protocol_name: icraBuffDebuffZoneStatus
  * protocol_id: 0X0005
  * protocol_description: 人工智能挑战赛加成与惩罚区状态
 */
typedef struct node_interface__msg__IcraBuffDebuffZoneStatus
{
  uint8_t f1_zone_status;
  uint8_t f1_zone_buff_debuff_status;
  uint8_t f2_zone_status;
  uint8_t f2_zone_buff_debuff_status;
  uint8_t f3_zone_status;
  uint8_t f3_zone_buff_debuff_status;
  uint8_t f4_zone_status;
  uint8_t f4_zone_buff_debuff_status;
  uint8_t f5_zone_status;
  uint8_t f5_zone_buff_debuff_status;
  uint8_t f6_zone_status;
  uint8_t f6_zone_buff_debuff_status;
  uint16_t red1_bullet_left;
  uint16_t red2_bullet_left;
  uint16_t blue1_bullet_left;
  uint16_t blue2_bullet_left;
} node_interface__msg__IcraBuffDebuffZoneStatus;

// Struct for a sequence of node_interface__msg__IcraBuffDebuffZoneStatus.
typedef struct node_interface__msg__IcraBuffDebuffZoneStatus__Sequence
{
  node_interface__msg__IcraBuffDebuffZoneStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__IcraBuffDebuffZoneStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_H_
