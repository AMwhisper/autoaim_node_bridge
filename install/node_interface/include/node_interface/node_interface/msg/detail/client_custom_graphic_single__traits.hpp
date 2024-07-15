// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/ClientCustomGraphicSingle.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SINGLE__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SINGLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/client_custom_graphic_single__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'grapic_data_struct'
#include "node_interface/msg/detail/graphic_data_type__traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClientCustomGraphicSingle & msg,
  std::ostream & out)
{
  out << "{";
  // member: data_cmd_id
  {
    out << "data_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_cmd_id, out);
    out << ", ";
  }

  // member: send_id
  {
    out << "send_id: ";
    rosidl_generator_traits::value_to_yaml(msg.send_id, out);
    out << ", ";
  }

  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: grapic_data_struct
  {
    out << "grapic_data_struct: ";
    to_flow_style_yaml(msg.grapic_data_struct, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClientCustomGraphicSingle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data_cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_cmd_id, out);
    out << "\n";
  }

  // member: send_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_id: ";
    rosidl_generator_traits::value_to_yaml(msg.send_id, out);
    out << "\n";
  }

  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: grapic_data_struct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grapic_data_struct:\n";
    to_block_style_yaml(msg.grapic_data_struct, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClientCustomGraphicSingle & msg, bool use_flow_style = false)
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
  const node_interface::msg::ClientCustomGraphicSingle & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::ClientCustomGraphicSingle & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::ClientCustomGraphicSingle>()
{
  return "node_interface::msg::ClientCustomGraphicSingle";
}

template<>
inline const char * name<node_interface::msg::ClientCustomGraphicSingle>()
{
  return "node_interface/msg/ClientCustomGraphicSingle";
}

template<>
struct has_fixed_size<node_interface::msg::ClientCustomGraphicSingle>
  : std::integral_constant<bool, has_fixed_size<node_interface::msg::GraphicDataType>::value> {};

template<>
struct has_bounded_size<node_interface::msg::ClientCustomGraphicSingle>
  : std::integral_constant<bool, has_bounded_size<node_interface::msg::GraphicDataType>::value> {};

template<>
struct is_message<node_interface::msg::ClientCustomGraphicSingle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SINGLE__TRAITS_HPP_
