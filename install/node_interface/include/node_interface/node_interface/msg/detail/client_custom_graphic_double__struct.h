// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/ClientCustomGraphicDouble.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DOUBLE__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DOUBLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'grapic_data_struct'
#include "node_interface/msg/detail/graphic_data_type__struct.h"

/// Struct defined in msg/ClientCustomGraphicDouble in the package node_interface.
/**
  * protocol_name: clientCustomGraphicDouble
  * protocol_id: 0XF102
  * protocol_description: 客户端绘制两个图形
 */
typedef struct node_interface__msg__ClientCustomGraphicDouble
{
  uint16_t data_cmd_id;
  uint16_t send_id;
  uint16_t receiver_id;
  node_interface__msg__GraphicDataType grapic_data_struct[2];
} node_interface__msg__ClientCustomGraphicDouble;

// Struct for a sequence of node_interface__msg__ClientCustomGraphicDouble.
typedef struct node_interface__msg__ClientCustomGraphicDouble__Sequence
{
  node_interface__msg__ClientCustomGraphicDouble * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__ClientCustomGraphicDouble__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DOUBLE__STRUCT_H_
