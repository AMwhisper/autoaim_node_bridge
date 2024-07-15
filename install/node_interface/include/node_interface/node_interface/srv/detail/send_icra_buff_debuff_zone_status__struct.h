// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:srv/SendIcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendIcraBuffDebuffZoneStatus in the package node_interface.
typedef struct node_interface__srv__SendIcraBuffDebuffZoneStatus_Request
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
} node_interface__srv__SendIcraBuffDebuffZoneStatus_Request;

// Struct for a sequence of node_interface__srv__SendIcraBuffDebuffZoneStatus_Request.
typedef struct node_interface__srv__SendIcraBuffDebuffZoneStatus_Request__Sequence
{
  node_interface__srv__SendIcraBuffDebuffZoneStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendIcraBuffDebuffZoneStatus_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendIcraBuffDebuffZoneStatus in the package node_interface.
typedef struct node_interface__srv__SendIcraBuffDebuffZoneStatus_Response
{
  rosidl_runtime_c__String result;
} node_interface__srv__SendIcraBuffDebuffZoneStatus_Response;

// Struct for a sequence of node_interface__srv__SendIcraBuffDebuffZoneStatus_Response.
typedef struct node_interface__srv__SendIcraBuffDebuffZoneStatus_Response__Sequence
{
  node_interface__srv__SendIcraBuffDebuffZoneStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendIcraBuffDebuffZoneStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_H_
