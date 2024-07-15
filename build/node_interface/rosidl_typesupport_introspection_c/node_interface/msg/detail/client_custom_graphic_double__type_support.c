// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_interface:msg/ClientCustomGraphicDouble.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_interface/msg/detail/client_custom_graphic_double__rosidl_typesupport_introspection_c.h"
#include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_interface/msg/detail/client_custom_graphic_double__functions.h"
#include "node_interface/msg/detail/client_custom_graphic_double__struct.h"


// Include directives for member types
// Member `grapic_data_struct`
#include "node_interface/msg/graphic_data_type.h"
// Member `grapic_data_struct`
#include "node_interface/msg/detail/graphic_data_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__msg__ClientCustomGraphicDouble__init(message_memory);
}

void node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_fini_function(void * message_memory)
{
  node_interface__msg__ClientCustomGraphicDouble__fini(message_memory);
}

size_t node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__size_function__ClientCustomGraphicDouble__grapic_data_struct(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__get_const_function__ClientCustomGraphicDouble__grapic_data_struct(
  const void * untyped_member, size_t index)
{
  const node_interface__msg__GraphicDataType * member =
    (const node_interface__msg__GraphicDataType *)(untyped_member);
  return &member[index];
}

void * node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__get_function__ClientCustomGraphicDouble__grapic_data_struct(
  void * untyped_member, size_t index)
{
  node_interface__msg__GraphicDataType * member =
    (node_interface__msg__GraphicDataType *)(untyped_member);
  return &member[index];
}

void node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__fetch_function__ClientCustomGraphicDouble__grapic_data_struct(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const node_interface__msg__GraphicDataType * item =
    ((const node_interface__msg__GraphicDataType *)
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__get_const_function__ClientCustomGraphicDouble__grapic_data_struct(untyped_member, index));
  node_interface__msg__GraphicDataType * value =
    (node_interface__msg__GraphicDataType *)(untyped_value);
  *value = *item;
}

void node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__assign_function__ClientCustomGraphicDouble__grapic_data_struct(
  void * untyped_member, size_t index, const void * untyped_value)
{
  node_interface__msg__GraphicDataType * item =
    ((node_interface__msg__GraphicDataType *)
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__get_function__ClientCustomGraphicDouble__grapic_data_struct(untyped_member, index));
  const node_interface__msg__GraphicDataType * value =
    (const node_interface__msg__GraphicDataType *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_member_array[4] = {
  {
    "data_cmd_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ClientCustomGraphicDouble, data_cmd_id),  // bytes offset in struct
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
    offsetof(node_interface__msg__ClientCustomGraphicDouble, send_id),  // bytes offset in struct
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
    offsetof(node_interface__msg__ClientCustomGraphicDouble, receiver_id),  // bytes offset in struct
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
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(node_interface__msg__ClientCustomGraphicDouble, grapic_data_struct),  // bytes offset in struct
    NULL,  // default value
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__size_function__ClientCustomGraphicDouble__grapic_data_struct,  // size() function pointer
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__get_const_function__ClientCustomGraphicDouble__grapic_data_struct,  // get_const(index) function pointer
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__get_function__ClientCustomGraphicDouble__grapic_data_struct,  // get(index) function pointer
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__fetch_function__ClientCustomGraphicDouble__grapic_data_struct,  // fetch(index, &value) function pointer
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__assign_function__ClientCustomGraphicDouble__grapic_data_struct,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_members = {
  "node_interface__msg",  // message namespace
  "ClientCustomGraphicDouble",  // message name
  4,  // number of fields
  sizeof(node_interface__msg__ClientCustomGraphicDouble),
  node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_member_array,  // message members
  node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_type_support_handle = {
  0,
  &node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, ClientCustomGraphicDouble)() {
  node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, msg, GraphicDataType)();
  if (!node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_type_support_handle.typesupport_identifier) {
    node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__msg__ClientCustomGraphicDouble__rosidl_typesupport_introspection_c__ClientCustomGraphicDouble_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
