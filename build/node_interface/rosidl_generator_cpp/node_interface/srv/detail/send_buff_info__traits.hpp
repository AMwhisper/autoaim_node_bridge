// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendBuffInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_BUFF_INFO__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_BUFF_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_buff_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendBuffInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: power_rune_buff
  {
    out << "power_rune_buff: ";
    rosidl_generator_traits::value_to_yaml(msg.power_rune_buff, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendBuffInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: power_rune_buff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_rune_buff: ";
    rosidl_generator_traits::value_to_yaml(msg.power_rune_buff, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendBuffInfo_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendBuffInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendBuffInfo_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendBuffInfo_Request>()
{
  return "node_interface::srv::SendBuffInfo_Request";
}

template<>
inline const char * name<node_interface::srv::SendBuffInfo_Request>()
{
  return "node_interface/srv/SendBuffInfo_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendBuffInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendBuffInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendBuffInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendBuffInfo_Response & msg,
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
  const SendBuffInfo_Response & msg,
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

inline std::string to_yaml(const SendBuffInfo_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendBuffInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendBuffInfo_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendBuffInfo_Response>()
{
  return "node_interface::srv::SendBuffInfo_Response";
}

template<>
inline const char * name<node_interface::srv::SendBuffInfo_Response>()
{
  return "node_interface/srv/SendBuffInfo_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendBuffInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendBuffInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendBuffInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendBuffInfo>()
{
  return "node_interface::srv::SendBuffInfo";
}

template<>
inline const char * name<node_interface::srv::SendBuffInfo>()
{
  return "node_interface/srv/SendBuffInfo";
}

template<>
struct has_fixed_size<node_interface::srv::SendBuffInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendBuffInfo_Request>::value &&
    has_fixed_size<node_interface::srv::SendBuffInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendBuffInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendBuffInfo_Request>::value &&
    has_bounded_size<node_interface::srv::SendBuffInfo_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendBuffInfo>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendBuffInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendBuffInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_BUFF_INFO__TRAITS_HPP_
