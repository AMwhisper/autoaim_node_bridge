// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendRobotHurt.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_robot_hurt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendRobotHurt_Request_hurt_type
{
public:
  explicit Init_SendRobotHurt_Request_hurt_type(::node_interface::srv::SendRobotHurt_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendRobotHurt_Request hurt_type(::node_interface::srv::SendRobotHurt_Request::_hurt_type_type arg)
  {
    msg_.hurt_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendRobotHurt_Request msg_;
};

class Init_SendRobotHurt_Request_armor_id
{
public:
  Init_SendRobotHurt_Request_armor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendRobotHurt_Request_hurt_type armor_id(::node_interface::srv::SendRobotHurt_Request::_armor_id_type arg)
  {
    msg_.armor_id = std::move(arg);
    return Init_SendRobotHurt_Request_hurt_type(msg_);
  }

private:
  ::node_interface::srv::SendRobotHurt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendRobotHurt_Request>()
{
  return node_interface::srv::builder::Init_SendRobotHurt_Request_armor_id();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendRobotHurt_Response_result
{
public:
  Init_SendRobotHurt_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendRobotHurt_Response result(::node_interface::srv::SendRobotHurt_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendRobotHurt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendRobotHurt_Response>()
{
  return node_interface::srv::builder::Init_SendRobotHurt_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__BUILDER_HPP_
