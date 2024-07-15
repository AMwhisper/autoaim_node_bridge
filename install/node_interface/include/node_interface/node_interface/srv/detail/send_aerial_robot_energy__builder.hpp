// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendAerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_AERIAL_ROBOT_ENERGY__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_AERIAL_ROBOT_ENERGY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_aerial_robot_energy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendAerialRobotEnergy_Request_attack_time
{
public:
  Init_SendAerialRobotEnergy_Request_attack_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendAerialRobotEnergy_Request attack_time(::node_interface::srv::SendAerialRobotEnergy_Request::_attack_time_type arg)
  {
    msg_.attack_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendAerialRobotEnergy_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendAerialRobotEnergy_Request>()
{
  return node_interface::srv::builder::Init_SendAerialRobotEnergy_Request_attack_time();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendAerialRobotEnergy_Response_result
{
public:
  Init_SendAerialRobotEnergy_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendAerialRobotEnergy_Response result(::node_interface::srv::SendAerialRobotEnergy_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendAerialRobotEnergy_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendAerialRobotEnergy_Response>()
{
  return node_interface::srv::builder::Init_SendAerialRobotEnergy_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_AERIAL_ROBOT_ENERGY__BUILDER_HPP_
