// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameRobotStatus in the package node_interface.
/**
  * protocol_name: gameRobotstatus
  * protocol_id: 0X0201
  * protocol_description: 比赛机器人状态
 */
typedef struct node_interface__msg__GameRobotStatus
{
  uint8_t robot_id;
  uint8_t robot_level;
  uint16_t remain_hp;
  uint16_t max_hp;
  uint16_t shooter_id1_17mm_cooling_rate;
  uint16_t shooter_id1_17mm_cooling_limit;
  uint16_t shooter_id1_17mm_speed_limit;
  uint16_t shooter_id2_17mm_cooling_rate;
  uint16_t shooter_id2_17mm_cooling_limit;
  uint16_t shooter_id2_17mm_speed_limit;
  uint16_t shooter_id1_42mm_cooling_rate;
  uint16_t shooter_id1_42mm_cooling_limit;
  uint16_t shooter_id1_42mm_speed_limit;
  uint16_t chassis_power_limit;
  uint8_t mains_power_gimbal_output;
  uint8_t mains_power_chassis_output;
  uint8_t mains_power_shooter_output;
} node_interface__msg__GameRobotStatus;

// Struct for a sequence of node_interface__msg__GameRobotStatus.
typedef struct node_interface__msg__GameRobotStatus__Sequence
{
  node_interface__msg__GameRobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__GameRobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_H_
