// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/game_robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_GameRobotStatus_mains_power_shooter_output
{
public:
  explicit Init_GameRobotStatus_mains_power_shooter_output(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::GameRobotStatus mains_power_shooter_output(::node_interface::msg::GameRobotStatus::_mains_power_shooter_output_type arg)
  {
    msg_.mains_power_shooter_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_mains_power_chassis_output
{
public:
  explicit Init_GameRobotStatus_mains_power_chassis_output(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_mains_power_shooter_output mains_power_chassis_output(::node_interface::msg::GameRobotStatus::_mains_power_chassis_output_type arg)
  {
    msg_.mains_power_chassis_output = std::move(arg);
    return Init_GameRobotStatus_mains_power_shooter_output(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_mains_power_gimbal_output
{
public:
  explicit Init_GameRobotStatus_mains_power_gimbal_output(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_mains_power_chassis_output mains_power_gimbal_output(::node_interface::msg::GameRobotStatus::_mains_power_gimbal_output_type arg)
  {
    msg_.mains_power_gimbal_output = std::move(arg);
    return Init_GameRobotStatus_mains_power_chassis_output(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_chassis_power_limit
{
public:
  explicit Init_GameRobotStatus_chassis_power_limit(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_mains_power_gimbal_output chassis_power_limit(::node_interface::msg::GameRobotStatus::_chassis_power_limit_type arg)
  {
    msg_.chassis_power_limit = std::move(arg);
    return Init_GameRobotStatus_mains_power_gimbal_output(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id1_42mm_speed_limit
{
public:
  explicit Init_GameRobotStatus_shooter_id1_42mm_speed_limit(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_chassis_power_limit shooter_id1_42mm_speed_limit(::node_interface::msg::GameRobotStatus::_shooter_id1_42mm_speed_limit_type arg)
  {
    msg_.shooter_id1_42mm_speed_limit = std::move(arg);
    return Init_GameRobotStatus_chassis_power_limit(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id1_42mm_cooling_limit
{
public:
  explicit Init_GameRobotStatus_shooter_id1_42mm_cooling_limit(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id1_42mm_speed_limit shooter_id1_42mm_cooling_limit(::node_interface::msg::GameRobotStatus::_shooter_id1_42mm_cooling_limit_type arg)
  {
    msg_.shooter_id1_42mm_cooling_limit = std::move(arg);
    return Init_GameRobotStatus_shooter_id1_42mm_speed_limit(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id1_42mm_cooling_rate
{
public:
  explicit Init_GameRobotStatus_shooter_id1_42mm_cooling_rate(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id1_42mm_cooling_limit shooter_id1_42mm_cooling_rate(::node_interface::msg::GameRobotStatus::_shooter_id1_42mm_cooling_rate_type arg)
  {
    msg_.shooter_id1_42mm_cooling_rate = std::move(arg);
    return Init_GameRobotStatus_shooter_id1_42mm_cooling_limit(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id2_17mm_speed_limit
{
public:
  explicit Init_GameRobotStatus_shooter_id2_17mm_speed_limit(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id1_42mm_cooling_rate shooter_id2_17mm_speed_limit(::node_interface::msg::GameRobotStatus::_shooter_id2_17mm_speed_limit_type arg)
  {
    msg_.shooter_id2_17mm_speed_limit = std::move(arg);
    return Init_GameRobotStatus_shooter_id1_42mm_cooling_rate(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id2_17mm_cooling_limit
{
public:
  explicit Init_GameRobotStatus_shooter_id2_17mm_cooling_limit(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id2_17mm_speed_limit shooter_id2_17mm_cooling_limit(::node_interface::msg::GameRobotStatus::_shooter_id2_17mm_cooling_limit_type arg)
  {
    msg_.shooter_id2_17mm_cooling_limit = std::move(arg);
    return Init_GameRobotStatus_shooter_id2_17mm_speed_limit(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id2_17mm_cooling_rate
{
public:
  explicit Init_GameRobotStatus_shooter_id2_17mm_cooling_rate(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id2_17mm_cooling_limit shooter_id2_17mm_cooling_rate(::node_interface::msg::GameRobotStatus::_shooter_id2_17mm_cooling_rate_type arg)
  {
    msg_.shooter_id2_17mm_cooling_rate = std::move(arg);
    return Init_GameRobotStatus_shooter_id2_17mm_cooling_limit(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id1_17mm_speed_limit
{
public:
  explicit Init_GameRobotStatus_shooter_id1_17mm_speed_limit(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id2_17mm_cooling_rate shooter_id1_17mm_speed_limit(::node_interface::msg::GameRobotStatus::_shooter_id1_17mm_speed_limit_type arg)
  {
    msg_.shooter_id1_17mm_speed_limit = std::move(arg);
    return Init_GameRobotStatus_shooter_id2_17mm_cooling_rate(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id1_17mm_cooling_limit
{
public:
  explicit Init_GameRobotStatus_shooter_id1_17mm_cooling_limit(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id1_17mm_speed_limit shooter_id1_17mm_cooling_limit(::node_interface::msg::GameRobotStatus::_shooter_id1_17mm_cooling_limit_type arg)
  {
    msg_.shooter_id1_17mm_cooling_limit = std::move(arg);
    return Init_GameRobotStatus_shooter_id1_17mm_speed_limit(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_shooter_id1_17mm_cooling_rate
{
public:
  explicit Init_GameRobotStatus_shooter_id1_17mm_cooling_rate(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id1_17mm_cooling_limit shooter_id1_17mm_cooling_rate(::node_interface::msg::GameRobotStatus::_shooter_id1_17mm_cooling_rate_type arg)
  {
    msg_.shooter_id1_17mm_cooling_rate = std::move(arg);
    return Init_GameRobotStatus_shooter_id1_17mm_cooling_limit(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_max_hp
{
public:
  explicit Init_GameRobotStatus_max_hp(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_shooter_id1_17mm_cooling_rate max_hp(::node_interface::msg::GameRobotStatus::_max_hp_type arg)
  {
    msg_.max_hp = std::move(arg);
    return Init_GameRobotStatus_shooter_id1_17mm_cooling_rate(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_remain_hp
{
public:
  explicit Init_GameRobotStatus_remain_hp(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_max_hp remain_hp(::node_interface::msg::GameRobotStatus::_remain_hp_type arg)
  {
    msg_.remain_hp = std::move(arg);
    return Init_GameRobotStatus_max_hp(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_robot_level
{
public:
  explicit Init_GameRobotStatus_robot_level(::node_interface::msg::GameRobotStatus & msg)
  : msg_(msg)
  {}
  Init_GameRobotStatus_remain_hp robot_level(::node_interface::msg::GameRobotStatus::_robot_level_type arg)
  {
    msg_.robot_level = std::move(arg);
    return Init_GameRobotStatus_remain_hp(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

class Init_GameRobotStatus_robot_id
{
public:
  Init_GameRobotStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameRobotStatus_robot_level robot_id(::node_interface::msg::GameRobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_GameRobotStatus_robot_level(msg_);
  }

private:
  ::node_interface::msg::GameRobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::GameRobotStatus>()
{
  return node_interface::msg::builder::Init_GameRobotStatus_robot_id();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__BUILDER_HPP_
