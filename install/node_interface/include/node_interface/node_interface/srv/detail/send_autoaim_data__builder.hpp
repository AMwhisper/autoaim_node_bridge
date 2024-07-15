// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendAutoaimData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_AUTOAIM_DATA__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_AUTOAIM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_autoaim_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendAutoaimData_Request_fire
{
public:
  explicit Init_SendAutoaimData_Request_fire(::node_interface::srv::SendAutoaimData_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendAutoaimData_Request fire(::node_interface::srv::SendAutoaimData_Request::_fire_type arg)
  {
    msg_.fire = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendAutoaimData_Request msg_;
};

class Init_SendAutoaimData_Request_pitch_angle_diff
{
public:
  explicit Init_SendAutoaimData_Request_pitch_angle_diff(::node_interface::srv::SendAutoaimData_Request & msg)
  : msg_(msg)
  {}
  Init_SendAutoaimData_Request_fire pitch_angle_diff(::node_interface::srv::SendAutoaimData_Request::_pitch_angle_diff_type arg)
  {
    msg_.pitch_angle_diff = std::move(arg);
    return Init_SendAutoaimData_Request_fire(msg_);
  }

private:
  ::node_interface::srv::SendAutoaimData_Request msg_;
};

class Init_SendAutoaimData_Request_yaw_angle_diff
{
public:
  Init_SendAutoaimData_Request_yaw_angle_diff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendAutoaimData_Request_pitch_angle_diff yaw_angle_diff(::node_interface::srv::SendAutoaimData_Request::_yaw_angle_diff_type arg)
  {
    msg_.yaw_angle_diff = std::move(arg);
    return Init_SendAutoaimData_Request_pitch_angle_diff(msg_);
  }

private:
  ::node_interface::srv::SendAutoaimData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendAutoaimData_Request>()
{
  return node_interface::srv::builder::Init_SendAutoaimData_Request_yaw_angle_diff();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendAutoaimData_Response_result
{
public:
  Init_SendAutoaimData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendAutoaimData_Response result(::node_interface::srv::SendAutoaimData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendAutoaimData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendAutoaimData_Response>()
{
  return node_interface::srv::builder::Init_SendAutoaimData_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_AUTOAIM_DATA__BUILDER_HPP_
