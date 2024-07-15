// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/ClientCustomGraphicFive.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_FIVE__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_FIVE__STRUCT_H_

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

/// Struct defined in msg/ClientCustomGraphicFive in the package node_interface.
/**
  * protocol_name: clientCustomGraphicFive
  * protocol_id: 0XF103
  * protocol_description: 客户端绘制五个图形
 */
typedef struct node_interface__msg__ClientCustomGraphicFive
{
  uint16_t data_cmd_id;
  uint16_t send_id;
  uint16_t receiver_id;
  node_interface__msg__GraphicDataType grapic_data_struct[5];
} node_interface__msg__ClientCustomGraphicFive;

// Struct for a sequence of node_interface__msg__ClientCustomGraphicFive.
typedef struct node_interface__msg__ClientCustomGraphicFive__Sequence
{
  node_interface__msg__ClientCustomGraphicFive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__ClientCustomGraphicFive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_FIVE__STRUCT_H_
