// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:msg/JointControl.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/joint_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "node_interface/msg/detail/joint_control__struct.hpp"

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
  const node_interface::msg::JointControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state_code
  cdr << ros_message.state_code;
  // Member: base_joint_position
  cdr << ros_message.base_joint_position;
  // Member: base_joint_speed
  cdr << ros_message.base_joint_speed;
  // Member: shoulder_joint_position
  cdr << ros_message.shoulder_joint_position;
  // Member: shoulder_joint_speed
  cdr << ros_message.shoulder_joint_speed;
  // Member: elbow_joint_position
  cdr << ros_message.elbow_joint_position;
  // Member: elbow_joint_speed
  cdr << ros_message.elbow_joint_speed;
  // Member: wrist_joint_1_position
  cdr << ros_message.wrist_joint_1_position;
  // Member: wrist_joint_1_speed
  cdr << ros_message.wrist_joint_1_speed;
  // Member: wrist_joint_2_position
  cdr << ros_message.wrist_joint_2_position;
  // Member: wrist_joint_2_speed
  cdr << ros_message.wrist_joint_2_speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  node_interface::msg::JointControl & ros_message)
{
  // Member: state_code
  cdr >> ros_message.state_code;

  // Member: base_joint_position
  cdr >> ros_message.base_joint_position;

  // Member: base_joint_speed
  cdr >> ros_message.base_joint_speed;

  // Member: shoulder_joint_position
  cdr >> ros_message.shoulder_joint_position;

  // Member: shoulder_joint_speed
  cdr >> ros_message.shoulder_joint_speed;

  // Member: elbow_joint_position
  cdr >> ros_message.elbow_joint_position;

  // Member: elbow_joint_speed
  cdr >> ros_message.elbow_joint_speed;

  // Member: wrist_joint_1_position
  cdr >> ros_message.wrist_joint_1_position;

  // Member: wrist_joint_1_speed
  cdr >> ros_message.wrist_joint_1_speed;

  // Member: wrist_joint_2_position
  cdr >> ros_message.wrist_joint_2_position;

  // Member: wrist_joint_2_speed
  cdr >> ros_message.wrist_joint_2_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
get_serialized_size(
  const node_interface::msg::JointControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state_code
  {
    size_t item_size = sizeof(ros_message.state_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_joint_position
  {
    size_t item_size = sizeof(ros_message.base_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_joint_speed
  {
    size_t item_size = sizeof(ros_message.base_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shoulder_joint_position
  {
    size_t item_size = sizeof(ros_message.shoulder_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shoulder_joint_speed
  {
    size_t item_size = sizeof(ros_message.shoulder_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow_joint_position
  {
    size_t item_size = sizeof(ros_message.elbow_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elbow_joint_speed
  {
    size_t item_size = sizeof(ros_message.elbow_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_joint_1_position
  {
    size_t item_size = sizeof(ros_message.wrist_joint_1_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_joint_1_speed
  {
    size_t item_size = sizeof(ros_message.wrist_joint_1_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_joint_2_position
  {
    size_t item_size = sizeof(ros_message.wrist_joint_2_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrist_joint_2_speed
  {
    size_t item_size = sizeof(ros_message.wrist_joint_2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
max_serialized_size_JointControl(
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


  // Member: state_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: base_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: base_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shoulder_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: shoulder_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: elbow_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: elbow_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: wrist_joint_1_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: wrist_joint_1_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: wrist_joint_2_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: wrist_joint_2_speed
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
    using DataType = node_interface::msg::JointControl;
    is_plain =
      (
      offsetof(DataType, wrist_joint_2_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JointControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const node_interface::msg::JointControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<node_interface::msg::JointControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const node_interface::msg::JointControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointControl__callbacks = {
  "node_interface::msg",
  "JointControl",
  _JointControl__cdr_serialize,
  _JointControl__cdr_deserialize,
  _JointControl__get_serialized_size,
  _JointControl__max_serialized_size
};

static rosidl_message_type_support_t _JointControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointControl__callbacks,
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
get_message_type_support_handle<node_interface::msg::JointControl>()
{
  return &node_interface::msg::typesupport_fastrtps_cpp::_JointControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_interface, msg, JointControl)() {
  return &node_interface::msg::typesupport_fastrtps_cpp::_JointControl__handle;
}

#ifdef __cplusplus
}
#endif
