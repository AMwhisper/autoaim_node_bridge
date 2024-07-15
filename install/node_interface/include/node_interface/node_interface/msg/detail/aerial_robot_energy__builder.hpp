// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/AerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__AERIAL_ROBOT_ENERGY__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__AERIAL_ROBOT_ENERGY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/aerial_robot_energy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_AerialRobotEnergy_attack_time
{
public:
  Init_AerialRobotEnergy_attack_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::AerialRobotEnergy attack_time(::node_interface::msg::AerialRobotEnergy::_attack_time_type arg)
  {
    msg_.attack_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::AerialRobotEnergy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::AerialRobotEnergy>()
{
  return node_interface::msg::builder::Init_AerialRobotEnergy_attack_time();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__AERIAL_ROBOT_ENERGY__BUILDER_HPP_
