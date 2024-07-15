// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:srv/SendClientCustomGraphicSingle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "node_interface/srv/detail/send_client_custom_graphic_single__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendClientCustomGraphicSingle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendClientCustomGraphicSingle_Request_type_support_ids_t;

static const _SendClientCustomGraphicSingle_Request_type_support_ids_t _SendClientCustomGraphicSingle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendClientCustomGraphicSingle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendClientCustomGraphicSingle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendClientCustomGraphicSingle_Request_type_support_symbol_names_t _SendClientCustomGraphicSingle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_interface, srv, SendClientCustomGraphicSingle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, srv, SendClientCustomGraphicSingle_Request)),
  }
};

typedef struct _SendClientCustomGraphicSingle_Request_type_support_data_t
{
  void * data[2];
} _SendClientCustomGraphicSingle_Request_type_support_data_t;

static _SendClientCustomGraphicSingle_Request_type_support_data_t _SendClientCustomGraphicSingle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendClientCustomGraphicSingle_Request_message_typesupport_map = {
  2,
  "node_interface",
  &_SendClientCustomGraphicSingle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendClientCustomGraphicSingle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendClientCustomGraphicSingle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendClientCustomGraphicSingle_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendClientCustomGraphicSingle_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace node_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_interface::srv::SendClientCustomGraphicSingle_Request>()
{
  return &::node_interface::srv::rosidl_typesupport_cpp::SendClientCustomGraphicSingle_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, node_interface, srv, SendClientCustomGraphicSingle_Request)() {
  return get_message_type_support_handle<node_interface::srv::SendClientCustomGraphicSingle_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "node_interface/srv/detail/send_client_custom_graphic_single__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendClientCustomGraphicSingle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendClientCustomGraphicSingle_Response_type_support_ids_t;

static const _SendClientCustomGraphicSingle_Response_type_support_ids_t _SendClientCustomGraphicSingle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendClientCustomGraphicSingle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendClientCustomGraphicSingle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendClientCustomGraphicSingle_Response_type_support_symbol_names_t _SendClientCustomGraphicSingle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_interface, srv, SendClientCustomGraphicSingle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, srv, SendClientCustomGraphicSingle_Response)),
  }
};

typedef struct _SendClientCustomGraphicSingle_Response_type_support_data_t
{
  void * data[2];
} _SendClientCustomGraphicSingle_Response_type_support_data_t;

static _SendClientCustomGraphicSingle_Response_type_support_data_t _SendClientCustomGraphicSingle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendClientCustomGraphicSingle_Response_message_typesupport_map = {
  2,
  "node_interface",
  &_SendClientCustomGraphicSingle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendClientCustomGraphicSingle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendClientCustomGraphicSingle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendClientCustomGraphicSingle_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendClientCustomGraphicSingle_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace node_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<node_interface::srv::SendClientCustomGraphicSingle_Response>()
{
  return &::node_interface::srv::rosidl_typesupport_cpp::SendClientCustomGraphicSingle_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, node_interface, srv, SendClientCustomGraphicSingle_Response)() {
  return get_message_type_support_handle<node_interface::srv::SendClientCustomGraphicSingle_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "node_interface/srv/detail/send_client_custom_graphic_single__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace node_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SendClientCustomGraphicSingle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendClientCustomGraphicSingle_type_support_ids_t;

static const _SendClientCustomGraphicSingle_type_support_ids_t _SendClientCustomGraphicSingle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SendClientCustomGraphicSingle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendClientCustomGraphicSingle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendClientCustomGraphicSingle_type_support_symbol_names_t _SendClientCustomGraphicSingle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_interface, srv, SendClientCustomGraphicSingle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, node_interface, srv, SendClientCustomGraphicSingle)),
  }
};

typedef struct _SendClientCustomGraphicSingle_type_support_data_t
{
  void * data[2];
} _SendClientCustomGraphicSingle_type_support_data_t;

static _SendClientCustomGraphicSingle_type_support_data_t _SendClientCustomGraphicSingle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendClientCustomGraphicSingle_service_typesupport_map = {
  2,
  "node_interface",
  &_SendClientCustomGraphicSingle_service_typesupport_ids.typesupport_identifier[0],
  &_SendClientCustomGraphicSingle_service_typesupport_symbol_names.symbol_name[0],
  &_SendClientCustomGraphicSingle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendClientCustomGraphicSingle_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendClientCustomGraphicSingle_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace node_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<node_interface::srv::SendClientCustomGraphicSingle>()
{
  return &::node_interface::srv::rosidl_typesupport_cpp::SendClientCustomGraphicSingle_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
