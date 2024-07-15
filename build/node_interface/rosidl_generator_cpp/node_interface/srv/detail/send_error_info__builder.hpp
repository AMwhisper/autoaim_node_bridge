// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendErrorInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ERROR_INFO__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ERROR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_error_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendErrorInfo_Request_text
{
public:
  explicit Init_SendErrorInfo_Request_text(::node_interface::srv::SendErrorInfo_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendErrorInfo_Request text(::node_interface::srv::SendErrorInfo_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendErrorInfo_Request msg_;
};

class Init_SendErrorInfo_Request_code
{
public:
  Init_SendErrorInfo_Request_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendErrorInfo_Request_text code(::node_interface::srv::SendErrorInfo_Request::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_SendErrorInfo_Request_text(msg_);
  }

private:
  ::node_interface::srv::SendErrorInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendErrorInfo_Request>()
{
  return node_interface::srv::builder::Init_SendErrorInfo_Request_code();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendErrorInfo_Response_result
{
public:
  Init_SendErrorInfo_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendErrorInfo_Response result(::node_interface::srv::SendErrorInfo_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendErrorInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendErrorInfo_Response>()
{
  return node_interface::srv::builder::Init_SendErrorInfo_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ERROR_INFO__BUILDER_HPP_
