// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:srv/SendClientCustomGraphicDouble.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DOUBLE__STRUCT_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DOUBLE__STRUCT_H_

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

/// Struct defined in srv/SendClientCustomGraphicDouble in the package node_interface.
typedef struct node_interface__srv__SendClientCustomGraphicDouble_Request
{
  uint16_t data_cmd_id;
  uint16_t send_id;
  uint16_t receiver_id;
  node_interface__msg__GraphicDataType grapic_data_struct[2];
} node_interface__srv__SendClientCustomGraphicDouble_Request;

// Struct for a sequence of node_interface__srv__SendClientCustomGraphicDouble_Request.
typedef struct node_interface__srv__SendClientCustomGraphicDouble_Request__Sequence
{
  node_interface__srv__SendClientCustomGraphicDouble_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendClientCustomGraphicDouble_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendClientCustomGraphicDouble in the package node_interface.
typedef struct node_interface__srv__SendClientCustomGraphicDouble_Response
{
  rosidl_runtime_c__String result;
} node_interface__srv__SendClientCustomGraphicDouble_Response;

// Struct for a sequence of node_interface__srv__SendClientCustomGraphicDouble_Response.
typedef struct node_interface__srv__SendClientCustomGraphicDouble_Response__Sequence
{
  node_interface__srv__SendClientCustomGraphicDouble_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendClientCustomGraphicDouble_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DOUBLE__STRUCT_H_
