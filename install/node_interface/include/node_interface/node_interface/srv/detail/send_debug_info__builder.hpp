// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DEBUG_INFO__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DEBUG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDebugInfo_Request_debug_data
{
public:
  Init_SendDebugInfo_Request_debug_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDebugInfo_Request debug_data(::node_interface::srv::SendDebugInfo_Request::_debug_data_type arg)
  {
    msg_.debug_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDebugInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDebugInfo_Request>()
{
  return node_interface::srv::builder::Init_SendDebugInfo_Request_debug_data();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDebugInfo_Response_result
{
public:
  Init_SendDebugInfo_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDebugInfo_Response result(::node_interface::srv::SendDebugInfo_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDebugInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDebugInfo_Response>()
{
  return node_interface::srv::builder::Init_SendDebugInfo_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DEBUG_INFO__BUILDER_HPP_
