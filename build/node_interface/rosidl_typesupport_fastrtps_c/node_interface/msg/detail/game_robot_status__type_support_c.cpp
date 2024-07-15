// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/game_robot_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/msg/detail/game_robot_status__struct.h"
#include "node_interface/msg/detail/game_robot_status__functions.h"
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


using _GameRobotStatus__ros_msg_type = node_interface__msg__GameRobotStatus;

static bool _GameRobotStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GameRobotStatus__ros_msg_type * ros_message = static_cast<const _GameRobotStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: robot_level
  {
    cdr << ros_message->robot_level;
  }

  // Field name: remain_hp
  {
    cdr << ros_message->remain_hp;
  }

  // Field name: max_hp
  {
    cdr << ros_message->max_hp;
  }

  // Field name: shooter_id1_17mm_cooling_rate
  {
    cdr << ros_message->shooter_id1_17mm_cooling_rate;
  }

  // Field name: shooter_id1_17mm_cooling_limit
  {
    cdr << ros_message->shooter_id1_17mm_cooling_limit;
  }

  // Field name: shooter_id1_17mm_speed_limit
  {
    cdr << ros_message->shooter_id1_17mm_speed_limit;
  }

  // Field name: shooter_id2_17mm_cooling_rate
  {
    cdr << ros_message->shooter_id2_17mm_cooling_rate;
  }

  // Field name: shooter_id2_17mm_cooling_limit
  {
    cdr << ros_message->shooter_id2_17mm_cooling_limit;
  }

  // Field name: shooter_id2_17mm_speed_limit
  {
    cdr << ros_message->shooter_id2_17mm_speed_limit;
  }

  // Field name: shooter_id1_42mm_cooling_rate
  {
    cdr << ros_message->shooter_id1_42mm_cooling_rate;
  }

  // Field name: shooter_id1_42mm_cooling_limit
  {
    cdr << ros_message->shooter_id1_42mm_cooling_limit;
  }

  // Field name: shooter_id1_42mm_speed_limit
  {
    cdr << ros_message->shooter_id1_42mm_speed_limit;
  }

  // Field name: chassis_power_limit
  {
    cdr << ros_message->chassis_power_limit;
  }

  // Field name: mains_power_gimbal_output
  {
    cdr << ros_message->mains_power_gimbal_output;
  }

  // Field name: mains_power_chassis_output
  {
    cdr << ros_message->mains_power_chassis_output;
  }

  // Field name: mains_power_shooter_output
  {
    cdr << ros_message->mains_power_shooter_output;
  }

  return true;
}

static bool _GameRobotStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GameRobotStatus__ros_msg_type * ros_message = static_cast<_GameRobotStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: robot_level
  {
    cdr >> ros_message->robot_level;
  }

  // Field name: remain_hp
  {
    cdr >> ros_message->remain_hp;
  }

  // Field name: max_hp
  {
    cdr >> ros_message->max_hp;
  }

  // Field name: shooter_id1_17mm_cooling_rate
  {
    cdr >> ros_message->shooter_id1_17mm_cooling_rate;
  }

  // Field name: shooter_id1_17mm_cooling_limit
  {
    cdr >> ros_message->shooter_id1_17mm_cooling_limit;
  }

  // Field name: shooter_id1_17mm_speed_limit
  {
    cdr >> ros_message->shooter_id1_17mm_speed_limit;
  }

  // Field name: shooter_id2_17mm_cooling_rate
  {
    cdr >> ros_message->shooter_id2_17mm_cooling_rate;
  }

  // Field name: shooter_id2_17mm_cooling_limit
  {
    cdr >> ros_message->shooter_id2_17mm_cooling_limit;
  }

  // Field name: shooter_id2_17mm_speed_limit
  {
    cdr >> ros_message->shooter_id2_17mm_speed_limit;
  }

  // Field name: shooter_id1_42mm_cooling_rate
  {
    cdr >> ros_message->shooter_id1_42mm_cooling_rate;
  }

  // Field name: shooter_id1_42mm_cooling_limit
  {
    cdr >> ros_message->shooter_id1_42mm_cooling_limit;
  }

  // Field name: shooter_id1_42mm_speed_limit
  {
    cdr >> ros_message->shooter_id1_42mm_speed_limit;
  }

  // Field name: chassis_power_limit
  {
    cdr >> ros_message->chassis_power_limit;
  }

  // Field name: mains_power_gimbal_output
  {
    cdr >> ros_message->mains_power_gimbal_output;
  }

  // Field name: mains_power_chassis_output
  {
    cdr >> ros_message->mains_power_chassis_output;
  }

  // Field name: mains_power_shooter_output
  {
    cdr >> ros_message->mains_power_shooter_output;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__msg__GameRobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GameRobotStatus__ros_msg_type * ros_message = static_cast<const _GameRobotStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_level
  {
    size_t item_size = sizeof(ros_message->robot_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_hp
  {
    size_t item_size = sizeof(ros_message->remain_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_hp
  {
    size_t item_size = sizeof(ros_message->max_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id1_17mm_cooling_rate
  {
    size_t item_size = sizeof(ros_message->shooter_id1_17mm_cooling_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id1_17mm_cooling_limit
  {
    size_t item_size = sizeof(ros_message->shooter_id1_17mm_cooling_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id1_17mm_speed_limit
  {
    size_t item_size = sizeof(ros_message->shooter_id1_17mm_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id2_17mm_cooling_rate
  {
    size_t item_size = sizeof(ros_message->shooter_id2_17mm_cooling_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id2_17mm_cooling_limit
  {
    size_t item_size = sizeof(ros_message->shooter_id2_17mm_cooling_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id2_17mm_speed_limit
  {
    size_t item_size = sizeof(ros_message->shooter_id2_17mm_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id1_42mm_cooling_rate
  {
    size_t item_size = sizeof(ros_message->shooter_id1_42mm_cooling_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id1_42mm_cooling_limit
  {
    size_t item_size = sizeof(ros_message->shooter_id1_42mm_cooling_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_id1_42mm_speed_limit
  {
    size_t item_size = sizeof(ros_message->shooter_id1_42mm_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chassis_power_limit
  {
    size_t item_size = sizeof(ros_message->chassis_power_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mains_power_gimbal_output
  {
    size_t item_size = sizeof(ros_message->mains_power_gimbal_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mains_power_chassis_output
  {
    size_t item_size = sizeof(ros_message->mains_power_chassis_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mains_power_shooter_output
  {
    size_t item_size = sizeof(ros_message->mains_power_shooter_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GameRobotStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__msg__GameRobotStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__msg__GameRobotStatus(
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

  // member: robot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: remain_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: max_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id1_17mm_cooling_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id1_17mm_cooling_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id1_17mm_speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id2_17mm_cooling_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id2_17mm_cooling_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id2_17mm_speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id1_42mm_cooling_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id1_42mm_cooling_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_id1_42mm_speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: chassis_power_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mains_power_gimbal_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mains_power_chassis_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mains_power_shooter_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__msg__GameRobotStatus;
    is_plain =
      (
      offsetof(DataType, mains_power_shooter_output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GameRobotStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__msg__GameRobotStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GameRobotStatus = {
  "node_interface::msg",
  "GameRobotStatus",
  _GameRobotStatus__cdr_serialize,
  _GameRobotStatus__cdr_deserialize,
  _GameRobotStatus__get_serialized_size,
  _GameRobotStatus__max_serialized_size
};

static rosidl_message_type_support_t _GameRobotStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GameRobotStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, GameRobotStatus)() {
  return &_GameRobotStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
