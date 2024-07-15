// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/GyroscopeData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GyroscopeData in the package node_interface.
/**
  * protocol_name: gyroscopeData
  * protocol_id: 0X0403
  * protocol_description: 陀螺仪数据
 */
typedef struct node_interface__msg__GyroscopeData
{
  float yaw;
  float pitch;
  float roll;
} node_interface__msg__GyroscopeData;

// Struct for a sequence of node_interface__msg__GyroscopeData.
typedef struct node_interface__msg__GyroscopeData__Sequence
{
  node_interface__msg__GyroscopeData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__GyroscopeData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__STRUCT_H_
