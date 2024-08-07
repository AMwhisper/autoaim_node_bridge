// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:msg/JointState.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/joint_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/msg/detail/joint_state__struct.h"
#include "node_interface/msg/detail/joint_state__functions.h"
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


using _JointState__ros_msg_type = node_interface__msg__JointState;

static bool _JointState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointState__ros_msg_type * ros_message = static_cast<const _JointState__ros_msg_type *>(untyped_ros_message);
  // Field name: state_code
  {
    cdr << ros_message->state_code;
  }

  // Field name: base_joint_position
  {
    cdr << ros_message->base_joint_position;
  }

  // Field name: base_joint_speed
  {
    cdr << ros_message->base_joint_speed;
  }

  // Field name: shoulder_joint_position
  {
    cdr << ros_message->shoulder_joint_position;
  }

  // Field name: shoulder_joint_speed
  {
    cdr << ros_message->shoulder_joint_speed;
  }

  // Field name: elbow_joint_position
  {
    cdr << ros_message->elbow_joint_position;
  }

  // Field name: elbow_joint_speed
  {
    cdr << ros_message->elbow_joint_speed;
  }

  // Field name: wrist_joint_1_position
  {
    cdr << ros_message->wrist_joint_1_position;
  }

  // Field name: wrist_joint_1_speed
  {
    cdr << ros_message->wrist_joint_1_speed;
  }

  // Field name: wrist_joint_2_position
  {
    cdr << ros_message->wrist_joint_2_position;
  }

  // Field name: wrist_joint_2_speed
  {
    cdr << ros_message->wrist_joint_2_speed;
  }

  return true;
}

static bool _JointState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointState__ros_msg_type * ros_message = static_cast<_JointState__ros_msg_type *>(untyped_ros_message);
  // Field name: state_code
  {
    cdr >> ros_message->state_code;
  }

  // Field name: base_joint_position
  {
    cdr >> ros_message->base_joint_position;
  }

  // Field name: base_joint_speed
  {
    cdr >> ros_message->base_joint_speed;
  }

  // Field name: shoulder_joint_position
  {
    cdr >> ros_message->shoulder_joint_position;
  }

  // Field name: shoulder_joint_speed
  {
    cdr >> ros_message->shoulder_joint_speed;
  }

  // Field name: elbow_joint_position
  {
    cdr >> ros_message->elbow_joint_position;
  }

  // Field name: elbow_joint_speed
  {
    cdr >> ros_message->elbow_joint_speed;
  }

  // Field name: wrist_joint_1_position
  {
    cdr >> ros_message->wrist_joint_1_position;
  }

  // Field name: wrist_joint_1_speed
  {
    cdr >> ros_message->wrist_joint_1_speed;
  }

  // Field name: wrist_joint_2_position
  {
    cdr >> ros_message->wrist_joint_2_position;
  }

  // Field name: wrist_joint_2_speed
  {
    cdr >> ros_message->wrist_joint_2_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointState__ros_msg_type * ros_message = static_cast<const _JointState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state_code
  {
    size_t item_size = sizeof(ros_message->state_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_joint_position
  {
    size_t item_size = sizeof(ros_message->base_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_joint_speed
  {
    size_t item_size = sizeof(ros_message->base_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder_joint_position
  {
    size_t item_size = sizeof(ros_message->shoulder_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder_joint_speed
  {
    size_t item_size = sizeof(ros_message->shoulder_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_joint_position
  {
    size_t item_size = sizeof(ros_message->elbow_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_joint_speed
  {
    size_t item_size = sizeof(ros_message->elbow_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_1_position
  {
    size_t item_size = sizeof(ros_message->wrist_joint_1_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_1_speed
  {
    size_t item_size = sizeof(ros_message->wrist_joint_1_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_2_position
  {
    size_t item_size = sizeof(ros_message->wrist_joint_2_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_2_speed
  {
    size_t item_size = sizeof(ros_message->wrist_joint_2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__msg__JointState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__msg__JointState(
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

  // member: state_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: base_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: base_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shoulder_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shoulder_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: elbow_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: elbow_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_1_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_1_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_2_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_2_speed
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
    using DataType = node_interface__msg__JointState;
    is_plain =
      (
      offsetof(DataType, wrist_joint_2_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__msg__JointState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointState = {
  "node_interface::msg",
  "JointState",
  _JointState__cdr_serialize,
  _JointState__cdr_deserialize,
  _JointState__get_serialized_size,
  _JointState__max_serialized_size
};

static rosidl_message_type_support_t _JointState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, JointState)() {
  return &_JointState__type_support;
}

#if defined(__cplusplus)
}
#endif
