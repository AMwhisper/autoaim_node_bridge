// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:msg/GraphicDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__STRUCT_H_
#define NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GraphicDataType in the package node_interface.
/**
  * protocol_name: GraphicData_Type
 */
typedef struct node_interface__msg__GraphicDataType
{
  uint8_t graphic_name[3];
  uint32_t operate_tpye;
  uint32_t graphic_tpye;
  uint32_t layer;
  uint32_t color;
  uint32_t start_angle;
  uint32_t end_angle;
  uint32_t width;
  uint32_t start_x;
  uint32_t start_y;
  uint32_t radius;
  uint32_t end_x;
  uint32_t end_y;
} node_interface__msg__GraphicDataType;

// Struct for a sequence of node_interface__msg__GraphicDataType.
typedef struct node_interface__msg__GraphicDataType__Sequence
{
  node_interface__msg__GraphicDataType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__msg__GraphicDataType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__STRUCT_H_
