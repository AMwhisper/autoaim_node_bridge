// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:srv/SendIcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice
#include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__struct.h"
#include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SendIcraBuffDebuffZoneStatus_Request__ros_msg_type = node_interface__srv__SendIcraBuffDebuffZoneStatus_Request;

static bool _SendIcraBuffDebuffZoneStatus_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendIcraBuffDebuffZoneStatus_Request__ros_msg_type * ros_message = static_cast<const _SendIcraBuffDebuffZoneStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: f1_zone_status
  {
    cdr << ros_message->f1_zone_status;
  }

  // Field name: f1_zone_buff_debuff_status
  {
    cdr << ros_message->f1_zone_buff_debuff_status;
  }

  // Field name: f2_zone_status
  {
    cdr << ros_message->f2_zone_status;
  }

  // Field name: f2_zone_buff_debuff_status
  {
    cdr << ros_message->f2_zone_buff_debuff_status;
  }

  // Field name: f3_zone_status
  {
    cdr << ros_message->f3_zone_status;
  }

  // Field name: f3_zone_buff_debuff_status
  {
    cdr << ros_message->f3_zone_buff_debuff_status;
  }

  // Field name: f4_zone_status
  {
    cdr << ros_message->f4_zone_status;
  }

  // Field name: f4_zone_buff_debuff_status
  {
    cdr << ros_message->f4_zone_buff_debuff_status;
  }

  // Field name: f5_zone_status
  {
    cdr << ros_message->f5_zone_status;
  }

  // Field name: f5_zone_buff_debuff_status
  {
    cdr << ros_message->f5_zone_buff_debuff_status;
  }

  // Field name: f6_zone_status
  {
    cdr << ros_message->f6_zone_status;
  }

  // Field name: f6_zone_buff_debuff_status
  {
    cdr << ros_message->f6_zone_buff_debuff_status;
  }

  // Field name: red1_bullet_left
  {
    cdr << ros_message->red1_bullet_left;
  }

  // Field name: red2_bullet_left
  {
    cdr << ros_message->red2_bullet_left;
  }

  // Field name: blue1_bullet_left
  {
    cdr << ros_message->blue1_bullet_left;
  }

  // Field name: blue2_bullet_left
  {
    cdr << ros_message->blue2_bullet_left;
  }

  return true;
}

static bool _SendIcraBuffDebuffZoneStatus_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendIcraBuffDebuffZoneStatus_Request__ros_msg_type * ros_message = static_cast<_SendIcraBuffDebuffZoneStatus_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: f1_zone_status
  {
    cdr >> ros_message->f1_zone_status;
  }

  // Field name: f1_zone_buff_debuff_status
  {
    cdr >> ros_message->f1_zone_buff_debuff_status;
  }

  // Field name: f2_zone_status
  {
    cdr >> ros_message->f2_zone_status;
  }

  // Field name: f2_zone_buff_debuff_status
  {
    cdr >> ros_message->f2_zone_buff_debuff_status;
  }

  // Field name: f3_zone_status
  {
    cdr >> ros_message->f3_zone_status;
  }

  // Field name: f3_zone_buff_debuff_status
  {
    cdr >> ros_message->f3_zone_buff_debuff_status;
  }

  // Field name: f4_zone_status
  {
    cdr >> ros_message->f4_zone_status;
  }

  // Field name: f4_zone_buff_debuff_status
  {
    cdr >> ros_message->f4_zone_buff_debuff_status;
  }

  // Field name: f5_zone_status
  {
    cdr >> ros_message->f5_zone_status;
  }

  // Field name: f5_zone_buff_debuff_status
  {
    cdr >> ros_message->f5_zone_buff_debuff_status;
  }

  // Field name: f6_zone_status
  {
    cdr >> ros_message->f6_zone_status;
  }

  // Field name: f6_zone_buff_debuff_status
  {
    cdr >> ros_message->f6_zone_buff_debuff_status;
  }

  // Field name: red1_bullet_left
  {
    cdr >> ros_message->red1_bullet_left;
  }

  // Field name: red2_bullet_left
  {
    cdr >> ros_message->red2_bullet_left;
  }

  // Field name: blue1_bullet_left
  {
    cdr >> ros_message->blue1_bullet_left;
  }

  // Field name: blue2_bullet_left
  {
    cdr >> ros_message->blue2_bullet_left;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendIcraBuffDebuffZoneStatus_Request__ros_msg_type * ros_message = static_cast<const _SendIcraBuffDebuffZoneStatus_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name f1_zone_status
  {
    size_t item_size = sizeof(ros_message->f1_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f1_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f1_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2_zone_status
  {
    size_t item_size = sizeof(ros_message->f2_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f2_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f2_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3_zone_status
  {
    size_t item_size = sizeof(ros_message->f3_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f3_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f3_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f4_zone_status
  {
    size_t item_size = sizeof(ros_message->f4_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f4_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f4_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f5_zone_status
  {
    size_t item_size = sizeof(ros_message->f5_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f5_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f5_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f6_zone_status
  {
    size_t item_size = sizeof(ros_message->f6_zone_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f6_zone_buff_debuff_status
  {
    size_t item_size = sizeof(ros_message->f6_zone_buff_debuff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red1_bullet_left
  {
    size_t item_size = sizeof(ros_message->red1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red2_bullet_left
  {
    size_t item_size = sizeof(ros_message->red2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue1_bullet_left
  {
    size_t item_size = sizeof(ros_message->blue1_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue2_bullet_left
  {
    size_t item_size = sizeof(ros_message->blue2_bullet_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SendIcraBuffDebuffZoneStatus_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: f1_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f1_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f2_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f2_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f3_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f3_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f4_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f4_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f5_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f5_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f6_zone_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f6_zone_buff_debuff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: red1_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red2_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue1_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue2_bullet_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__srv__SendIcraBuffDebuffZoneStatus_Request;
    is_plain =
      (
      offsetof(DataType, blue2_bullet_left) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SendIcraBuffDebuffZoneStatus_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SendIcraBuffDebuffZoneStatus_Request = {
  "node_interface::srv",
  "SendIcraBuffDebuffZoneStatus_Request",
  _SendIcraBuffDebuffZoneStatus_Request__cdr_serialize,
  _SendIcraBuffDebuffZoneStatus_Request__cdr_deserialize,
  _SendIcraBuffDebuffZoneStatus_Request__get_serialized_size,
  _SendIcraBuffDebuffZoneStatus_Request__max_serialized_size
};

static rosidl_message_type_support_t _SendIcraBuffDebuffZoneStatus_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendIcraBuffDebuffZoneStatus_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendIcraBuffDebuffZoneStatus_Request)() {
  return &_SendIcraBuffDebuffZoneStatus_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__struct.h"
// already included above
// #include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // result
#include "rosidl_runtime_c/string_functions.h"  // result

// forward declare type support functions


using _SendIcraBuffDebuffZoneStatus_Response__ros_msg_type = node_interface__srv__SendIcraBuffDebuffZoneStatus_Response;

static bool _SendIcraBuffDebuffZoneStatus_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendIcraBuffDebuffZoneStatus_Response__ros_msg_type * ros_message = static_cast<const _SendIcraBuffDebuffZoneStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const rosidl_runtime_c__String * str = &ros_message->result;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SendIcraBuffDebuffZoneStatus_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendIcraBuffDebuffZoneStatus_Response__ros_msg_type * ros_message = static_cast<_SendIcraBuffDebuffZoneStatus_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result.data) {
      rosidl_runtime_c__String__init(&ros_message->result);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendIcraBuffDebuffZoneStatus_Response__ros_msg_type * ros_message = static_cast<const _SendIcraBuffDebuffZoneStatus_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SendIcraBuffDebuffZoneStatus_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__srv__SendIcraBuffDebuffZoneStatus_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SendIcraBuffDebuffZoneStatus_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__srv__SendIcraBuffDebuffZoneStatus_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SendIcraBuffDebuffZoneStatus_Response = {
  "node_interface::srv",
  "SendIcraBuffDebuffZoneStatus_Response",
  _SendIcraBuffDebuffZoneStatus_Response__cdr_serialize,
  _SendIcraBuffDebuffZoneStatus_Response__cdr_deserialize,
  _SendIcraBuffDebuffZoneStatus_Response__get_serialized_size,
  _SendIcraBuffDebuffZoneStatus_Response__max_serialized_size
};

static rosidl_message_type_support_t _SendIcraBuffDebuffZoneStatus_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendIcraBuffDebuffZoneStatus_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendIcraBuffDebuffZoneStatus_Response)() {
  return &_SendIcraBuffDebuffZoneStatus_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/srv/send_icra_buff_debuff_zone_status.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SendIcraBuffDebuffZoneStatus__callbacks = {
  "node_interface::srv",
  "SendIcraBuffDebuffZoneStatus",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendIcraBuffDebuffZoneStatus_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendIcraBuffDebuffZoneStatus_Response)(),
};

static rosidl_service_type_support_t SendIcraBuffDebuffZoneStatus__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SendIcraBuffDebuffZoneStatus__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendIcraBuffDebuffZoneStatus)() {
  return &SendIcraBuffDebuffZoneStatus__handle;
}

#if defined(__cplusplus)
}
#endif
