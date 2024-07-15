// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendJointControl.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_CONTROL__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_joint_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendJointControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_code
  {
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << ", ";
  }

  // member: base_joint_position
  {
    out << "base_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_position, out);
    out << ", ";
  }

  // member: base_joint_speed
  {
    out << "base_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_speed, out);
    out << ", ";
  }

  // member: shoulder_joint_position
  {
    out << "shoulder_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_position, out);
    out << ", ";
  }

  // member: shoulder_joint_speed
  {
    out << "shoulder_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_speed, out);
    out << ", ";
  }

  // member: elbow_joint_position
  {
    out << "elbow_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_position, out);
    out << ", ";
  }

  // member: elbow_joint_speed
  {
    out << "elbow_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_speed, out);
    out << ", ";
  }

  // member: wrist_joint_1_position
  {
    out << "wrist_joint_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_position, out);
    out << ", ";
  }

  // member: wrist_joint_1_speed
  {
    out << "wrist_joint_1_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_speed, out);
    out << ", ";
  }

  // member: wrist_joint_2_position
  {
    out << "wrist_joint_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_position, out);
    out << ", ";
  }

  // member: wrist_joint_2_speed
  {
    out << "wrist_joint_2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendJointControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_code: ";
    rosidl_generator_traits::value_to_yaml(msg.state_code, out);
    out << "\n";
  }

  // member: base_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_position, out);
    out << "\n";
  }

  // member: base_joint_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.base_joint_speed, out);
    out << "\n";
  }

  // member: shoulder_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoulder_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_position, out);
    out << "\n";
  }

  // member: shoulder_joint_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoulder_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.shoulder_joint_speed, out);
    out << "\n";
  }

  // member: elbow_joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_position, out);
    out << "\n";
  }

  // member: elbow_joint_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_joint_speed, out);
    out << "\n";
  }

  // member: wrist_joint_1_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_position, out);
    out << "\n";
  }

  // member: wrist_joint_1_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_1_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_1_speed, out);
    out << "\n";
  }

  // member: wrist_joint_2_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_position, out);
    out << "\n";
  }

  // member: wrist_joint_2_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_joint_2_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.wrist_joint_2_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendJointControl_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendJointControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendJointControl_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendJointControl_Request>()
{
  return "node_interface::srv::SendJointControl_Request";
}

template<>
inline const char * name<node_interface::srv::SendJointControl_Request>()
{
  return "node_interface/srv/SendJointControl_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendJointControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendJointControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendJointControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendJointControl_Response & msg,
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
  const SendJointControl_Response & msg,
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

inline std::string to_yaml(const SendJointControl_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendJointControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendJointControl_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendJointControl_Response>()
{
  return "node_interface::srv::SendJointControl_Response";
}

template<>
inline const char * name<node_interface::srv::SendJointControl_Response>()
{
  return "node_interface/srv/SendJointControl_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendJointControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendJointControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendJointControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendJointControl>()
{
  return "node_interface::srv::SendJointControl";
}

template<>
inline const char * name<node_interface::srv::SendJointControl>()
{
  return "node_interface/srv/SendJointControl";
}

template<>
struct has_fixed_size<node_interface::srv::SendJointControl>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendJointControl_Request>::value &&
    has_fixed_size<node_interface::srv::SendJointControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendJointControl>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendJointControl_Request>::value &&
    has_bounded_size<node_interface::srv::SendJointControl_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendJointControl>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendJointControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendJointControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_CONTROL__TRAITS_HPP_
