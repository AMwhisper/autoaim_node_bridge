// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:msg/DebugDataType.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/debug_data_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/msg/detail/debug_data_type__struct.h"
#include "node_interface/msg/detail/debug_data_type__functions.h"
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


using _DebugDataType__ros_msg_type = node_interface__msg__DebugDataType;

static bool _DebugDataType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DebugDataType__ros_msg_type * ros_message = static_cast<const _DebugDataType__ros_msg_type *>(untyped_ros_message);
  // Field name: debug1
  {
    cdr << ros_message->debug1;
  }

  // Field name: debug2
  {
    cdr << ros_message->debug2;
  }

  // Field name: debug3
  {
    cdr << ros_message->debug3;
  }

  // Field name: debug4
  {
    cdr << ros_message->debug4;
  }

  // Field name: debug5
  {
    cdr << ros_message->debug5;
  }

  // Field name: debug6
  {
    cdr << ros_message->debug6;
  }

  // Field name: debug7
  {
    cdr << ros_message->debug7;
  }

  // Field name: debug8
  {
    cdr << ros_message->debug8;
  }

  return true;
}

static bool _DebugDataType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DebugDataType__ros_msg_type * ros_message = static_cast<_DebugDataType__ros_msg_type *>(untyped_ros_message);
  // Field name: debug1
  {
    cdr >> ros_message->debug1;
  }

  // Field name: debug2
  {
    cdr >> ros_message->debug2;
  }

  // Field name: debug3
  {
    cdr >> ros_message->debug3;
  }

  // Field name: debug4
  {
    cdr >> ros_message->debug4;
  }

  // Field name: debug5
  {
    cdr >> ros_message->debug5;
  }

  // Field name: debug6
  {
    cdr >> ros_message->debug6;
  }

  // Field name: debug7
  {
    cdr >> ros_message->debug7;
  }

  // Field name: debug8
  {
    cdr >> ros_message->debug8;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__msg__DebugDataType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DebugDataType__ros_msg_type * ros_message = static_cast<const _DebugDataType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name debug1
  {
    size_t item_size = sizeof(ros_message->debug1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug2
  {
    size_t item_size = sizeof(ros_message->debug2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug3
  {
    size_t item_size = sizeof(ros_message->debug3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug4
  {
    size_t item_size = sizeof(ros_message->debug4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug5
  {
    size_t item_size = sizeof(ros_message->debug5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug6
  {
    size_t item_size = sizeof(ros_message->debug6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug7
  {
    size_t item_size = sizeof(ros_message->debug7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name debug8
  {
    size_t item_size = sizeof(ros_message->debug8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DebugDataType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__msg__DebugDataType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__msg__DebugDataType(
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

  // member: debug1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: debug8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__msg__DebugDataType;
    is_plain =
      (
      offsetof(DataType, debug8) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DebugDataType__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__msg__DebugDataType(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DebugDataType = {
  "node_interface::msg",
  "DebugDataType",
  _DebugDataType__cdr_serialize,
  _DebugDataType__cdr_deserialize,
  _DebugDataType__get_serialized_size,
  _DebugDataType__max_serialized_size
};

static rosidl_message_type_support_t _DebugDataType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DebugDataType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, DebugDataType)() {
  return &_DebugDataType__type_support;
}

#if defined(__cplusplus)
}
#endif
