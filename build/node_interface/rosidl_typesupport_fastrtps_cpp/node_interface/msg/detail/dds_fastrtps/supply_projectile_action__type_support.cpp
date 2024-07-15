// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from node_interface:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/supply_projectile_action__rosidl_typesupport_fastrtps_cpp.hpp"
#include "node_interface/msg/detail/supply_projectile_action__struct.hpp"

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
  const node_interface::msg::SupplyProjectileAction & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: supply_projectile_id
  cdr << ros_message.supply_projectile_id;
  // Member: supply_robot_id
  cdr << ros_message.supply_robot_id;
  // Member: supply_projectile_step
  cdr << ros_message.supply_projectile_step;
  // Member: supply_projectile_num
  cdr << ros_message.supply_projectile_num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  node_interface::msg::SupplyProjectileAction & ros_message)
{
  // Member: supply_projectile_id
  cdr >> ros_message.supply_projectile_id;

  // Member: supply_robot_id
  cdr >> ros_message.supply_robot_id;

  // Member: supply_projectile_step
  cdr >> ros_message.supply_projectile_step;

  // Member: supply_projectile_num
  cdr >> ros_message.supply_projectile_num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
get_serialized_size(
  const node_interface::msg::SupplyProjectileAction & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: supply_projectile_id
  {
    size_t item_size = sizeof(ros_message.supply_projectile_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_robot_id
  {
    size_t item_size = sizeof(ros_message.supply_robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_projectile_step
  {
    size_t item_size = sizeof(ros_message.supply_projectile_step);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_projectile_num
  {
    size_t item_size = sizeof(ros_message.supply_projectile_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_node_interface
max_serialized_size_SupplyProjectileAction(
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


  // Member: supply_projectile_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_robot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_projectile_step
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_projectile_num
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
    using DataType = node_interface::msg::SupplyProjectileAction;
    is_plain =
      (
      offsetof(DataType, supply_projectile_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SupplyProjectileAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const node_interface::msg::SupplyProjectileAction *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SupplyProjectileAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<node_interface::msg::SupplyProjectileAction *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SupplyProjectileAction__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const node_interface::msg::SupplyProjectileAction *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SupplyProjectileAction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SupplyProjectileAction(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SupplyProjectileAction__callbacks = {
  "node_interface::msg",
  "SupplyProjectileAction",
  _SupplyProjectileAction__cdr_serialize,
  _SupplyProjectileAction__cdr_deserialize,
  _SupplyProjectileAction__get_serialized_size,
  _SupplyProjectileAction__max_serialized_size
};

static rosidl_message_type_support_t _SupplyProjectileAction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SupplyProjectileAction__callbacks,
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
get_message_type_support_handle<node_interface::msg::SupplyProjectileAction>()
{
  return &node_interface::msg::typesupport_fastrtps_cpp::_SupplyProjectileAction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, node_interface, msg, SupplyProjectileAction)() {
  return &node_interface::msg::typesupport_fastrtps_cpp::_SupplyProjectileAction__handle;
}

#ifdef __cplusplus
}
#endif