// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:msg/DartClientCmds.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/dart_client_cmds__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/msg/detail/dart_client_cmds__struct.h"
#include "node_interface/msg/detail/dart_client_cmds__functions.h"
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


using _DartClientCmds__ros_msg_type = node_interface__msg__DartClientCmds;

static bool _DartClientCmds__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DartClientCmds__ros_msg_type * ros_message = static_cast<const _DartClientCmds__ros_msg_type *>(untyped_ros_message);
  // Field name: dart_launch_opening_status
  {
    cdr << ros_message->dart_launch_opening_status;
  }

  // Field name: dart_attack_target
  {
    cdr << ros_message->dart_attack_target;
  }

  // Field name: target_change_time
  {
    cdr << ros_message->target_change_time;
  }

  // Field name: first_dart_speed
  {
    cdr << ros_message->first_dart_speed;
  }

  // Field name: second_dart_speed
  {
    cdr << ros_message->second_dart_speed;
  }

  // Field name: third_dart_speed
  {
    cdr << ros_message->third_dart_speed;
  }

  // Field name: fourth_dart_speed
  {
    cdr << ros_message->fourth_dart_speed;
  }

  // Field name: last_dart_launch_time
  {
    cdr << ros_message->last_dart_launch_time;
  }

  // Field name: operate_launch_cmd_time
  {
    cdr << ros_message->operate_launch_cmd_time;
  }

  return true;
}

static bool _DartClientCmds__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DartClientCmds__ros_msg_type * ros_message = static_cast<_DartClientCmds__ros_msg_type *>(untyped_ros_message);
  // Field name: dart_launch_opening_status
  {
    cdr >> ros_message->dart_launch_opening_status;
  }

  // Field name: dart_attack_target
  {
    cdr >> ros_message->dart_attack_target;
  }

  // Field name: target_change_time
  {
    cdr >> ros_message->target_change_time;
  }

  // Field name: first_dart_speed
  {
    cdr >> ros_message->first_dart_speed;
  }

  // Field name: second_dart_speed
  {
    cdr >> ros_message->second_dart_speed;
  }

  // Field name: third_dart_speed
  {
    cdr >> ros_message->third_dart_speed;
  }

  // Field name: fourth_dart_speed
  {
    cdr >> ros_message->fourth_dart_speed;
  }

  // Field name: last_dart_launch_time
  {
    cdr >> ros_message->last_dart_launch_time;
  }

  // Field name: operate_launch_cmd_time
  {
    cdr >> ros_message->operate_launch_cmd_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__msg__DartClientCmds(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DartClientCmds__ros_msg_type * ros_message = static_cast<const _DartClientCmds__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dart_launch_opening_status
  {
    size_t item_size = sizeof(ros_message->dart_launch_opening_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dart_attack_target
  {
    size_t item_size = sizeof(ros_message->dart_attack_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_change_time
  {
    size_t item_size = sizeof(ros_message->target_change_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name first_dart_speed
  {
    size_t item_size = sizeof(ros_message->first_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name second_dart_speed
  {
    size_t item_size = sizeof(ros_message->second_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name third_dart_speed
  {
    size_t item_size = sizeof(ros_message->third_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fourth_dart_speed
  {
    size_t item_size = sizeof(ros_message->fourth_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_dart_launch_time
  {
    size_t item_size = sizeof(ros_message->last_dart_launch_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operate_launch_cmd_time
  {
    size_t item_size = sizeof(ros_message->operate_launch_cmd_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DartClientCmds__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__msg__DartClientCmds(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__msg__DartClientCmds(
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

  // member: dart_launch_opening_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dart_attack_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_change_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: first_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: second_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: third_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fourth_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: last_dart_launch_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: operate_launch_cmd_time
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
    using DataType = node_interface__msg__DartClientCmds;
    is_plain =
      (
      offsetof(DataType, operate_launch_cmd_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DartClientCmds__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__msg__DartClientCmds(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DartClientCmds = {
  "node_interface::msg",
  "DartClientCmds",
  _DartClientCmds__cdr_serialize,
  _DartClientCmds__cdr_deserialize,
  _DartClientCmds__get_serialized_size,
  _DartClientCmds__max_serialized_size
};

static rosidl_message_type_support_t _DartClientCmds__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DartClientCmds,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, DartClientCmds)() {
  return &_DartClientCmds__type_support;
}

#if defined(__cplusplus)
}
#endif
