// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendDartStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DART_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DART_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_dart_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDartStatus_Request_stage_remaining_time
{
public:
  explicit Init_SendDartStatus_Request_stage_remaining_time(::node_interface::srv::SendDartStatus_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendDartStatus_Request stage_remaining_time(::node_interface::srv::SendDartStatus_Request::_stage_remaining_time_type arg)
  {
    msg_.stage_remaining_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDartStatus_Request msg_;
};

class Init_SendDartStatus_Request_dart_belong
{
public:
  Init_SendDartStatus_Request_dart_belong()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendDartStatus_Request_stage_remaining_time dart_belong(::node_interface::srv::SendDartStatus_Request::_dart_belong_type arg)
  {
    msg_.dart_belong = std::move(arg);
    return Init_SendDartStatus_Request_stage_remaining_time(msg_);
  }

private:
  ::node_interface::srv::SendDartStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDartStatus_Request>()
{
  return node_interface::srv::builder::Init_SendDartStatus_Request_dart_belong();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDartStatus_Response_result
{
public:
  Init_SendDartStatus_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDartStatus_Response result(::node_interface::srv::SendDartStatus_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDartStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDartStatus_Response>()
{
  return node_interface::srv::builder::Init_SendDartStatus_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DART_STATUS__BUILDER_HPP_
