// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendShootData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_SHOOT_DATA__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_SHOOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendShootData_Request_bullet_speed
{
public:
  explicit Init_SendShootData_Request_bullet_speed(::node_interface::srv::SendShootData_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendShootData_Request bullet_speed(::node_interface::srv::SendShootData_Request::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendShootData_Request msg_;
};

class Init_SendShootData_Request_bullet_freq
{
public:
  explicit Init_SendShootData_Request_bullet_freq(::node_interface::srv::SendShootData_Request & msg)
  : msg_(msg)
  {}
  Init_SendShootData_Request_bullet_speed bullet_freq(::node_interface::srv::SendShootData_Request::_bullet_freq_type arg)
  {
    msg_.bullet_freq = std::move(arg);
    return Init_SendShootData_Request_bullet_speed(msg_);
  }

private:
  ::node_interface::srv::SendShootData_Request msg_;
};

class Init_SendShootData_Request_shooter_id
{
public:
  explicit Init_SendShootData_Request_shooter_id(::node_interface::srv::SendShootData_Request & msg)
  : msg_(msg)
  {}
  Init_SendShootData_Request_bullet_freq shooter_id(::node_interface::srv::SendShootData_Request::_shooter_id_type arg)
  {
    msg_.shooter_id = std::move(arg);
    return Init_SendShootData_Request_bullet_freq(msg_);
  }

private:
  ::node_interface::srv::SendShootData_Request msg_;
};

class Init_SendShootData_Request_bullet_type
{
public:
  Init_SendShootData_Request_bullet_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendShootData_Request_shooter_id bullet_type(::node_interface::srv::SendShootData_Request::_bullet_type_type arg)
  {
    msg_.bullet_type = std::move(arg);
    return Init_SendShootData_Request_shooter_id(msg_);
  }

private:
  ::node_interface::srv::SendShootData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendShootData_Request>()
{
  return node_interface::srv::builder::Init_SendShootData_Request_bullet_type();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendShootData_Response_result
{
public:
  Init_SendShootData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendShootData_Response result(::node_interface::srv::SendShootData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendShootData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendShootData_Response>()
{
  return node_interface::srv::builder::Init_SendShootData_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_SHOOT_DATA__BUILDER_HPP_
