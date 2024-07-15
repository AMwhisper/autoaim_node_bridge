// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_interface:msg/BoardBeta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_interface/msg/detail/board_beta__rosidl_typesupport_introspection_c.h"
#include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_interface/msg/detail/board_beta__functions.h"
#include "node_interface/msg/detail/board_beta__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__msg__BoardBeta__init(message_memory);
}

void node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_fini_function(void * message_memory)
{
  node_interface__msg__BoardBeta__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_member_array[4] = {
  {
    "data1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__BoardBeta, data1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__BoardBeta, data2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__BoardBeta, data3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__BoardBeta, data4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_members = {
  "node_interface__msg",  // message namespace
  "BoardBeta",  // message name
  4,  // number of fields
  sizeof(node_interface__msg__BoardBeta),
  node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_member_array,  // message members
  node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_type_support_handle = {
  0,
  &node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, BoardBeta)() {
  if (!node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_type_support_handle.typesupport_identifier) {
    node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__msg__BoardBeta__rosidl_typesupport_introspection_c__BoardBeta_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
