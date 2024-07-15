// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendBoardAlpha.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_BOARD_ALPHA__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_BOARD_ALPHA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_board_alpha__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendBoardAlpha_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data1
  {
    out << "data1: ";
    rosidl_generator_traits::value_to_yaml(msg.data1, out);
    out << ", ";
  }

  // member: data2
  {
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
    out << ", ";
  }

  // member: data3
  {
    out << "data3: ";
    rosidl_generator_traits::value_to_yaml(msg.data3, out);
    out << ", ";
  }

  // member: data4
  {
    out << "data4: ";
    rosidl_generator_traits::value_to_yaml(msg.data4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendBoardAlpha_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data1: ";
    rosidl_generator_traits::value_to_yaml(msg.data1, out);
    out << "\n";
  }

  // member: data2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
    out << "\n";
  }

  // member: data3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data3: ";
    rosidl_generator_traits::value_to_yaml(msg.data3, out);
    out << "\n";
  }

  // member: data4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data4: ";
    rosidl_generator_traits::value_to_yaml(msg.data4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendBoardAlpha_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendBoardAlpha_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendBoardAlpha_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendBoardAlpha_Request>()
{
  return "node_interface::srv::SendBoardAlpha_Request";
}

template<>
inline const char * name<node_interface::srv::SendBoardAlpha_Request>()
{
  return "node_interface/srv/SendBoardAlpha_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendBoardAlpha_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendBoardAlpha_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendBoardAlpha_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendBoardAlpha_Response & msg,
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
  const SendBoardAlpha_Response & msg,
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

inline std::string to_yaml(const SendBoardAlpha_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendBoardAlpha_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendBoardAlpha_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendBoardAlpha_Response>()
{
  return "node_interface::srv::SendBoardAlpha_Response";
}

template<>
inline const char * name<node_interface::srv::SendBoardAlpha_Response>()
{
  return "node_interface/srv/SendBoardAlpha_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendBoardAlpha_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendBoardAlpha_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendBoardAlpha_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendBoardAlpha>()
{
  return "node_interface::srv::SendBoardAlpha";
}

template<>
inline const char * name<node_interface::srv::SendBoardAlpha>()
{
  return "node_interface/srv/SendBoardAlpha";
}

template<>
struct has_fixed_size<node_interface::srv::SendBoardAlpha>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendBoardAlpha_Request>::value &&
    has_fixed_size<node_interface::srv::SendBoardAlpha_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendBoardAlpha>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendBoardAlpha_Request>::value &&
    has_bounded_size<node_interface::srv::SendBoardAlpha_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendBoardAlpha>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendBoardAlpha_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendBoardAlpha_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_BOARD_ALPHA__TRAITS_HPP_
