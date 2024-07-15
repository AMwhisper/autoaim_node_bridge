// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_interface:msg/GameRobotPos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_interface/msg/detail/game_robot_pos__rosidl_typesupport_introspection_c.h"
#include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_interface/msg/detail/game_robot_pos__functions.h"
#include "node_interface/msg/detail/game_robot_pos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__msg__GameRobotPos__init(message_memory);
}

void node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_fini_function(void * message_memory)
{
  node_interface__msg__GameRobotPos__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GameRobotPos, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GameRobotPos, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GameRobotPos, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GameRobotPos, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_members = {
  "node_interface__msg",  // message namespace
  "GameRobotPos",  // message name
  4,  // number of fields
  sizeof(node_interface__msg__GameRobotPos),
  node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_member_array,  // message members
  node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_type_support_handle = {
  0,
  &node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, GameRobotPos)() {
  if (!node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_type_support_handle.typesupport_identifier) {
    node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__msg__GameRobotPos__rosidl_typesupport_introspection_c__GameRobotPos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
