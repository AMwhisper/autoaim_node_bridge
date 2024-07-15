// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:srv/SendClientCustomCharacter.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "node_interface/srv/detail/send_client_custom_character__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SendClientCustomCharacter_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_interface::srv::SendClientCustomCharacter_Request(_init);
}

void SendClientCustomCharacter_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_interface::srv::SendClientCustomCharacter_Request *>(message_memory);
  typed_message->~SendClientCustomCharacter_Request();
}

size_t size_function__SendClientCustomCharacter_Request__data(const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * get_const_function__SendClientCustomCharacter_Request__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 30> *>(untyped_member);
  return &member[index];
}

void * get_function__SendClientCustomCharacter_Request__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 30> *>(untyped_member);
  return &member[index];
}

void fetch_function__SendClientCustomCharacter_Request__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SendClientCustomCharacter_Request__data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SendClientCustomCharacter_Request__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SendClientCustomCharacter_Request__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SendClientCustomCharacter_Request_message_member_array[5] = {
  {
    "data_cmd_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface::srv::SendClientCustomCharacter_Request, data_cmd_id),  // bytes offset in struct
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
    offsetof(node_interface::srv::SendClientCustomCharacter_Request, send_id),  // bytes offset in struct
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
    offsetof(node_interface::srv::SendClientCustomCharacter_Request, receiver_id),  // bytes offset in struct
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
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface::srv::SendClientCustomCharacter_Request, grapic_data_struct),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(node_interface::srv::SendClientCustomCharacter_Request, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__SendClientCustomCharacter_Request__data,  // size() function pointer
    get_const_function__SendClientCustomCharacter_Request__data,  // get_const(index) function pointer
    get_function__SendClientCustomCharacter_Request__data,  // get(index) function pointer
    fetch_function__SendClientCustomCharacter_Request__data,  // fetch(index, &value) function pointer
    assign_function__SendClientCustomCharacter_Request__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SendClientCustomCharacter_Request_message_members = {
  "node_interface::srv",  // message namespace
  "SendClientCustomCharacter_Request",  // message name
  5,  // number of fields
  sizeof(node_interface::srv::SendClientCustomCharacter_Request),
  SendClientCustomCharacter_Request_message_member_array,  // message members
  SendClientCustomCharacter_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SendClientCustomCharacter_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SendClientCustomCharacter_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SendClientCustomCharacter_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace node_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_interface::srv::SendClientCustomCharacter_Request>()
{
  return &::node_interface::srv::rosidl_typesupport_introspection_cpp::SendClientCustomCharacter_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, srv, SendClientCustomCharacter_Request)() {
  return &::node_interface::srv::rosidl_typesupport_introspection_cpp::SendClientCustomCharacter_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "node_interface/srv/detail/send_client_custom_character__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SendClientCustomCharacter_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) node_interface::srv::SendClientCustomCharacter_Response(_init);
}

void SendClientCustomCharacter_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<node_interface::srv::SendClientCustomCharacter_Response *>(message_memory);
  typed_message->~SendClientCustomCharacter_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SendClientCustomCharacter_Response_message_member_array[1] = {
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface::srv::SendClientCustomCharacter_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SendClientCustomCharacter_Response_message_members = {
  "node_interface::srv",  // message namespace
  "SendClientCustomCharacter_Response",  // message name
  1,  // number of fields
  sizeof(node_interface::srv::SendClientCustomCharacter_Response),
  SendClientCustomCharacter_Response_message_member_array,  // message members
  SendClientCustomCharacter_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SendClientCustomCharacter_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SendClientCustomCharacter_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SendClientCustomCharacter_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace node_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_interface::srv::SendClientCustomCharacter_Response>()
{
  return &::node_interface::srv::rosidl_typesupport_introspection_cpp::SendClientCustomCharacter_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, srv, SendClientCustomCharacter_Response)() {
  return &::node_interface::srv::rosidl_typesupport_introspection_cpp::SendClientCustomCharacter_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "node_interface/srv/detail/send_client_custom_character__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SendClientCustomCharacter_service_members = {
  "node_interface::srv",  // service namespace
  "SendClientCustomCharacter",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<node_interface::srv::SendClientCustomCharacter>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SendClientCustomCharacter_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SendClientCustomCharacter_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace node_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<node_interface::srv::SendClientCustomCharacter>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::node_interface::srv::rosidl_typesupport_introspection_cpp::SendClientCustomCharacter_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::node_interface::srv::SendClientCustomCharacter_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::node_interface::srv::SendClientCustomCharacter_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, srv, SendClientCustomCharacter)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<node_interface::srv::SendClientCustomCharacter>();
}

#ifdef __cplusplus
}
#endif
