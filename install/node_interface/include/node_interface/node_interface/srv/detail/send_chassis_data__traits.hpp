// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendChassisData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CHASSIS_DATA__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CHASSIS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_chassis_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendChassisData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vw
  {
    out << "vw: ";
    rosidl_generator_traits::value_to_yaml(msg.vw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendChassisData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vw: ";
    rosidl_generator_traits::value_to_yaml(msg.vw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendChassisData_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendChassisData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendChassisData_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendChassisData_Request>()
{
  return "node_interface::srv::SendChassisData_Request";
}

template<>
inline const char * name<node_interface::srv::SendChassisData_Request>()
{
  return "node_interface/srv/SendChassisData_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendChassisData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendChassisData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendChassisData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendChassisData_Response & msg,
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
  const SendChassisData_Response & msg,
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

inline std::string to_yaml(const SendChassisData_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendChassisData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendChassisData_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendChassisData_Response>()
{
  return "node_interface::srv::SendChassisData_Response";
}

template<>
inline const char * name<node_interface::srv::SendChassisData_Response>()
{
  return "node_interface/srv/SendChassisData_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendChassisData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendChassisData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendChassisData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendChassisData>()
{
  return "node_interface::srv::SendChassisData";
}

template<>
inline const char * name<node_interface::srv::SendChassisData>()
{
  return "node_interface/srv/SendChassisData";
}

template<>
struct has_fixed_size<node_interface::srv::SendChassisData>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendChassisData_Request>::value &&
    has_fixed_size<node_interface::srv::SendChassisData_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendChassisData>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendChassisData_Request>::value &&
    has_bounded_size<node_interface::srv::SendChassisData_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendChassisData>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendChassisData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendChassisData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CHASSIS_DATA__TRAITS_HPP_
