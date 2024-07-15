// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointState in the package node_interface.
/**
  * protocol_name: jointState
  * protocol_id: 0X0405
  * protocol_description: 工程机械臂数据
 */
typedef struct node_interface__msg__JointState
{
  uint8_t state_code;
  int16_t base_joint_position;
  int16_t base_joint_speed;
  int16_t shoulder_joint_position;
  int16_t shoulder_joint_speed;
  int16_t elbow_joint_position;
  int16_t elbow_joint_speed;
  int16_t wrist_joint_1_position;
  int16_t wrist_joint_1_speed;
  int16_t wrist_joint_2_position;
  int16_t wrist_joint_2_speed;
} node_interface__msg__JointState;

// Struct for a sequence of node_interface__msg__JointState.
typedef struct node_interface__msg__JointState__Sequence
{
  node_interface__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__JOINT_STATE__STRUCT_H_
