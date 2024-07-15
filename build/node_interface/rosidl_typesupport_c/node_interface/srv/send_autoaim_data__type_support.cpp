// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from node_interface:srv/SendAutoaimData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "node_interface/srv/detail/send_autoaim_data__struct.h"
#include "node_interface/srv/detail/send_autoaim_data__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendAutoaimData_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendAutoaimData_Request_type_support_ids_t;

static const _SendAutoaimData_Request_type_support_ids_t _SendAutoaimData_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendAutoaimData_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendAutoaimData_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendAutoaimData_Request_type_support_symbol_names_t _SendAutoaimData_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendAutoaimData_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendAutoaimData_Request)),
  }
};

typedef struct _SendAutoaimData_Request_type_support_data_t
{
  void * data[2];
} _SendAutoaimData_Request_type_support_data_t;

static _SendAutoaimData_Request_type_support_data_t _SendAutoaimData_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendAutoaimData_Request_message_typesupport_map = {
  2,
  "node_interface",
  &_SendAutoaimData_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendAutoaimData_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendAutoaimData_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendAutoaimData_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendAutoaimData_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace node_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, node_interface, srv, SendAutoaimData_Request)() {
  return &::node_interface::srv::rosidl_typesupport_c::SendAutoaimData_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "node_interface/srv/detail/send_autoaim_data__struct.h"
// already included above
// #include "node_interface/srv/detail/send_autoaim_data__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendAutoaimData_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendAutoaimData_Response_type_support_ids_t;

static const _SendAutoaimData_Response_type_support_ids_t _SendAutoaimData_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendAutoaimData_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendAutoaimData_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendAutoaimData_Response_type_support_symbol_names_t _SendAutoaimData_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendAutoaimData_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendAutoaimData_Response)),
  }
};

typedef struct _SendAutoaimData_Response_type_support_data_t
{
  void * data[2];
} _SendAutoaimData_Response_type_support_data_t;

static _SendAutoaimData_Response_type_support_data_t _SendAutoaimData_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendAutoaimData_Response_message_typesupport_map = {
  2,
  "node_interface",
  &_SendAutoaimData_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendAutoaimData_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendAutoaimData_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendAutoaimData_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendAutoaimData_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace node_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, node_interface, srv, SendAutoaimData_Response)() {
  return &::node_interface::srv::rosidl_typesupport_c::SendAutoaimData_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "node_interface/srv/detail/send_autoaim_data__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SendAutoaimData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendAutoaimData_type_support_ids_t;

static const _SendAutoaimData_type_support_ids_t _SendAutoaimData_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendAutoaimData_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendAutoaimData_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendAutoaimData_type_support_symbol_names_t _SendAutoaimData_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendAutoaimData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendAutoaimData)),
  }
};

typedef struct _SendAutoaimData_type_support_data_t
{
  void * data[2];
} _SendAutoaimData_type_support_data_t;

static _SendAutoaimData_type_support_data_t _SendAutoaimData_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendAutoaimData_service_typesupport_map = {
  2,
  "node_interface",
  &_SendAutoaimData_service_typesupport_ids.typesupport_identifier[0],
  &_SendAutoaimData_service_typesupport_symbol_names.symbol_name[0],
  &_SendAutoaimData_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendAutoaimData_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendAutoaimData_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace node_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, node_interface, srv, SendAutoaimData)() {
  return &::node_interface::srv::rosidl_typesupport_c::SendAutoaimData_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
