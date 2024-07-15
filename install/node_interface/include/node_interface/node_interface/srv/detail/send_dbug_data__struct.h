// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from node_interface:srv/SendDbugData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__STRUCT_H_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendDbugData in the package node_interface.
typedef struct node_interface__srv__SendDbugData_Request
{
  uint8_t dbus_buffer[18];
} node_interface__srv__SendDbugData_Request;

// Struct for a sequence of node_interface__srv__SendDbugData_Request.
typedef struct node_interface__srv__SendDbugData_Request__Sequence
{
  node_interface__srv__SendDbugData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendDbugData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendDbugData in the package node_interface.
typedef struct node_interface__srv__SendDbugData_Response
{
  rosidl_runtime_c__String result;
} node_interface__srv__SendDbugData_Response;

// Struct for a sequence of node_interface__srv__SendDbugData_Response.
typedef struct node_interface__srv__SendDbugData_Response__Sequence
{
  node_interface__srv__SendDbugData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} node_interface__srv__SendDbugData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__STRUCT_H_
