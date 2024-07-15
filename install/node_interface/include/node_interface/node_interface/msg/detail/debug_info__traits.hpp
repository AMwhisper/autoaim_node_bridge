// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/DebugInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/debug_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'debug_data'
#include "node_interface/msg/detail/debug_data_type__traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: debug_data
  {
    out << "debug_data: ";
    to_flow_style_yaml(msg.debug_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: debug_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_data:\n";
    to_block_style_yaml(msg.debug_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugInfo & msg, bool use_flow_style = false)
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
  const node_interface::msg::DebugInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::DebugInfo & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::DebugInfo>()
{
  return "node_interface::msg::DebugInfo";
}

template<>
inline const char * name<node_interface::msg::DebugInfo>()
{
  return "node_interface/msg/DebugInfo";
}

template<>
struct has_fixed_size<node_interface::msg::DebugInfo>
  : std::integral_constant<bool, has_fixed_size<node_interface::msg::DebugDataType>::value> {};

template<>
struct has_bounded_size<node_interface::msg::DebugInfo>
  : std::integral_constant<bool, has_bounded_size<node_interface::msg::DebugDataType>::value> {};

template<>
struct is_message<node_interface::msg::DebugInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__TRAITS_HPP_
