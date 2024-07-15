// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/RfidStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RfidStatus in the package node_interface.
/**
  * protocol_name: rfidStatus
  * protocol_id: 0X0209
  * protocol_description: 机器人RFID状态
 */
typedef struct node_interface__msg__RfidStatus
{
  uint32_t rfid_status;
} node_interface__msg__RfidStatus;

// Struct for a sequence of node_interface__msg__RfidStatus.
typedef struct node_interface__msg__RfidStatus__Sequence
{
  node_interface__msg__RfidStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__RfidStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__STRUCT_H_
