// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendRobotCommunication.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_COMMUNICATION__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_COMMUNICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_robot_communication__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendRobotCommunication_Request & msg,
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
  const SendRobotCommunication_Request & msg,
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

inline std::string to_yaml(const SendRobotCommunication_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendRobotCommunication_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendRobotCommunication_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendRobotCommunication_Request>()
{
  return "node_interface::srv::SendRobotCommunication_Request";
}

template<>
inline const char * name<node_interface::srv::SendRobotCommunication_Request>()
{
  return "node_interface/srv/SendRobotCommunication_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendRobotCommunication_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendRobotCommunication_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendRobotCommunication_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendRobotCommunication_Response & msg,
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
  const SendRobotCommunication_Response & msg,
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

inline std::string to_yaml(const SendRobotCommunication_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendRobotCommunication_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendRobotCommunication_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendRobotCommunication_Response>()
{
  return "node_interface::srv::SendRobotCommunication_Response";
}

template<>
inline const char * name<node_interface::srv::SendRobotCommunication_Response>()
{
  return "node_interface/srv/SendRobotCommunication_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendRobotCommunication_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendRobotCommunication_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendRobotCommunication_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendRobotCommunication>()
{
  return "node_interface::srv::SendRobotCommunication";
}

template<>
inline const char * name<node_interface::srv::SendRobotCommunication>()
{
  return "node_interface/srv/SendRobotCommunication";
}

template<>
struct has_fixed_size<node_interface::srv::SendRobotCommunication>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendRobotCommunication_Request>::value &&
    has_fixed_size<node_interface::srv::SendRobotCommunication_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendRobotCommunication>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendRobotCommunication_Request>::value &&
    has_bounded_size<node_interface::srv::SendRobotCommunication_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendRobotCommunication>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendRobotCommunication_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendRobotCommunication_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_COMMUNICATION__TRAITS_HPP_
