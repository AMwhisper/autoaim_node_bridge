// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendGameRobotPos.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_POS__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_POS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_game_robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendGameRobotPos_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendGameRobotPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendGameRobotPos_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendGameRobotPos_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendGameRobotPos_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendGameRobotPos_Request>()
{
  return "node_interface::srv::SendGameRobotPos_Request";
}

template<>
inline const char * name<node_interface::srv::SendGameRobotPos_Request>()
{
  return "node_interface/srv/SendGameRobotPos_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendGameRobotPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendGameRobotPos_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendGameRobotPos_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendGameRobotPos_Response & msg,
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
  const SendGameRobotPos_Response & msg,
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

inline std::string to_yaml(const SendGameRobotPos_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendGameRobotPos_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendGameRobotPos_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendGameRobotPos_Response>()
{
  return "node_interface::srv::SendGameRobotPos_Response";
}

template<>
inline const char * name<node_interface::srv::SendGameRobotPos_Response>()
{
  return "node_interface/srv/SendGameRobotPos_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendGameRobotPos_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendGameRobotPos_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendGameRobotPos_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendGameRobotPos>()
{
  return "node_interface::srv::SendGameRobotPos";
}

template<>
inline const char * name<node_interface::srv::SendGameRobotPos>()
{
  return "node_interface/srv/SendGameRobotPos";
}

template<>
struct has_fixed_size<node_interface::srv::SendGameRobotPos>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendGameRobotPos_Request>::value &&
    has_fixed_size<node_interface::srv::SendGameRobotPos_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendGameRobotPos>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendGameRobotPos_Request>::value &&
    has_bounded_size<node_interface::srv::SendGameRobotPos_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendGameRobotPos>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendGameRobotPos_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendGameRobotPos_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_POS__TRAITS_HPP_
