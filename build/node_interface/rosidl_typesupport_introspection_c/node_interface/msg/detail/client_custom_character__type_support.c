// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_interface:msg/ClientCustomCharacter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_interface/msg/detail/client_custom_character__rosidl_typesupport_introspection_c.h"
#include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_interface/msg/detail/client_custom_character__functions.h"
#include "node_interface/msg/detail/client_custom_character__struct.h"


// Include directives for member types
// Member `grapic_data_struct`
#include "node_interface/msg/graphic_data_type.h"
// Member `grapic_data_struct`
#include "node_interface/msg/detail/graphic_data_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__msg__ClientCustomCharacter__init(message_memory);
}

void node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_fini_function(void * message_memory)
{
  node_interface__msg__ClientCustomCharacter__fini(message_memory);
}

size_t node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__size_function__ClientCustomCharacter__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__get_const_function__ClientCustomCharacter__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__get_function__ClientCustomCharacter__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__fetch_function__ClientCustomCharacter__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__get_const_function__ClientCustomCharacter__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__assign_function__ClientCustomCharacter__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__get_function__ClientCustomCharacter__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_member_array[5] = {
  {
    "data_cmd_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ClientCustomCharacter, data_cmd_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "send_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ClientCustomCharacter, send_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receiver_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ClientCustomCharacter, receiver_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grapic_data_struct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ClientCustomCharacter, grapic_data_struct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ClientCustomCharacter, data),  // bytes offset in struct
    NULL,  // default value
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__size_function__ClientCustomCharacter__data,  // size() function pointer
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__get_const_function__ClientCustomCharacter__data,  // get_const(index) function pointer
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__get_function__ClientCustomCharacter__data,  // get(index) function pointer
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__fetch_function__ClientCustomCharacter__data,  // fetch(index, &value) function pointer
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__assign_function__ClientCustomCharacter__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_members = {
  "node_interface__msg",  // message namespace
  "ClientCustomCharacter",  // message name
  5,  // number of fields
  sizeof(node_interface__msg__ClientCustomCharacter),
  node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_member_array,  // message members
  node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_type_support_handle = {
  0,
  &node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, ClientCustomCharacter)() {
  node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, GraphicDataType)();
  if (!node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_type_support_handle.typesupport_identifier) {
    node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__msg__ClientCustomCharacter__rosidl_typesupport_introspection_c__ClientCustomCharacter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
