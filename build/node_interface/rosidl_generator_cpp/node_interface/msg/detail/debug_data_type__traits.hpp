// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/DebugDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/debug_data_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugDataType & msg,
  std::ostream & out)
{
  out << "{";
  // member: debug1
  {
    out << "debug1: ";
    rosidl_generator_traits::value_to_yaml(msg.debug1, out);
    out << ", ";
  }

  // member: debug2
  {
    out << "debug2: ";
    rosidl_generator_traits::value_to_yaml(msg.debug2, out);
    out << ", ";
  }

  // member: debug3
  {
    out << "debug3: ";
    rosidl_generator_traits::value_to_yaml(msg.debug3, out);
    out << ", ";
  }

  // member: debug4
  {
    out << "debug4: ";
    rosidl_generator_traits::value_to_yaml(msg.debug4, out);
    out << ", ";
  }

  // member: debug5
  {
    out << "debug5: ";
    rosidl_generator_traits::value_to_yaml(msg.debug5, out);
    out << ", ";
  }

  // member: debug6
  {
    out << "debug6: ";
    rosidl_generator_traits::value_to_yaml(msg.debug6, out);
    out << ", ";
  }

  // member: debug7
  {
    out << "debug7: ";
    rosidl_generator_traits::value_to_yaml(msg.debug7, out);
    out << ", ";
  }

  // member: debug8
  {
    out << "debug8: ";
    rosidl_generator_traits::value_to_yaml(msg.debug8, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugDataType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: debug1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug1: ";
    rosidl_generator_traits::value_to_yaml(msg.debug1, out);
    out << "\n";
  }

  // member: debug2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug2: ";
    rosidl_generator_traits::value_to_yaml(msg.debug2, out);
    out << "\n";
  }

  // member: debug3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug3: ";
    rosidl_generator_traits::value_to_yaml(msg.debug3, out);
    out << "\n";
  }

  // member: debug4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug4: ";
    rosidl_generator_traits::value_to_yaml(msg.debug4, out);
    out << "\n";
  }

  // member: debug5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug5: ";
    rosidl_generator_traits::value_to_yaml(msg.debug5, out);
    out << "\n";
  }

  // member: debug6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug6: ";
    rosidl_generator_traits::value_to_yaml(msg.debug6, out);
    out << "\n";
  }

  // member: debug7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug7: ";
    rosidl_generator_traits::value_to_yaml(msg.debug7, out);
    out << "\n";
  }

  // member: debug8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug8: ";
    rosidl_generator_traits::value_to_yaml(msg.debug8, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugDataType & msg, bool use_flow_style = false)
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
  const node_interface::msg::DebugDataType & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::DebugDataType & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::DebugDataType>()
{
  return "node_interface::msg::DebugDataType";
}

template<>
inline const char * name<node_interface::msg::DebugDataType>()
{
  return "node_interface/msg/DebugDataType";
}

template<>
struct has_fixed_size<node_interface::msg::DebugDataType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::DebugDataType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::DebugDataType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__TRAITS_HPP_
