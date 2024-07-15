// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_RefereeWarning_foul_robot_id
{
public:
  explicit Init_RefereeWarning_foul_robot_id(::node_interface::msg::RefereeWarning & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::RefereeWarning foul_robot_id(::node_interface::msg::RefereeWarning::_foul_robot_id_type arg)
  {
    msg_.foul_robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::RefereeWarning msg_;
};

class Init_RefereeWarning_level
{
public:
  Init_RefereeWarning_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeWarning_foul_robot_id level(::node_interface::msg::RefereeWarning::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_RefereeWarning_foul_robot_id(msg_);
  }

private:
  ::node_interface::msg::RefereeWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::RefereeWarning>()
{
  return node_interface::msg::builder::Init_RefereeWarning_level();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__REFEREE_WARNING__BUILDER_HPP_
