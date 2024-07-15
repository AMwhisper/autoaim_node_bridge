// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/game_robot_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "node_interface/msg/detail/game_robot_status__struct.hpp"

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
  const node_interface::msg::GameRobotStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_id
  cdr << ros_message.robot_id;
  // Member: robot_level
  cdr << ros_message.robot_level;
  // Member: remain_hp
  cdr << ros_message.remain_hp;
  // Member: max_hp
  cdr << ros_message.max_hp;
  // Member: shooter_id1_17mm_cooling_rate
  cdr << ros_message.shooter_id1_17mm_cooling_rate;
  // Member: shooter_id1_17mm_cooling_limit
  cdr << ros_message.shooter_id1_17mm_cooling_limit;
  // Member: shooter_id1_17mm_speed_limit
  cdr << ros_message.shooter_id1_17mm_speed_limit;
  // Member: shooter_id2_17mm_cooling_rate
  cdr << ros_message.shooter_id2_17mm_cooling_rate;
  // Member: shooter_id2_17mm_cooling_limit
  cdr << ros_message.shooter_id2_17mm_cooling_limit;
  // Member: shooter_id2_17mm_speed_limit
  cdr << ros_message.shooter_id2_17mm_speed_limit;
  // Member: shooter_id1_42mm_cooling_rate
  cdr << ros_message.shooter_id1_42mm_cooling_rate;
  // Member: shooter_id1_42mm_cooling_limit
  cdr << ros_message.shooter_id1_42mm_cooling_limit;
  // Member: shooter_id1_42mm_speed_limit
  cdr << ros_message.shooter_id1_42mm_speed_limit;
  // Member: chassis_power_limit
  cdr << ros_message.chassis_power_limit;
  // Member: mains_power_gimbal_output
  cdr << ros_message.mains_power_gimbal_output;
  // Member: mains_power_chassis_output
  cdr << ros_message.mains_power_chassis_output;
  // Member: mains_power_shooter_output
  cdr << ros_message.mains_power_shooter_output;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  node_interface::msg::GameRobotStatus & ros_message)
{
  // Member: robot_id
  cdr >> ros_message.robot_id;

  // Member: robot_level
  cdr >> ros_message.robot_level;

  // Member: remain_hp
  cdr >> ros_message.remain_hp;

  // Member: max_hp
  cdr >> ros_message.max_hp;

  // Member: shooter_id1_17mm_cooling_rate
  cdr >> ros_message.shooter_id1_17mm_cooling_rate;

  // Member: shooter_id1_17mm_cooling_limit
  cdr >> ros_message.shooter_id1_17mm_cooling_limit;

  // Member: shooter_id1_17mm_speed_limit
  cdr >> ros_message.shooter_id1_17mm_speed_limit;

  // Member: shooter_id2_17mm_cooling_rate
  cdr >> ros_message.shooter_id2_17mm_cooling_rate;

  // Member: shooter_id2_17mm_cooling_limit
  cdr >> ros_message.shooter_id2_17mm_cooling_limit;

  // Member: shooter_id2_17mm_speed_limit
  cdr >> ros_message.shooter_id2_17mm_speed_limit;

  // Member: shooter_id1_42mm_cooling_rate
  cdr >> ros_message.shooter_id1_42mm_cooling_rate;

  // Member: shooter_id1_42mm_cooling_limit
  cdr >> ros_message.shooter_id1_42mm_cooling_limit;

  // Member: shooter_id1_42mm_speed_limit
  cdr >> ros_message.shooter_id1_42mm_speed_limit;

  // Member: chassis_power_limit
  cdr >> ros_message.chassis_power_limit;

  // Member: mains_power_gimbal_output
  cdr >> ros_message.mains_power_gimbal_output;

  // Member: mains_power_chassis_output
  cdr >> ros_message.mains_power_chassis_output;

  // Member: mains_power_shooter_output
  cdr >> ros_message.mains_power_shooter_output;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
get_serialized_size(
  const node_interface::msg::GameRobotStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_id
  {
    size_t item_size = sizeof(ros_message.robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_level
  {
    size_t item_size = sizeof(ros_message.robot_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_hp
  {
    size_t item_size = sizeof(ros_message.remain_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_hp
  {
    size_t item_size = sizeof(ros_message.max_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id1_17mm_cooling_rate
  {
    size_t item_size = sizeof(ros_message.shooter_id1_17mm_cooling_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id1_17mm_cooling_limit
  {
    size_t item_size = sizeof(ros_message.shooter_id1_17mm_cooling_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id1_17mm_speed_limit
  {
    size_t item_size = sizeof(ros_message.shooter_id1_17mm_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id2_17mm_cooling_rate
  {
    size_t item_size = sizeof(ros_message.shooter_id2_17mm_cooling_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id2_17mm_cooling_limit
  {
    size_t item_size = sizeof(ros_message.shooter_id2_17mm_cooling_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id2_17mm_speed_limit
  {
    size_t item_size = sizeof(ros_message.shooter_id2_17mm_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id1_42mm_cooling_rate
  {
    size_t item_size = sizeof(ros_message.shooter_id1_42mm_cooling_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id1_42mm_cooling_limit
  {
    size_t item_size = sizeof(ros_message.shooter_id1_42mm_cooling_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shooter_id1_42mm_speed_limit
  {
    size_t item_size = sizeof(ros_message.shooter_id1_42mm_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chassis_power_limit
  {
    size_t item_size = sizeof(ros_message.chassis_power_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mains_power_gimbal_output
  {
    size_t item_size = sizeof(ros_message.mains_power_gimbal_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mains_power_chassis_output
  {
    size_t item_size = sizeof(ros_message.mains_power_chassis_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mains_power_shooter_output
  {
    size_t item_size = sizeof(ros_message.mains_power_shooter_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
max_serialized_size_GameRobotStatus(
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


  // Member: robot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remain_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: max_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id1_17mm_cooling_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id1_17mm_cooling_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id1_17mm_speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id2_17mm_cooling_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id2_17mm_cooling_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id2_17mm_speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id1_42mm_cooling_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id1_42mm_cooling_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shooter_id1_42mm_speed_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: chassis_power_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mains_power_gimbal_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mains_power_chassis_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mains_power_shooter_output
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
    using DataType = node_interface::msg::GameRobotStatus;
    is_plain =
      (
      offsetof(DataType, mains_power_shooter_output) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GameRobotStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const node_interface::msg::GameRobotStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GameRobotStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<node_interface::msg::GameRobotStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GameRobotStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const node_interface::msg::GameRobotStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GameRobotStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GameRobotStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GameRobotStatus__callbacks = {
  "node_interface::msg",
  "GameRobotStatus",
  _GameRobotStatus__cdr_serialize,
  _GameRobotStatus__cdr_deserialize,
  _GameRobotStatus__get_serialized_size,
  _GameRobotStatus__max_serialized_size
};

static rosidl_message_type_support_t _GameRobotStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GameRobotStatus__callbacks,
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
get_message_type_support_handle<node_interface::msg::GameRobotStatus>()
{
  return &node_interface::msg::typesupport_fastrtps_cpp::_GameRobotStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_interface, msg, GameRobotStatus)() {
  return &node_interface::msg::typesupport_fastrtps_cpp::_GameRobotStatus__handle;
}

#ifdef __cplusplus
}
#endif
