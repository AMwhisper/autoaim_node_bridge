// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/DartClientCmds.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/dart_client_cmds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const DartClientCmds & msg,
  std::ostream & out)
{
  out << "{";
  // member: dart_launch_opening_status
  {
    out << "dart_launch_opening_status: ";
    rosidl_generator_traits::value_to_yaml(msg.dart_launch_opening_status, out);
    out << ", ";
  }

  // member: dart_attack_target
  {
    out << "dart_attack_target: ";
    rosidl_generator_traits::value_to_yaml(msg.dart_attack_target, out);
    out << ", ";
  }

  // member: target_change_time
  {
    out << "target_change_time: ";
    rosidl_generator_traits::value_to_yaml(msg.target_change_time, out);
    out << ", ";
  }

  // member: first_dart_speed
  {
    out << "first_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.first_dart_speed, out);
    out << ", ";
  }

  // member: second_dart_speed
  {
    out << "second_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.second_dart_speed, out);
    out << ", ";
  }

  // member: third_dart_speed
  {
    out << "third_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.third_dart_speed, out);
    out << ", ";
  }

  // member: fourth_dart_speed
  {
    out << "fourth_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fourth_dart_speed, out);
    out << ", ";
  }

  // member: last_dart_launch_time
  {
    out << "last_dart_launch_time: ";
    rosidl_generator_traits::value_to_yaml(msg.last_dart_launch_time, out);
    out << ", ";
  }

  // member: operate_launch_cmd_time
  {
    out << "operate_launch_cmd_time: ";
    rosidl_generator_traits::value_to_yaml(msg.operate_launch_cmd_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DartClientCmds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dart_launch_opening_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dart_launch_opening_status: ";
    rosidl_generator_traits::value_to_yaml(msg.dart_launch_opening_status, out);
    out << "\n";
  }

  // member: dart_attack_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dart_attack_target: ";
    rosidl_generator_traits::value_to_yaml(msg.dart_attack_target, out);
    out << "\n";
  }

  // member: target_change_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_change_time: ";
    rosidl_generator_traits::value_to_yaml(msg.target_change_time, out);
    out << "\n";
  }

  // member: first_dart_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.first_dart_speed, out);
    out << "\n";
  }

  // member: second_dart_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.second_dart_speed, out);
    out << "\n";
  }

  // member: third_dart_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "third_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.third_dart_speed, out);
    out << "\n";
  }

  // member: fourth_dart_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fourth_dart_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.fourth_dart_speed, out);
    out << "\n";
  }

  // member: last_dart_launch_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_dart_launch_time: ";
    rosidl_generator_traits::value_to_yaml(msg.last_dart_launch_time, out);
    out << "\n";
  }

  // member: operate_launch_cmd_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operate_launch_cmd_time: ";
    rosidl_generator_traits::value_to_yaml(msg.operate_launch_cmd_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DartClientCmds & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace node_interface

namespace rosidl_generator_traits
{

[[deprecated("use node_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_interface::msg::DartClientCmds & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::DartClientCmds & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::DartClientCmds>()
{
  return "node_interface::msg::DartClientCmds";
}

template<>
inline const char * name<node_interface::msg::DartClientCmds>()
{
  return "node_interface/msg/DartClientCmds";
}

template<>
struct has_fixed_size<node_interface::msg::DartClientCmds>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::DartClientCmds>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::DartClientCmds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__TRAITS_HPP_
