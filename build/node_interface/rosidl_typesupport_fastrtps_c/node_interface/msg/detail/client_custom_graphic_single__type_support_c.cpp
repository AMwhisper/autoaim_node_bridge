// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:msg/ClientCustomGraphicSingle.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/client_custom_graphic_single__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/msg/detail/client_custom_graphic_single__struct.h"
#include "node_interface/msg/detail/client_custom_graphic_single__functions.h"
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

#include "node_interface/msg/detail/graphic_data_type__functions.h"  // grapic_data_struct

// forward declare type support functions
size_t get_serialized_size_node_interface__msg__GraphicDataType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_node_interface__msg__GraphicDataType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, GraphicDataType)();


using _ClientCustomGraphicSingle__ros_msg_type = node_interface__msg__ClientCustomGraphicSingle;

static bool _ClientCustomGraphicSingle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClientCustomGraphicSingle__ros_msg_type * ros_message = static_cast<const _ClientCustomGraphicSingle__ros_msg_type *>(untyped_ros_message);
  // Field name: data_cmd_id
  {
    cdr << ros_message->data_cmd_id;
  }

  // Field name: send_id
  {
    cdr << ros_message->send_id;
  }

  // Field name: receiver_id
  {
    cdr << ros_message->receiver_id;
  }

  // Field name: grapic_data_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, node_interface, msg, GraphicDataType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->grapic_data_struct, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ClientCustomGraphicSingle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClientCustomGraphicSingle__ros_msg_type * ros_message = static_cast<_ClientCustomGraphicSingle__ros_msg_type *>(untyped_ros_message);
  // Field name: data_cmd_id
  {
    cdr >> ros_message->data_cmd_id;
  }

  // Field name: send_id
  {
    cdr >> ros_message->send_id;
  }

  // Field name: receiver_id
  {
    cdr >> ros_message->receiver_id;
  }

  // Field name: grapic_data_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, node_interface, msg, GraphicDataType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->grapic_data_struct))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__msg__ClientCustomGraphicSingle(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClientCustomGraphicSingle__ros_msg_type * ros_message = static_cast<const _ClientCustomGraphicSingle__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data_cmd_id
  {
    size_t item_size = sizeof(ros_message->data_cmd_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name send_id
  {
    size_t item_size = sizeof(ros_message->send_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name receiver_id
  {
    size_t item_size = sizeof(ros_message->receiver_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name grapic_data_struct

  current_alignment += get_serialized_size_node_interface__msg__GraphicDataType(
    &(ros_message->grapic_data_struct), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ClientCustomGraphicSingle__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__msg__ClientCustomGraphicSingle(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__msg__ClientCustomGraphicSingle(
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

  // member: data_cmd_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: send_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: receiver_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: grapic_data_struct
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_node_interface__msg__GraphicDataType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__msg__ClientCustomGraphicSingle;
    is_plain =
      (
      offsetof(DataType, grapic_data_struct) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ClientCustomGraphicSingle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__msg__ClientCustomGraphicSingle(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ClientCustomGraphicSingle = {
  "node_interface::msg",
  "ClientCustomGraphicSingle",
  _ClientCustomGraphicSingle__cdr_serialize,
  _ClientCustomGraphicSingle__cdr_deserialize,
  _ClientCustomGraphicSingle__get_serialized_size,
  _ClientCustomGraphicSingle__max_serialized_size
};

static rosidl_message_type_support_t _ClientCustomGraphicSingle__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClientCustomGraphicSingle,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, ClientCustomGraphicSingle)() {
  return &_ClientCustomGraphicSingle__type_support;
}

#if defined(__cplusplus)
}
#endif
