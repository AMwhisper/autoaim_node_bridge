// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/GameRobotPos.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_POS__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/game_robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_GameRobotPos_yaw
{
public:
  explicit Init_GameRobotPos_yaw(::node_interface::msg::GameRobotPos & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::GameRobotPos yaw(::node_interface::msg::GameRobotPos::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::GameRobotPos msg_;
};

class Init_GameRobotPos_z
{
public:
  explicit Init_GameRobotPos_z(::node_interface::msg::GameRobotPos & msg)
  : msg_(msg)
  {}
  Init_GameRobotPos_yaw z(::node_interface::msg::GameRobotPos::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GameRobotPos_yaw(msg_);
  }

private:
  ::node_interface::msg::GameRobotPos msg_;
};

class Init_GameRobotPos_y
{
public:
  explicit Init_GameRobotPos_y(::node_interface::msg::GameRobotPos & msg)
  : msg_(msg)
  {}
  Init_GameRobotPos_z y(::node_interface::msg::GameRobotPos::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GameRobotPos_z(msg_);
  }

private:
  ::node_interface::msg::GameRobotPos msg_;
};

class Init_GameRobotPos_x
{
public:
  Init_GameRobotPos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameRobotPos_y x(::node_interface::msg::GameRobotPos::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GameRobotPos_y(msg_);
  }

private:
  ::node_interface::msg::GameRobotPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::GameRobotPos>()
{
  return node_interface::msg::builder::Init_GameRobotPos_x();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_POS__BUILDER_HPP_
