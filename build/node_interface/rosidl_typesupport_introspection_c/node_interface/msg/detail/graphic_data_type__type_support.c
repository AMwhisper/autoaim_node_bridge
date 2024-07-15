// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_interface:msg/GraphicDataType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_interface/msg/detail/graphic_data_type__rosidl_typesupport_introspection_c.h"
#include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_interface/msg/detail/graphic_data_type__functions.h"
#include "node_interface/msg/detail/graphic_data_type__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__msg__GraphicDataType__init(message_memory);
}

void node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_fini_function(void * message_memory)
{
  node_interface__msg__GraphicDataType__fini(message_memory);
}

size_t node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__size_function__GraphicDataType__graphic_name(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__get_const_function__GraphicDataType__graphic_name(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__get_function__GraphicDataType__graphic_name(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__fetch_function__GraphicDataType__graphic_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__get_const_function__GraphicDataType__graphic_name(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__assign_function__GraphicDataType__graphic_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__get_function__GraphicDataType__graphic_name(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_member_array[13] = {
  {
    "graphic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, graphic_name),  // bytes offset in struct
    NULL,  // default value
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__size_function__GraphicDataType__graphic_name,  // size() function pointer
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__get_const_function__GraphicDataType__graphic_name,  // get_const(index) function pointer
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__get_function__GraphicDataType__graphic_name,  // get(index) function pointer
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__fetch_function__GraphicDataType__graphic_name,  // fetch(index, &value) function pointer
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__assign_function__GraphicDataType__graphic_name,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operate_tpye",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, operate_tpye),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "graphic_tpye",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, graphic_tpye),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, layer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, start_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, end_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, start_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, start_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, end_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__GraphicDataType, end_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_members = {
  "node_interface__msg",  // message namespace
  "GraphicDataType",  // message name
  13,  // number of fields
  sizeof(node_interface__msg__GraphicDataType),
  node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_member_array,  // message members
  node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_type_support_handle = {
  0,
  &node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, GraphicDataType)() {
  if (!node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_type_support_handle.typesupport_identifier) {
    node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__msg__GraphicDataType__rosidl_typesupport_introspection_c__GraphicDataType_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
