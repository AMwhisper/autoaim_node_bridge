// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:msg/EventData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_interface/msg/detail/event_data__struct.hpp"
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

void EventData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_interface::msg::EventData(_init);
}

void EventData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_interface::msg::EventData *>(message_memory);
  typed_message->~EventData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EventData_message_member_array[1] = {
  {
    "event_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface::msg::EventData, event_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EventData_message_members = {
  "node_interface::msg",  // message namespace
  "EventData",  // message name
  1,  // number of fields
  sizeof(node_interface::msg::EventData),
  EventData_message_member_array,  // message members
  EventData_init_function,  // function to initialize message memory (memory has to be allocated)
  EventData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EventData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EventData_message_members,
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
get_message_type_support_handle<node_interface::msg::EventData>()
{
  return &::node_interface::msg::rosidl_typesupport_introspection_cpp::EventData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, msg, EventData)() {
  return &::node_interface::msg::rosidl_typesupport_introspection_cpp::EventData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
