// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendDartClientCmds.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DART_CLIENT_CMDS__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DART_CLIENT_CMDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_dart_client_cmds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDartClientCmds_Request_operate_launch_cmd_time
{
public:
  explicit Init_SendDartClientCmds_Request_operate_launch_cmd_time(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendDartClientCmds_Request operate_launch_cmd_time(::node_interface::srv::SendDartClientCmds_Request::_operate_launch_cmd_time_type arg)
  {
    msg_.operate_launch_cmd_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_last_dart_launch_time
{
public:
  explicit Init_SendDartClientCmds_Request_last_dart_launch_time(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  Init_SendDartClientCmds_Request_operate_launch_cmd_time last_dart_launch_time(::node_interface::srv::SendDartClientCmds_Request::_last_dart_launch_time_type arg)
  {
    msg_.last_dart_launch_time = std::move(arg);
    return Init_SendDartClientCmds_Request_operate_launch_cmd_time(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_fourth_dart_speed
{
public:
  explicit Init_SendDartClientCmds_Request_fourth_dart_speed(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  Init_SendDartClientCmds_Request_last_dart_launch_time fourth_dart_speed(::node_interface::srv::SendDartClientCmds_Request::_fourth_dart_speed_type arg)
  {
    msg_.fourth_dart_speed = std::move(arg);
    return Init_SendDartClientCmds_Request_last_dart_launch_time(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_third_dart_speed
{
public:
  explicit Init_SendDartClientCmds_Request_third_dart_speed(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  Init_SendDartClientCmds_Request_fourth_dart_speed third_dart_speed(::node_interface::srv::SendDartClientCmds_Request::_third_dart_speed_type arg)
  {
    msg_.third_dart_speed = std::move(arg);
    return Init_SendDartClientCmds_Request_fourth_dart_speed(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_second_dart_speed
{
public:
  explicit Init_SendDartClientCmds_Request_second_dart_speed(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  Init_SendDartClientCmds_Request_third_dart_speed second_dart_speed(::node_interface::srv::SendDartClientCmds_Request::_second_dart_speed_type arg)
  {
    msg_.second_dart_speed = std::move(arg);
    return Init_SendDartClientCmds_Request_third_dart_speed(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_first_dart_speed
{
public:
  explicit Init_SendDartClientCmds_Request_first_dart_speed(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  Init_SendDartClientCmds_Request_second_dart_speed first_dart_speed(::node_interface::srv::SendDartClientCmds_Request::_first_dart_speed_type arg)
  {
    msg_.first_dart_speed = std::move(arg);
    return Init_SendDartClientCmds_Request_second_dart_speed(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_target_change_time
{
public:
  explicit Init_SendDartClientCmds_Request_target_change_time(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  Init_SendDartClientCmds_Request_first_dart_speed target_change_time(::node_interface::srv::SendDartClientCmds_Request::_target_change_time_type arg)
  {
    msg_.target_change_time = std::move(arg);
    return Init_SendDartClientCmds_Request_first_dart_speed(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_dart_attack_target
{
public:
  explicit Init_SendDartClientCmds_Request_dart_attack_target(::node_interface::srv::SendDartClientCmds_Request & msg)
  : msg_(msg)
  {}
  Init_SendDartClientCmds_Request_target_change_time dart_attack_target(::node_interface::srv::SendDartClientCmds_Request::_dart_attack_target_type arg)
  {
    msg_.dart_attack_target = std::move(arg);
    return Init_SendDartClientCmds_Request_target_change_time(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

class Init_SendDartClientCmds_Request_dart_launch_opening_status
{
public:
  Init_SendDartClientCmds_Request_dart_launch_opening_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendDartClientCmds_Request_dart_attack_target dart_launch_opening_status(::node_interface::srv::SendDartClientCmds_Request::_dart_launch_opening_status_type arg)
  {
    msg_.dart_launch_opening_status = std::move(arg);
    return Init_SendDartClientCmds_Request_dart_attack_target(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDartClientCmds_Request>()
{
  return node_interface::srv::builder::Init_SendDartClientCmds_Request_dart_launch_opening_status();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDartClientCmds_Response_result
{
public:
  Init_SendDartClientCmds_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDartClientCmds_Response result(::node_interface::srv::SendDartClientCmds_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDartClientCmds_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDartClientCmds_Response>()
{
  return node_interface::srv::builder::Init_SendDartClientCmds_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DART_CLIENT_CMDS__BUILDER_HPP_
