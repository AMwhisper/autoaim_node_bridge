// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const BulletRemaining & msg,
  std::ostream & out)
{
  out << "{";
  // member: bullet_remaining_num_17mm
  {
    out << "bullet_remaining_num_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_17mm, out);
    out << ", ";
  }

  // member: bullet_remaining_num_42mm
  {
    out << "bullet_remaining_num_42mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_42mm, out);
    out << ", ";
  }

  // member: coin_remaining_num
  {
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bullet_remaining_num_17mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_remaining_num_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_17mm, out);
    out << "\n";
  }

  // member: bullet_remaining_num_42mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bullet_remaining_num_42mm: ";
    rosidl_generator_traits::value_to_yaml(msg.bullet_remaining_num_42mm, out);
    out << "\n";
  }

  // member: coin_remaining_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coin_remaining_num: ";
    rosidl_generator_traits::value_to_yaml(msg.coin_remaining_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BulletRemaining & msg, bool use_flow_style = false)
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
  const node_interface::msg::BulletRemaining & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::BulletRemaining & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::BulletRemaining>()
{
  return "node_interface::msg::BulletRemaining";
}

template<>
inline const char * name<node_interface::msg::BulletRemaining>()
{
  return "node_interface/msg/BulletRemaining";
}

template<>
struct has_fixed_size<node_interface::msg::BulletRemaining>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::BulletRemaining>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::BulletRemaining>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__TRAITS_HPP_
