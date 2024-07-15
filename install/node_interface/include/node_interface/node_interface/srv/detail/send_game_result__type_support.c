// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from node_interface:srv/SendGameResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "node_interface/srv/detail/send_game_result__rosidl_typesupport_introspection_c.h"
#include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "node_interface/srv/detail/send_game_result__functions.h"
#include "node_interface/srv/detail/send_game_result__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__srv__SendGameResult_Request__init(message_memory);
}

void node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_fini_function(void * message_memory)
{
  node_interface__srv__SendGameResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_member_array[1] = {
  {
    "winner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__srv__SendGameResult_Request, winner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_members = {
  "node_interface__srv",  // message namespace
  "SendGameResult_Request",  // message name
  1,  // number of fields
  sizeof(node_interface__srv__SendGameResult_Request),
  node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_member_array,  // message members
  node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_type_support_handle = {
  0,
  &node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendGameResult_Request)() {
  if (!node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_type_support_handle.typesupport_identifier) {
    node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__srv__SendGameResult_Request__rosidl_typesupport_introspection_c__SendGameResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "node_interface/srv/detail/send_game_result__rosidl_typesupport_introspection_c.h"
// already included above
// #include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "node_interface/srv/detail/send_game_result__functions.h"
// already included above
// #include "node_interface/srv/detail/send_game_result__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  node_interface__srv__SendGameResult_Response__init(message_memory);
}

void node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_fini_function(void * message_memory)
{
  node_interface__srv__SendGameResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(node_interface__srv__SendGameResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_members = {
  "node_interface__srv",  // message namespace
  "SendGameResult_Response",  // message name
  1,  // number of fields
  sizeof(node_interface__srv__SendGameResult_Response),
  node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_member_array,  // message members
  node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_type_support_handle = {
  0,
  &node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendGameResult_Response)() {
  if (!node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_type_support_handle.typesupport_identifier) {
    node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &node_interface__srv__SendGameResult_Response__rosidl_typesupport_introspection_c__SendGameResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "node_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "node_interface/srv/detail/send_game_result__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_service_members = {
  "node_interface__srv",  // service namespace
  "SendGameResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_Request_message_type_support_handle,
  NULL  // response message
  // node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_service_type_support_handle = {
  0,
  &node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendGameResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendGameResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_node_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendGameResult)() {
  if (!node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_service_type_support_handle.typesupport_identifier) {
    node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendGameResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendGameResult_Response)()->data;
  }

  return &node_interface__srv__detail__send_game_result__rosidl_typesupport_introspection_c__SendGameResult_service_type_support_handle;
}
