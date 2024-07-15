// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DEBUG_INFO__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DEBUG_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'debug_data'
#include "node_interface/msg/detail/debug_data_type__traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendDebugInfo_Request & msg,
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
  const SendDebugInfo_Request & msg,
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

inline std::string to_yaml(const SendDebugInfo_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendDebugInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendDebugInfo_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendDebugInfo_Request>()
{
  return "node_interface::srv::SendDebugInfo_Request";
}

template<>
inline const char * name<node_interface::srv::SendDebugInfo_Request>()
{
  return "node_interface/srv/SendDebugInfo_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendDebugInfo_Request>
  : std::integral_constant<bool, has_fixed_size<node_interface::msg::DebugDataType>::value> {};

template<>
struct has_bounded_size<node_interface::srv::SendDebugInfo_Request>
  : std::integral_constant<bool, has_bounded_size<node_interface::msg::DebugDataType>::value> {};

template<>
struct is_message<node_interface::srv::SendDebugInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendDebugInfo_Response & msg,
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
  const SendDebugInfo_Response & msg,
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

inline std::string to_yaml(const SendDebugInfo_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendDebugInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendDebugInfo_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendDebugInfo_Response>()
{
  return "node_interface::srv::SendDebugInfo_Response";
}

template<>
inline const char * name<node_interface::srv::SendDebugInfo_Response>()
{
  return "node_interface/srv/SendDebugInfo_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendDebugInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendDebugInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendDebugInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendDebugInfo>()
{
  return "node_interface::srv::SendDebugInfo";
}

template<>
inline const char * name<node_interface::srv::SendDebugInfo>()
{
  return "node_interface/srv/SendDebugInfo";
}

template<>
struct has_fixed_size<node_interface::srv::SendDebugInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendDebugInfo_Request>::value &&
    has_fixed_size<node_interface::srv::SendDebugInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendDebugInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendDebugInfo_Request>::value &&
    has_bounded_size<node_interface::srv::SendDebugInfo_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendDebugInfo>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendDebugInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendDebugInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DEBUG_INFO__TRAITS_HPP_
