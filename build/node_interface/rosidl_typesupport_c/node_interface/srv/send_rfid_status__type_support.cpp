// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from node_interface:srv/SendRfidStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "node_interface/srv/detail/send_rfid_status__struct.h"
#include "node_interface/srv/detail/send_rfid_status__type_support.h"
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

typedef struct _SendRfidStatus_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendRfidStatus_Request_type_support_ids_t;

static const _SendRfidStatus_Request_type_support_ids_t _SendRfidStatus_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendRfidStatus_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendRfidStatus_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendRfidStatus_Request_type_support_symbol_names_t _SendRfidStatus_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendRfidStatus_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendRfidStatus_Request)),
  }
};

typedef struct _SendRfidStatus_Request_type_support_data_t
{
  void * data[2];
} _SendRfidStatus_Request_type_support_data_t;

static _SendRfidStatus_Request_type_support_data_t _SendRfidStatus_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendRfidStatus_Request_message_typesupport_map = {
  2,
  "node_interface",
  &_SendRfidStatus_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SendRfidStatus_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SendRfidStatus_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendRfidStatus_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendRfidStatus_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, node_interface, srv, SendRfidStatus_Request)() {
  return &::node_interface::srv::rosidl_typesupport_c::SendRfidStatus_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "node_interface/srv/detail/send_rfid_status__struct.h"
// already included above
// #include "node_interface/srv/detail/send_rfid_status__type_support.h"
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

typedef struct _SendRfidStatus_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendRfidStatus_Response_type_support_ids_t;

static const _SendRfidStatus_Response_type_support_ids_t _SendRfidStatus_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendRfidStatus_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendRfidStatus_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendRfidStatus_Response_type_support_symbol_names_t _SendRfidStatus_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendRfidStatus_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendRfidStatus_Response)),
  }
};

typedef struct _SendRfidStatus_Response_type_support_data_t
{
  void * data[2];
} _SendRfidStatus_Response_type_support_data_t;

static _SendRfidStatus_Response_type_support_data_t _SendRfidStatus_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendRfidStatus_Response_message_typesupport_map = {
  2,
  "node_interface",
  &_SendRfidStatus_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SendRfidStatus_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SendRfidStatus_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SendRfidStatus_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendRfidStatus_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, node_interface, srv, SendRfidStatus_Response)() {
  return &::node_interface::srv::rosidl_typesupport_c::SendRfidStatus_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "node_interface/srv/detail/send_rfid_status__type_support.h"
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

typedef struct _SendRfidStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SendRfidStatus_type_support_ids_t;

static const _SendRfidStatus_type_support_ids_t _SendRfidStatus_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SendRfidStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SendRfidStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SendRfidStatus_type_support_symbol_names_t _SendRfidStatus_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendRfidStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, node_interface, srv, SendRfidStatus)),
  }
};

typedef struct _SendRfidStatus_type_support_data_t
{
  void * data[2];
} _SendRfidStatus_type_support_data_t;

static _SendRfidStatus_type_support_data_t _SendRfidStatus_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SendRfidStatus_service_typesupport_map = {
  2,
  "node_interface",
  &_SendRfidStatus_service_typesupport_ids.typesupport_identifier[0],
  &_SendRfidStatus_service_typesupport_symbol_names.symbol_name[0],
  &_SendRfidStatus_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SendRfidStatus_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SendRfidStatus_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, node_interface, srv, SendRfidStatus)() {
  return &::node_interface::srv::rosidl_typesupport_c::SendRfidStatus_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
