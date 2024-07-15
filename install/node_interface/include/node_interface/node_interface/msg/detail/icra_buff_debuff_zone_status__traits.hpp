// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/IcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/icra_buff_debuff_zone_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const IcraBuffDebuffZoneStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: f1_zone_status
  {
    out << "f1_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_status, out);
    out << ", ";
  }

  // member: f1_zone_buff_debuff_status
  {
    out << "f1_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f2_zone_status
  {
    out << "f2_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_status, out);
    out << ", ";
  }

  // member: f2_zone_buff_debuff_status
  {
    out << "f2_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f3_zone_status
  {
    out << "f3_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_status, out);
    out << ", ";
  }

  // member: f3_zone_buff_debuff_status
  {
    out << "f3_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f4_zone_status
  {
    out << "f4_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_status, out);
    out << ", ";
  }

  // member: f4_zone_buff_debuff_status
  {
    out << "f4_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f5_zone_status
  {
    out << "f5_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_status, out);
    out << ", ";
  }

  // member: f5_zone_buff_debuff_status
  {
    out << "f5_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: f6_zone_status
  {
    out << "f6_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_status, out);
    out << ", ";
  }

  // member: f6_zone_buff_debuff_status
  {
    out << "f6_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_buff_debuff_status, out);
    out << ", ";
  }

  // member: red1_bullet_left
  {
    out << "red1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red1_bullet_left, out);
    out << ", ";
  }

  // member: red2_bullet_left
  {
    out << "red2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red2_bullet_left, out);
    out << ", ";
  }

  // member: blue1_bullet_left
  {
    out << "blue1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue1_bullet_left, out);
    out << ", ";
  }

  // member: blue2_bullet_left
  {
    out << "blue2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue2_bullet_left, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IcraBuffDebuffZoneStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: f1_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_status, out);
    out << "\n";
  }

  // member: f1_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f1_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f1_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f2_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_status, out);
    out << "\n";
  }

  // member: f2_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f2_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f2_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f3_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_status, out);
    out << "\n";
  }

  // member: f3_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f3_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f3_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f4_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f4_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_status, out);
    out << "\n";
  }

  // member: f4_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f4_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f4_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f5_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f5_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_status, out);
    out << "\n";
  }

  // member: f5_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f5_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f5_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: f6_zone_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f6_zone_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_status, out);
    out << "\n";
  }

  // member: f6_zone_buff_debuff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f6_zone_buff_debuff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.f6_zone_buff_debuff_status, out);
    out << "\n";
  }

  // member: red1_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red1_bullet_left, out);
    out << "\n";
  }

  // member: red2_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.red2_bullet_left, out);
    out << "\n";
  }

  // member: blue1_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue1_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue1_bullet_left, out);
    out << "\n";
  }

  // member: blue2_bullet_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue2_bullet_left: ";
    rosidl_generator_traits::value_to_yaml(msg.blue2_bullet_left, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IcraBuffDebuffZoneStatus & msg, bool use_flow_style = false)
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
  const node_interface::msg::IcraBuffDebuffZoneStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::IcraBuffDebuffZoneStatus & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::IcraBuffDebuffZoneStatus>()
{
  return "node_interface::msg::IcraBuffDebuffZoneStatus";
}

template<>
inline const char * name<node_interface::msg::IcraBuffDebuffZoneStatus>()
{
  return "node_interface/msg/IcraBuffDebuffZoneStatus";
}

template<>
struct has_fixed_size<node_interface::msg::IcraBuffDebuffZoneStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::IcraBuffDebuffZoneStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::IcraBuffDebuffZoneStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__TRAITS_HPP_
