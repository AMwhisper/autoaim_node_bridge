// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendDartRemainingTime.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DART_REMAINING_TIME__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DART_REMAINING_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_dart_remaining_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDartRemainingTime_Request_dart_remaining_time
{
public:
  Init_SendDartRemainingTime_Request_dart_remaining_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDartRemainingTime_Request dart_remaining_time(::node_interface::srv::SendDartRemainingTime_Request::_dart_remaining_time_type arg)
  {
    msg_.dart_remaining_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDartRemainingTime_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDartRemainingTime_Request>()
{
  return node_interface::srv::builder::Init_SendDartRemainingTime_Request_dart_remaining_time();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDartRemainingTime_Response_result
{
public:
  Init_SendDartRemainingTime_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDartRemainingTime_Response result(::node_interface::srv::SendDartRemainingTime_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDartRemainingTime_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDartRemainingTime_Response>()
{
  return node_interface::srv::builder::Init_SendDartRemainingTime_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DART_REMAINING_TIME__BUILDER_HPP_
