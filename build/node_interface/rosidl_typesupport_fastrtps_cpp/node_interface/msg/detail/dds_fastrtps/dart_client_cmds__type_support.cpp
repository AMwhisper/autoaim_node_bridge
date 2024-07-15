// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:msg/DartClientCmds.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/dart_client_cmds__rosidl_typesupport_fastrtps_cpp.hpp"
#include "node_interface/msg/detail/dart_client_cmds__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace node_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
cdr_serialize(
  const node_interface::msg::DartClientCmds & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dart_launch_opening_status
  cdr << ros_message.dart_launch_opening_status;
  // Member: dart_attack_target
  cdr << ros_message.dart_attack_target;
  // Member: target_change_time
  cdr << ros_message.target_change_time;
  // Member: first_dart_speed
  cdr << ros_message.first_dart_speed;
  // Member: second_dart_speed
  cdr << ros_message.second_dart_speed;
  // Member: third_dart_speed
  cdr << ros_message.third_dart_speed;
  // Member: fourth_dart_speed
  cdr << ros_message.fourth_dart_speed;
  // Member: last_dart_launch_time
  cdr << ros_message.last_dart_launch_time;
  // Member: operate_launch_cmd_time
  cdr << ros_message.operate_launch_cmd_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  node_interface::msg::DartClientCmds & ros_message)
{
  // Member: dart_launch_opening_status
  cdr >> ros_message.dart_launch_opening_status;

  // Member: dart_attack_target
  cdr >> ros_message.dart_attack_target;

  // Member: target_change_time
  cdr >> ros_message.target_change_time;

  // Member: first_dart_speed
  cdr >> ros_message.first_dart_speed;

  // Member: second_dart_speed
  cdr >> ros_message.second_dart_speed;

  // Member: third_dart_speed
  cdr >> ros_message.third_dart_speed;

  // Member: fourth_dart_speed
  cdr >> ros_message.fourth_dart_speed;

  // Member: last_dart_launch_time
  cdr >> ros_message.last_dart_launch_time;

  // Member: operate_launch_cmd_time
  cdr >> ros_message.operate_launch_cmd_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
get_serialized_size(
  const node_interface::msg::DartClientCmds & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dart_launch_opening_status
  {
    size_t item_size = sizeof(ros_message.dart_launch_opening_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dart_attack_target
  {
    size_t item_size = sizeof(ros_message.dart_attack_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_change_time
  {
    size_t item_size = sizeof(ros_message.target_change_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: first_dart_speed
  {
    size_t item_size = sizeof(ros_message.first_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: second_dart_speed
  {
    size_t item_size = sizeof(ros_message.second_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: third_dart_speed
  {
    size_t item_size = sizeof(ros_message.third_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fourth_dart_speed
  {
    size_t item_size = sizeof(ros_message.fourth_dart_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_dart_launch_time
  {
    size_t item_size = sizeof(ros_message.last_dart_launch_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operate_launch_cmd_time
  {
    size_t item_size = sizeof(ros_message.operate_launch_cmd_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
max_serialized_size_DartClientCmds(
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


  // Member: dart_launch_opening_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dart_attack_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: target_change_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: first_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: second_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: third_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fourth_dart_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: last_dart_launch_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: operate_launch_cmd_time
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
    using DataType = node_interface::msg::DartClientCmds;
    is_plain =
      (
      offsetof(DataType, operate_launch_cmd_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DartClientCmds__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const node_interface::msg::DartClientCmds *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DartClientCmds__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<node_interface::msg::DartClientCmds *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DartClientCmds__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const node_interface::msg::DartClientCmds *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DartClientCmds__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DartClientCmds(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DartClientCmds__callbacks = {
  "node_interface::msg",
  "DartClientCmds",
  _DartClientCmds__cdr_serialize,
  _DartClientCmds__cdr_deserialize,
  _DartClientCmds__get_serialized_size,
  _DartClientCmds__max_serialized_size
};

static rosidl_message_type_support_t _DartClientCmds__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DartClientCmds__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace node_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_node_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<node_interface::msg::DartClientCmds>()
{
  return &node_interface::msg::typesupport_fastrtps_cpp::_DartClientCmds__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_interface, msg, DartClientCmds)() {
  return &node_interface::msg::typesupport_fastrtps_cpp::_DartClientCmds__handle;
}

#ifdef __cplusplus
}
#endif