// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:srv/SendClientCustomGraphicDelete.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendClientCustomGraphicDelete in the package node_interface.
typedef struct node_interface__srv__SendClientCustomGraphicDelete_Request
{
  uint16_t data_cmd_id;
  uint16_t send_id;
  uint16_t receiver_id;
  uint8_t operate_tpye;
  uint8_t layer;
} node_interface__srv__SendClientCustomGraphicDelete_Request;

// Struct for a sequence of node_interface__srv__SendClientCustomGraphicDelete_Request.
typedef struct node_interface__srv__SendClientCustomGraphicDelete_Request__Sequence
{
  node_interface__srv__SendClientCustomGraphicDelete_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendClientCustomGraphicDelete_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendClientCustomGraphicDelete in the package node_interface.
typedef struct node_interface__srv__SendClientCustomGraphicDelete_Response
{
  rosidl_runtime_c__String result;
} node_interface__srv__SendClientCustomGraphicDelete_Response;

// Struct for a sequence of node_interface__srv__SendClientCustomGraphicDelete_Response.
typedef struct node_interface__srv__SendClientCustomGraphicDelete_Response__Sequence
{
  node_interface__srv__SendClientCustomGraphicDelete_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendClientCustomGraphicDelete_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_H_
