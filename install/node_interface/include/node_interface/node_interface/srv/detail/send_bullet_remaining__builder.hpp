// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendBulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_BULLET_REMAINING__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_BULLET_REMAINING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendBulletRemaining_Request_coin_remaining_num
{
public:
  explicit Init_SendBulletRemaining_Request_coin_remaining_num(::node_interface::srv::SendBulletRemaining_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendBulletRemaining_Request coin_remaining_num(::node_interface::srv::SendBulletRemaining_Request::_coin_remaining_num_type arg)
  {
    msg_.coin_remaining_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendBulletRemaining_Request msg_;
};

class Init_SendBulletRemaining_Request_bullet_remaining_num_42mm
{
public:
  explicit Init_SendBulletRemaining_Request_bullet_remaining_num_42mm(::node_interface::srv::SendBulletRemaining_Request & msg)
  : msg_(msg)
  {}
  Init_SendBulletRemaining_Request_coin_remaining_num bullet_remaining_num_42mm(::node_interface::srv::SendBulletRemaining_Request::_bullet_remaining_num_42mm_type arg)
  {
    msg_.bullet_remaining_num_42mm = std::move(arg);
    return Init_SendBulletRemaining_Request_coin_remaining_num(msg_);
  }

private:
  ::node_interface::srv::SendBulletRemaining_Request msg_;
};

class Init_SendBulletRemaining_Request_bullet_remaining_num_17mm
{
public:
  Init_SendBulletRemaining_Request_bullet_remaining_num_17mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendBulletRemaining_Request_bullet_remaining_num_42mm bullet_remaining_num_17mm(::node_interface::srv::SendBulletRemaining_Request::_bullet_remaining_num_17mm_type arg)
  {
    msg_.bullet_remaining_num_17mm = std::move(arg);
    return Init_SendBulletRemaining_Request_bullet_remaining_num_42mm(msg_);
  }

private:
  ::node_interface::srv::SendBulletRemaining_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendBulletRemaining_Request>()
{
  return node_interface::srv::builder::Init_SendBulletRemaining_Request_bullet_remaining_num_17mm();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendBulletRemaining_Response_result
{
public:
  Init_SendBulletRemaining_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendBulletRemaining_Response result(::node_interface::srv::SendBulletRemaining_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendBulletRemaining_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendBulletRemaining_Response>()
{
  return node_interface::srv::builder::Init_SendBulletRemaining_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_BULLET_REMAINING__BUILDER_HPP_
