// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/DartClientCmds.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/dart_client_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_DartClientCmds_operate_launch_cmd_time
{
public:
  explicit Init_DartClientCmds_operate_launch_cmd_time(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::DartClientCmds operate_launch_cmd_time(::node_interface::msg::DartClientCmds::_operate_launch_cmd_time_type arg)
  {
    msg_.operate_launch_cmd_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_last_dart_launch_time
{
public:
  explicit Init_DartClientCmds_last_dart_launch_time(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  Init_DartClientCmds_operate_launch_cmd_time last_dart_launch_time(::node_interface::msg::DartClientCmds::_last_dart_launch_time_type arg)
  {
    msg_.last_dart_launch_time = std::move(arg);
    return Init_DartClientCmds_operate_launch_cmd_time(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_fourth_dart_speed
{
public:
  explicit Init_DartClientCmds_fourth_dart_speed(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  Init_DartClientCmds_last_dart_launch_time fourth_dart_speed(::node_interface::msg::DartClientCmds::_fourth_dart_speed_type arg)
  {
    msg_.fourth_dart_speed = std::move(arg);
    return Init_DartClientCmds_last_dart_launch_time(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_third_dart_speed
{
public:
  explicit Init_DartClientCmds_third_dart_speed(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  Init_DartClientCmds_fourth_dart_speed third_dart_speed(::node_interface::msg::DartClientCmds::_third_dart_speed_type arg)
  {
    msg_.third_dart_speed = std::move(arg);
    return Init_DartClientCmds_fourth_dart_speed(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_second_dart_speed
{
public:
  explicit Init_DartClientCmds_second_dart_speed(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  Init_DartClientCmds_third_dart_speed second_dart_speed(::node_interface::msg::DartClientCmds::_second_dart_speed_type arg)
  {
    msg_.second_dart_speed = std::move(arg);
    return Init_DartClientCmds_third_dart_speed(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_first_dart_speed
{
public:
  explicit Init_DartClientCmds_first_dart_speed(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  Init_DartClientCmds_second_dart_speed first_dart_speed(::node_interface::msg::DartClientCmds::_first_dart_speed_type arg)
  {
    msg_.first_dart_speed = std::move(arg);
    return Init_DartClientCmds_second_dart_speed(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_target_change_time
{
public:
  explicit Init_DartClientCmds_target_change_time(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  Init_DartClientCmds_first_dart_speed target_change_time(::node_interface::msg::DartClientCmds::_target_change_time_type arg)
  {
    msg_.target_change_time = std::move(arg);
    return Init_DartClientCmds_first_dart_speed(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_dart_attack_target
{
public:
  explicit Init_DartClientCmds_dart_attack_target(::node_interface::msg::DartClientCmds & msg)
  : msg_(msg)
  {}
  Init_DartClientCmds_target_change_time dart_attack_target(::node_interface::msg::DartClientCmds::_dart_attack_target_type arg)
  {
    msg_.dart_attack_target = std::move(arg);
    return Init_DartClientCmds_target_change_time(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

class Init_DartClientCmds_dart_launch_opening_status
{
public:
  Init_DartClientCmds_dart_launch_opening_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DartClientCmds_dart_attack_target dart_launch_opening_status(::node_interface::msg::DartClientCmds::_dart_launch_opening_status_type arg)
  {
    msg_.dart_launch_opening_status = std::move(arg);
    return Init_DartClientCmds_dart_attack_target(msg_);
  }

private:
  ::node_interface::msg::DartClientCmds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::DartClientCmds>()
{
  return node_interface::msg::builder::Init_DartClientCmds_dart_launch_opening_status();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__BUILDER_HPP_
