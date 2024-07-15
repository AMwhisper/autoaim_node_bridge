// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:srv/SendHealthPoint.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__STRUCT_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendHealthPoint in the package node_interface.
typedef struct node_interface__srv__SendHealthPoint_Request
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
} node_interface__srv__SendHealthPoint_Request;

// Struct for a sequence of node_interface__srv__SendHealthPoint_Request.
typedef struct node_interface__srv__SendHealthPoint_Request__Sequence
{
  node_interface__srv__SendHealthPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendHealthPoint_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendHealthPoint in the package node_interface.
typedef struct node_interface__srv__SendHealthPoint_Response
{
  rosidl_runtime_c__String result;
} node_interface__srv__SendHealthPoint_Response;

// Struct for a sequence of node_interface__srv__SendHealthPoint_Response.
typedef struct node_interface__srv__SendHealthPoint_Response__Sequence
{
  node_interface__srv__SendHealthPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendHealthPoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__STRUCT_H_
