// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendBuffInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_BUFF_INFO__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_BUFF_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_buff_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendBuffInfo_Request_power_rune_buff
{
public:
  Init_SendBuffInfo_Request_power_rune_buff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendBuffInfo_Request power_rune_buff(::node_interface::srv::SendBuffInfo_Request::_power_rune_buff_type arg)
  {
    msg_.power_rune_buff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendBuffInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendBuffInfo_Request>()
{
  return node_interface::srv::builder::Init_SendBuffInfo_Request_power_rune_buff();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendBuffInfo_Response_result
{
public:
  Init_SendBuffInfo_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendBuffInfo_Response result(::node_interface::srv::SendBuffInfo_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendBuffInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendBuffInfo_Response>()
{
  return node_interface::srv::builder::Init_SendBuffInfo_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_BUFF_INFO__BUILDER_HPP_
