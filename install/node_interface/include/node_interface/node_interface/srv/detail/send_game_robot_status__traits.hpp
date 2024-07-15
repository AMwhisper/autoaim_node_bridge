// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendGameRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_STATUS__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_game_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendGameRobotStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: robot_level
  {
    out << "robot_level: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_level, out);
    out << ", ";
  }

  // member: remain_hp
  {
    out << "remain_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_hp, out);
    out << ", ";
  }

  // member: max_hp
  {
    out << "max_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_hp, out);
    out << ", ";
  }

  // member: shooter_id1_17mm_cooling_rate
  {
    out << "shooter_id1_17mm_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_cooling_rate, out);
    out << ", ";
  }

  // member: shooter_id1_17mm_cooling_limit
  {
    out << "shooter_id1_17mm_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_cooling_limit, out);
    out << ", ";
  }

  // member: shooter_id1_17mm_speed_limit
  {
    out << "shooter_id1_17mm_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_speed_limit, out);
    out << ", ";
  }

  // member: shooter_id2_17mm_cooling_rate
  {
    out << "shooter_id2_17mm_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_cooling_rate, out);
    out << ", ";
  }

  // member: shooter_id2_17mm_cooling_limit
  {
    out << "shooter_id2_17mm_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_cooling_limit, out);
    out << ", ";
  }

  // member: shooter_id2_17mm_speed_limit
  {
    out << "shooter_id2_17mm_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_speed_limit, out);
    out << ", ";
  }

  // member: shooter_id1_42mm_cooling_rate
  {
    out << "shooter_id1_42mm_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_cooling_rate, out);
    out << ", ";
  }

  // member: shooter_id1_42mm_cooling_limit
  {
    out << "shooter_id1_42mm_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_cooling_limit, out);
    out << ", ";
  }

  // member: shooter_id1_42mm_speed_limit
  {
    out << "shooter_id1_42mm_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_speed_limit, out);
    out << ", ";
  }

  // member: chassis_power_limit
  {
    out << "chassis_power_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_limit, out);
    out << ", ";
  }

  // member: mains_power_gimbal_output
  {
    out << "mains_power_gimbal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.mains_power_gimbal_output, out);
    out << ", ";
  }

  // member: mains_power_chassis_output
  {
    out << "mains_power_chassis_output: ";
    rosidl_generator_traits::value_to_yaml(msg.mains_power_chassis_output, out);
    out << ", ";
  }

  // member: mains_power_shooter_output
  {
    out << "mains_power_shooter_output: ";
    rosidl_generator_traits::value_to_yaml(msg.mains_power_shooter_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendGameRobotStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: robot_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_level: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_level, out);
    out << "\n";
  }

  // member: remain_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.remain_hp, out);
    out << "\n";
  }

  // member: max_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_hp, out);
    out << "\n";
  }

  // member: shooter_id1_17mm_cooling_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_17mm_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_cooling_rate, out);
    out << "\n";
  }

  // member: shooter_id1_17mm_cooling_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_17mm_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_cooling_limit, out);
    out << "\n";
  }

  // member: shooter_id1_17mm_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_17mm_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_17mm_speed_limit, out);
    out << "\n";
  }

  // member: shooter_id2_17mm_cooling_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id2_17mm_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_cooling_rate, out);
    out << "\n";
  }

  // member: shooter_id2_17mm_cooling_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id2_17mm_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_cooling_limit, out);
    out << "\n";
  }

  // member: shooter_id2_17mm_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id2_17mm_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id2_17mm_speed_limit, out);
    out << "\n";
  }

  // member: shooter_id1_42mm_cooling_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_42mm_cooling_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_cooling_rate, out);
    out << "\n";
  }

  // member: shooter_id1_42mm_cooling_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_42mm_cooling_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_cooling_limit, out);
    out << "\n";
  }

  // member: shooter_id1_42mm_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_id1_42mm_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_id1_42mm_speed_limit, out);
    out << "\n";
  }

  // member: chassis_power_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_power_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_power_limit, out);
    out << "\n";
  }

  // member: mains_power_gimbal_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mains_power_gimbal_output: ";
    rosidl_generator_traits::value_to_yaml(msg.mains_power_gimbal_output, out);
    out << "\n";
  }

  // member: mains_power_chassis_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mains_power_chassis_output: ";
    rosidl_generator_traits::value_to_yaml(msg.mains_power_chassis_output, out);
    out << "\n";
  }

  // member: mains_power_shooter_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mains_power_shooter_output: ";
    rosidl_generator_traits::value_to_yaml(msg.mains_power_shooter_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendGameRobotStatus_Request & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendGameRobotStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendGameRobotStatus_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendGameRobotStatus_Request>()
{
  return "node_interface::srv::SendGameRobotStatus_Request";
}

template<>
inline const char * name<node_interface::srv::SendGameRobotStatus_Request>()
{
  return "node_interface/srv/SendGameRobotStatus_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendGameRobotStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::srv::SendGameRobotStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::srv::SendGameRobotStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendGameRobotStatus_Response & msg,
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
  const SendGameRobotStatus_Response & msg,
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

inline std::string to_yaml(const SendGameRobotStatus_Response & msg, bool use_flow_style = false)
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
  const node_interface::srv::SendGameRobotStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendGameRobotStatus_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendGameRobotStatus_Response>()
{
  return "node_interface::srv::SendGameRobotStatus_Response";
}

template<>
inline const char * name<node_interface::srv::SendGameRobotStatus_Response>()
{
  return "node_interface/srv/SendGameRobotStatus_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendGameRobotStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendGameRobotStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendGameRobotStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendGameRobotStatus>()
{
  return "node_interface::srv::SendGameRobotStatus";
}

template<>
inline const char * name<node_interface::srv::SendGameRobotStatus>()
{
  return "node_interface/srv/SendGameRobotStatus";
}

template<>
struct has_fixed_size<node_interface::srv::SendGameRobotStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendGameRobotStatus_Request>::value &&
    has_fixed_size<node_interface::srv::SendGameRobotStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendGameRobotStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendGameRobotStatus_Request>::value &&
    has_bounded_size<node_interface::srv::SendGameRobotStatus_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendGameRobotStatus>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendGameRobotStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendGameRobotStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_STATUS__TRAITS_HPP_
