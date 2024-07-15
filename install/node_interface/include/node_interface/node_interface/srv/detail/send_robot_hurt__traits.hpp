// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendRobotHurt.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_robot_hurt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendRobotHurt_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: armor_id
  {
    out << "armor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_id, out);
    out << ", ";
  }

  // member: hurt_type
  {
    out << "hurt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hurt_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendRobotHurt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: armor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.armor_id, out);
    out << "\n";
  }

  // member: hurt_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hurt_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hurt_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendRobotHurt_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendRobotHurt_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendRobotHurt_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendRobotHurt_Request>()
{
  return "node_interface::srv::SendRobotHurt_Request";
}

template<>
inline const char * name<node_interface::srv::SendRobotHurt_Request>()
{
  return "node_interface/srv/SendRobotHurt_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendRobotHurt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendRobotHurt_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendRobotHurt_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendRobotHurt_Response & msg,
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
  const SendRobotHurt_Response & msg,
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

inline std::string to_yaml(const SendRobotHurt_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendRobotHurt_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendRobotHurt_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendRobotHurt_Response>()
{
  return "node_interface::srv::SendRobotHurt_Response";
}

template<>
inline const char * name<node_interface::srv::SendRobotHurt_Response>()
{
  return "node_interface/srv/SendRobotHurt_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendRobotHurt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendRobotHurt_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendRobotHurt_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendRobotHurt>()
{
  return "node_interface::srv::SendRobotHurt";
}

template<>
inline const char * name<node_interface::srv::SendRobotHurt>()
{
  return "node_interface/srv/SendRobotHurt";
}

template<>
struct has_fixed_size<node_interface::srv::SendRobotHurt>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendRobotHurt_Request>::value &&
    has_fixed_size<node_interface::srv::SendRobotHurt_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendRobotHurt>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendRobotHurt_Request>::value &&
    has_bounded_size<node_interface::srv::SendRobotHurt_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendRobotHurt>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendRobotHurt_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendRobotHurt_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__TRAITS_HPP_
