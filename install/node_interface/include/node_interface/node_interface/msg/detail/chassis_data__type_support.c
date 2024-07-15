// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_interface:msg/ChassisData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_interface/msg/detail/chassis_data__rosidl_typesupport_introspection_c.h"
#include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_interface/msg/detail/chassis_data__functions.h"
#include "node_interface/msg/detail/chassis_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__msg__ChassisData__init(message_memory);
}

void node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_fini_function(void * message_memory)
{
  node_interface__msg__ChassisData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_member_array[3] = {
  {
    "vx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ChassisData, vx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ChassisData, vy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ChassisData, vw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_members = {
  "node_interface__msg",  // message namespace
  "ChassisData",  // message name
  3,  // number of fields
  sizeof(node_interface__msg__ChassisData),
  node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_member_array,  // message members
  node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_type_support_handle = {
  0,
  &node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, ChassisData)() {
  if (!node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_type_support_handle.typesupport_identifier) {
    node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__msg__ChassisData__rosidl_typesupport_introspection_c__ChassisData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
