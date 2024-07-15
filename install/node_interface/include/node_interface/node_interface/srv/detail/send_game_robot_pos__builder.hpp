// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendGameRobotPos.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_POS__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_POS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_game_robot_pos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGameRobotPos_Request_yaw
{
public:
  explicit Init_SendGameRobotPos_Request_yaw(::node_interface::srv::SendGameRobotPos_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendGameRobotPos_Request yaw(::node_interface::srv::SendGameRobotPos_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGameRobotPos_Request msg_;
};

class Init_SendGameRobotPos_Request_z
{
public:
  explicit Init_SendGameRobotPos_Request_z(::node_interface::srv::SendGameRobotPos_Request & msg)
  : msg_(msg)
  {}
  Init_SendGameRobotPos_Request_yaw z(::node_interface::srv::SendGameRobotPos_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SendGameRobotPos_Request_yaw(msg_);
  }

private:
  ::node_interface::srv::SendGameRobotPos_Request msg_;
};

class Init_SendGameRobotPos_Request_y
{
public:
  explicit Init_SendGameRobotPos_Request_y(::node_interface::srv::SendGameRobotPos_Request & msg)
  : msg_(msg)
  {}
  Init_SendGameRobotPos_Request_z y(::node_interface::srv::SendGameRobotPos_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SendGameRobotPos_Request_z(msg_);
  }

private:
  ::node_interface::srv::SendGameRobotPos_Request msg_;
};

class Init_SendGameRobotPos_Request_x
{
public:
  Init_SendGameRobotPos_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendGameRobotPos_Request_y x(::node_interface::srv::SendGameRobotPos_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SendGameRobotPos_Request_y(msg_);
  }

private:
  ::node_interface::srv::SendGameRobotPos_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGameRobotPos_Request>()
{
  return node_interface::srv::builder::Init_SendGameRobotPos_Request_x();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGameRobotPos_Response_result
{
public:
  Init_SendGameRobotPos_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendGameRobotPos_Response result(::node_interface::srv::SendGameRobotPos_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGameRobotPos_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGameRobotPos_Response>()
{
  return node_interface::srv::builder::Init_SendGameRobotPos_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GAME_ROBOT_POS__BUILDER_HPP_
