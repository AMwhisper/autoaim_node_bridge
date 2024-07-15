// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:msg/IcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/icra_buff_debuff_zone_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/msg/detail/icra_buff_debuff_zone_status__struct.h"
#include "node_interface/msg/detail/icra_buff_debuff_zone_status__functions.h"
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


using _IcraBuffDebuffZoneStatus__ros_msg_type = node_interface__msg__IcraBuffDebuffZoneStatus;

static bool _IcraBuffDebuffZoneStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IcraBuffDebuffZoneStatus__ros_msg_type * ros_message = static_cast<const _IcraBuffDebuffZoneStatus__ros_msg_type *>(untyped_ros_message);
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

static bool _IcraBuffDebuffZoneStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IcraBuffDebuffZoneStatus__ros_msg_type * ros_message = static_cast<_IcraBuffDebuffZoneStatus__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_node_interface__msg__IcraBuffDebuffZoneStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IcraBuffDebuffZoneStatus__ros_msg_type * ros_message = static_cast<const _IcraBuffDebuffZoneStatus__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _IcraBuffDebuffZoneStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__msg__IcraBuffDebuffZoneStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__msg__IcraBuffDebuffZoneStatus(
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
    using DataType = node_interface__msg__IcraBuffDebuffZoneStatus;
    is_plain =
      (
      offsetof(DataType, blue2_bullet_left) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IcraBuffDebuffZoneStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__msg__IcraBuffDebuffZoneStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IcraBuffDebuffZoneStatus = {
  "node_interface::msg",
  "IcraBuffDebuffZoneStatus",
  _IcraBuffDebuffZoneStatus__cdr_serialize,
  _IcraBuffDebuffZoneStatus__cdr_deserialize,
  _IcraBuffDebuffZoneStatus__get_serialized_size,
  _IcraBuffDebuffZoneStatus__max_serialized_size
};

static rosidl_message_type_support_t _IcraBuffDebuffZoneStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IcraBuffDebuffZoneStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, IcraBuffDebuffZoneStatus)() {
  return &_IcraBuffDebuffZoneStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
