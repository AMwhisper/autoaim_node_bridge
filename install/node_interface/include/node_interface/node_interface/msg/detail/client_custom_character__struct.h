// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/ClientCustomCharacter.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_CHARACTER__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_CHARACTER__STRUCT_H_

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

/// Struct defined in msg/ClientCustomCharacter in the package node_interface.
/**
  * protocol_name: clientCustomCharacter
  * protocol_id: 0XF110
  * protocol_description: 客户端绘制字符
 */
typedef struct node_interface__msg__ClientCustomCharacter
{
  uint16_t data_cmd_id;
  uint16_t send_id;
  uint16_t receiver_id;
  node_interface__msg__GraphicDataType grapic_data_struct;
  uint8_t data[30];
} node_interface__msg__ClientCustomCharacter;

// Struct for a sequence of node_interface__msg__ClientCustomCharacter.
typedef struct node_interface__msg__ClientCustomCharacter__Sequence
{
  node_interface__msg__ClientCustomCharacter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__ClientCustomCharacter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_CHARACTER__STRUCT_H_
