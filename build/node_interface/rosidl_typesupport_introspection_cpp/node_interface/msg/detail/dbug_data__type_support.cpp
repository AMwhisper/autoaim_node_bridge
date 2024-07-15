// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:msg/DbugData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_interface/msg/detail/dbug_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace node_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DbugData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_interface::msg::DbugData(_init);
}

void DbugData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_interface::msg::DbugData *>(message_memory);
  typed_message->~DbugData();
}

size_t size_function__DbugData__dbus_buffer(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__DbugData__dbus_buffer(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__DbugData__dbus_buffer(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 18> *>(untyped_member);
  return &member[index];
}

void fetch_function__DbugData__dbus_buffer(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__DbugData__dbus_buffer(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__DbugData__dbus_buffer(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__DbugData__dbus_buffer(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DbugData_message_member_array[1] = {
  {
    "dbus_buffer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(node_interface::msg::DbugData, dbus_buffer),  // bytes offset in struct
    nullptr,  // default value
    size_function__DbugData__dbus_buffer,  // size() function pointer
    get_const_function__DbugData__dbus_buffer,  // get_const(index) function pointer
    get_function__DbugData__dbus_buffer,  // get(index) function pointer
    fetch_function__DbugData__dbus_buffer,  // fetch(index, &value) function pointer
    assign_function__DbugData__dbus_buffer,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DbugData_message_members = {
  "node_interface::msg",  // message namespace
  "DbugData",  // message name
  1,  // number of fields
  sizeof(node_interface::msg::DbugData),
  DbugData_message_member_array,  // message members
  DbugData_init_function,  // function to initialize message memory (memory has to be allocated)
  DbugData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DbugData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DbugData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace node_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_interface::msg::DbugData>()
{
  return &::node_interface::msg::rosidl_typesupport_introspection_cpp::DbugData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, msg, DbugData)() {
  return &::node_interface::msg::rosidl_typesupport_introspection_cpp::DbugData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
