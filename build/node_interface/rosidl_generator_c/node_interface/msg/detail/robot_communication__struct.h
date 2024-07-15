// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/RobotCommunication.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotCommunication in the package node_interface.
/**
  * protocol_name: robotCommunication
  * protocol_id: 0XF301
  * protocol_description: 学生机器人间通信
 */
typedef struct node_interface__msg__RobotCommunication
{
  uint16_t data_cmd_id;
  uint16_t send_id;
  uint16_t receiver_id;
  int32_t data1;
  int32_t data2;
  int32_t data3;
  int32_t data4;
} node_interface__msg__RobotCommunication;

// Struct for a sequence of node_interface__msg__RobotCommunication.
typedef struct node_interface__msg__RobotCommunication__Sequence
{
  node_interface__msg__RobotCommunication * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__RobotCommunication__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_H_
