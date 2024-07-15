// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/RfidStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const RfidStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: rfid_status
  {
    out << "rfid_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rfid_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RfidStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rfid_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rfid_status: ";
    rosidl_generator_traits::value_to_yaml(msg.rfid_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RfidStatus & msg, bool use_flow_style = false)
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
  const node_interface::msg::RfidStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::RfidStatus & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::RfidStatus>()
{
  return "node_interface::msg::RfidStatus";
}

template<>
inline const char * name<node_interface::msg::RfidStatus>()
{
  return "node_interface/msg/RfidStatus";
}

template<>
struct has_fixed_size<node_interface::msg::RfidStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::RfidStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::RfidStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__TRAITS_HPP_
