// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/HealthPoint.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/health_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const HealthPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: red_1_robot_hp
  {
    out << "red_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_robot_hp, out);
    out << ", ";
  }

  // member: red_2_robot_hp
  {
    out << "red_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_robot_hp, out);
    out << ", ";
  }

  // member: red_3_robot_hp
  {
    out << "red_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_robot_hp, out);
    out << ", ";
  }

  // member: red_4_robot_hp
  {
    out << "red_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_robot_hp, out);
    out << ", ";
  }

  // member: red_5_robot_hp
  {
    out << "red_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_robot_hp, out);
    out << ", ";
  }

  // member: red_7_robot_hp
  {
    out << "red_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_robot_hp, out);
    out << ", ";
  }

  // member: red_outpost_hp
  {
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << ", ";
  }

  // member: red_base_hp
  {
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << ", ";
  }

  // member: blue_1_robot_hp
  {
    out << "blue_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_robot_hp, out);
    out << ", ";
  }

  // member: blue_2_robot_hp
  {
    out << "blue_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_robot_hp, out);
    out << ", ";
  }

  // member: blue_3_robot_hp
  {
    out << "blue_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_robot_hp, out);
    out << ", ";
  }

  // member: blue_4_robot_hp
  {
    out << "blue_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_robot_hp, out);
    out << ", ";
  }

  // member: blue_5_robot_hp
  {
    out << "blue_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_robot_hp, out);
    out << ", ";
  }

  // member: blue_7_robot_hp
  {
    out << "blue_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_robot_hp, out);
    out << ", ";
  }

  // member: blue_outpost_hp
  {
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << ", ";
  }

  // member: blue_base_hp
  {
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HealthPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red_1_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_robot_hp, out);
    out << "\n";
  }

  // member: red_2_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_robot_hp, out);
    out << "\n";
  }

  // member: red_3_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_robot_hp, out);
    out << "\n";
  }

  // member: red_4_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_robot_hp, out);
    out << "\n";
  }

  // member: red_5_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_robot_hp, out);
    out << "\n";
  }

  // member: red_7_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_robot_hp, out);
    out << "\n";
  }

  // member: red_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << "\n";
  }

  // member: red_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << "\n";
  }

  // member: blue_1_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_robot_hp, out);
    out << "\n";
  }

  // member: blue_2_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_robot_hp, out);
    out << "\n";
  }

  // member: blue_3_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_robot_hp, out);
    out << "\n";
  }

  // member: blue_4_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_robot_hp, out);
    out << "\n";
  }

  // member: blue_5_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_robot_hp, out);
    out << "\n";
  }

  // member: blue_7_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_robot_hp, out);
    out << "\n";
  }

  // member: blue_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << "\n";
  }

  // member: blue_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HealthPoint & msg, bool use_flow_style = false)
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
  const node_interface::msg::HealthPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::HealthPoint & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::HealthPoint>()
{
  return "node_interface::msg::HealthPoint";
}

template<>
inline const char * name<node_interface::msg::HealthPoint>()
{
  return "node_interface/msg/HealthPoint";
}

template<>
struct has_fixed_size<node_interface::msg::HealthPoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::HealthPoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::HealthPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__TRAITS_HPP_
