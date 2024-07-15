// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:msg/ClientCustomGraphicDouble.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_interface/msg/detail/client_custom_graphic_double__struct.hpp"
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

void ClientCustomGraphicDouble_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_interface::msg::ClientCustomGraphicDouble(_init);
}

void ClientCustomGraphicDouble_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_interface::msg::ClientCustomGraphicDouble *>(message_memory);
  typed_message->~ClientCustomGraphicDouble();
}

size_t size_function__ClientCustomGraphicDouble__grapic_data_struct(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__ClientCustomGraphicDouble__grapic_data_struct(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<node_interface::msg::GraphicDataType, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__ClientCustomGraphicDouble__grapic_data_struct(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<node_interface::msg::GraphicDataType, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__ClientCustomGraphicDouble__grapic_data_struct(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const node_interface::msg::GraphicDataType *>(
    get_const_function__ClientCustomGraphicDouble__grapic_data_struct(untyped_member, index));
  auto & value = *reinterpret_cast<node_interface::msg::GraphicDataType *>(untyped_value);
  value = item;
}

void assign_function__ClientCustomGraphicDouble__grapic_data_struct(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<node_interface::msg::GraphicDataType *>(
    get_function__ClientCustomGraphicDouble__grapic_data_struct(untyped_member, index));
  const auto & value = *reinterpret_cast<const node_interface::msg::GraphicDataType *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ClientCustomGraphicDouble_message_member_array[4] = {
  {
    "data_cmd_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface::msg::ClientCustomGraphicDouble, data_cmd_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "send_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface::msg::ClientCustomGraphicDouble, send_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "receiver_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface::msg::ClientCustomGraphicDouble, receiver_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "grapic_data_struct",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<node_interface::msg::GraphicDataType>(),  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(node_interface::msg::ClientCustomGraphicDouble, grapic_data_struct),  // bytes offset in struct
    nullptr,  // default value
    size_function__ClientCustomGraphicDouble__grapic_data_struct,  // size() function pointer
    get_const_function__ClientCustomGraphicDouble__grapic_data_struct,  // get_const(index) function pointer
    get_function__ClientCustomGraphicDouble__grapic_data_struct,  // get(index) function pointer
    fetch_function__ClientCustomGraphicDouble__grapic_data_struct,  // fetch(index, &value) function pointer
    assign_function__ClientCustomGraphicDouble__grapic_data_struct,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ClientCustomGraphicDouble_message_members = {
  "node_interface::msg",  // message namespace
  "ClientCustomGraphicDouble",  // message name
  4,  // number of fields
  sizeof(node_interface::msg::ClientCustomGraphicDouble),
  ClientCustomGraphicDouble_message_member_array,  // message members
  ClientCustomGraphicDouble_init_function,  // function to initialize message memory (memory has to be allocated)
  ClientCustomGraphicDouble_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ClientCustomGraphicDouble_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClientCustomGraphicDouble_message_members,
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
get_message_type_support_handle<node_interface::msg::ClientCustomGraphicDouble>()
{
  return &::node_interface::msg::rosidl_typesupport_introspection_cpp::ClientCustomGraphicDouble_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, msg, ClientCustomGraphicDouble)() {
  return &::node_interface::msg::rosidl_typesupport_introspection_cpp::ClientCustomGraphicDouble_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
