// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/DebugDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DebugDataType in the package node_interface.
/**
  * protocol_name: DebugData_Type
 */
typedef struct node_interface__msg__DebugDataType
{
  int32_t debug1;
  int32_t debug2;
  int32_t debug3;
  int32_t debug4;
  int32_t debug5;
  int32_t debug6;
  int32_t debug7;
  int32_t debug8;
} node_interface__msg__DebugDataType;

// Struct for a sequence of node_interface__msg__DebugDataType.
typedef struct node_interface__msg__DebugDataType__Sequence
{
  node_interface__msg__DebugDataType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__DebugDataType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__STRUCT_H_
