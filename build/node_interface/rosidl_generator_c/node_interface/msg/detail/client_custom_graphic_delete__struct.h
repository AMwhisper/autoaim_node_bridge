// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/ClientCustomGraphicDelete.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ClientCustomGraphicDelete in the package node_interface.
/**
  * protocol_name: clientCustomGraphicDelete
  * protocol_id: 0XF100
  * protocol_description: 客户端删除图形
 */
typedef struct node_interface__msg__ClientCustomGraphicDelete
{
  uint16_t data_cmd_id;
  uint16_t send_id;
  uint16_t receiver_id;
  uint8_t operate_tpye;
  uint8_t layer;
} node_interface__msg__ClientCustomGraphicDelete;

// Struct for a sequence of node_interface__msg__ClientCustomGraphicDelete.
typedef struct node_interface__msg__ClientCustomGraphicDelete__Sequence
{
  node_interface__msg__ClientCustomGraphicDelete * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__ClientCustomGraphicDelete__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_H_
