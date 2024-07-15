// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/JointControl.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__JOINT_CONTROL__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__JOINT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/joint_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_code
  {
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << ", ";
  }

  // member: base_joint_position
  {
    out << "base_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_position, out);
    out << ", ";
  }

  // member: base_joint_speed
  {
    out << "base_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_speed, out);
    out << ", ";
  }

  // member: shoulder_joint_position
  {
    out << "shoulder_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_position, out);
    out << ", ";
  }

  // member: shoulder_joint_speed
  {
    out << "shoulder_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_speed, out);
    out << ", ";
  }

  // member: elbow_joint_position
  {
    out << "elbow_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_position, out);
    out << ", ";
  }

  // member: elbow_joint_speed
  {
    out << "elbow_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_speed, out);
    out << ", ";
  }

  // member: wrist_joint_1_position
  {
    out << "wrist_joint_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_position, out);
    out << ", ";
  }

  // member: wrist_joint_1_speed
  {
    out << "wrist_joint_1_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_speed, out);
    out << ", ";
  }

  // member: wrist_joint_2_position
  {
    out << "wrist_joint_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_position, out);
    out << ", ";
  }

  // member: wrist_joint_2_speed
  {
    out << "wrist_joint_2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << "\n";
  }

  // member: base_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_position, out);
    out << "\n";
  }

  // member: base_joint_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_speed, out);
    out << "\n";
  }

  // member: shoulder_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoulder_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_position, out);
    out << "\n";
  }

  // member: shoulder_joint_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoulder_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_speed, out);
    out << "\n";
  }

  // member: elbow_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_position, out);
    out << "\n";
  }

  // member: elbow_joint_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_speed, out);
    out << "\n";
  }

  // member: wrist_joint_1_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_position, out);
    out << "\n";
  }

  // member: wrist_joint_1_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_1_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_speed, out);
    out << "\n";
  }

  // member: wrist_joint_2_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_position, out);
    out << "\n";
  }

  // member: wrist_joint_2_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointControl & msg, bool use_flow_style = false)
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
  const node_interface::msg::JointControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::JointControl & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::JointControl>()
{
  return "node_interface::msg::JointControl";
}

template<>
inline const char * name<node_interface::msg::JointControl>()
{
  return "node_interface/msg/JointControl";
}

template<>
struct has_fixed_size<node_interface::msg::JointControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::JointControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::JointControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__JOINT_CONTROL__TRAITS_HPP_
