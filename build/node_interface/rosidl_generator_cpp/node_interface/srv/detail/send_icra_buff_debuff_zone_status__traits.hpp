// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendIcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendIcraBuffDebuffZoneStatus_Request & msg,
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
  const SendIcraBuffDebuffZoneStatus_Request & msg,
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

inline std::string to_yaml(const SendIcraBuffDebuffZoneStatus_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace node_interface

namespace rosidl_generator_traits
{

[[deprecated("use node_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>()
{
  return "node_interface::srv::SendIcraBuffDebuffZoneStatus_Request";
}

template<>
inline const char * name<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>()
{
  return "node_interface/srv/SendIcraBuffDebuffZoneStatus_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendIcraBuffDebuffZoneStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendIcraBuffDebuffZoneStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendIcraBuffDebuffZoneStatus_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace node_interface

namespace rosidl_generator_traits
{

[[deprecated("use node_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_interface::srv::SendIcraBuffDebuffZoneStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendIcraBuffDebuffZoneStatus_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>()
{
  return "node_interface::srv::SendIcraBuffDebuffZoneStatus_Response";
}

template<>
inline const char * name<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>()
{
  return "node_interface/srv/SendIcraBuffDebuffZoneStatus_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendIcraBuffDebuffZoneStatus>()
{
  return "node_interface::srv::SendIcraBuffDebuffZoneStatus";
}

template<>
inline const char * name<node_interface::srv::SendIcraBuffDebuffZoneStatus>()
{
  return "node_interface/srv/SendIcraBuffDebuffZoneStatus";
}

template<>
struct has_fixed_size<node_interface::srv::SendIcraBuffDebuffZoneStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>::value &&
    has_fixed_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendIcraBuffDebuffZoneStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>::value &&
    has_bounded_size<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendIcraBuffDebuffZoneStatus>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__TRAITS_HPP_
