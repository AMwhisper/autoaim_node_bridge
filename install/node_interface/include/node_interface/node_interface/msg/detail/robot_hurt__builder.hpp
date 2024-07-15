// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/robot_hurt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_RobotHurt_hurt_type
{
public:
  explicit Init_RobotHurt_hurt_type(::node_interface::msg::RobotHurt & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::RobotHurt hurt_type(::node_interface::msg::RobotHurt::_hurt_type_type arg)
  {
    msg_.hurt_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::RobotHurt msg_;
};

class Init_RobotHurt_armor_id
{
public:
  Init_RobotHurt_armor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHurt_hurt_type armor_id(::node_interface::msg::RobotHurt::_armor_id_type arg)
  {
    msg_.armor_id = std::move(arg);
    return Init_RobotHurt_hurt_type(msg_);
  }

private:
  ::node_interface::msg::RobotHurt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::RobotHurt>()
{
  return node_interface::msg::builder::Init_RobotHurt_armor_id();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__ROBOT_HURT__BUILDER_HPP_
