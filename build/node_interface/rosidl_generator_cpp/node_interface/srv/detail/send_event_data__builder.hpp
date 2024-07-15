// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendEventData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_EVENT_DATA__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_EVENT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_event_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendEventData_Request_event_type
{
public:
  Init_SendEventData_Request_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendEventData_Request event_type(::node_interface::srv::SendEventData_Request::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendEventData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendEventData_Request>()
{
  return node_interface::srv::builder::Init_SendEventData_Request_event_type();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendEventData_Response_result
{
public:
  Init_SendEventData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendEventData_Response result(::node_interface::srv::SendEventData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendEventData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendEventData_Response>()
{
  return node_interface::srv::builder::Init_SendEventData_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_EVENT_DATA__BUILDER_HPP_
