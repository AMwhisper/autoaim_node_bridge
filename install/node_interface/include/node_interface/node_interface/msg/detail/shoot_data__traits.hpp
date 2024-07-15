// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShootData & msg,
  std::ostream & out)
{
  out << "{";
  // member: bullet_type
  {
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << ", ";
  }

  // member: shooter_id
  {
    out << "shooter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id, out);
    out << ", ";
  }

  // member: bullet_freq
  {
    out << "bullet_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_freq, out);
    out << ", ";
  }

  // member: bullet_speed
  {
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ShootData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bullet_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_type, out);
    out << "\n";
  }

  // member: shooter_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id, out);
    out << "\n";
  }

  // member: bullet_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_freq: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_freq, out);
    out << "\n";
  }

  // member: bullet_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShootData & msg, bool use_flow_style = false)
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
  const node_interface::msg::ShootData & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::ShootData & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::ShootData>()
{
  return "node_interface::msg::ShootData";
}

template<>
inline const char * name<node_interface::msg::ShootData>()
{
  return "node_interface/msg/ShootData";
}

template<>
struct has_fixed_size<node_interface::msg::ShootData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::ShootData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::ShootData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__TRAITS_HPP_
