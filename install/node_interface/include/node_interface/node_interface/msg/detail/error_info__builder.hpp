// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/ErrorInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ERROR_INFO__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__ERROR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/error_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_ErrorInfo_text
{
public:
  explicit Init_ErrorInfo_text(::node_interface::msg::ErrorInfo & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::ErrorInfo text(::node_interface::msg::ErrorInfo::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::ErrorInfo msg_;
};

class Init_ErrorInfo_code
{
public:
  Init_ErrorInfo_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorInfo_text code(::node_interface::msg::ErrorInfo::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ErrorInfo_text(msg_);
  }

private:
  ::node_interface::msg::ErrorInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::ErrorInfo>()
{
  return node_interface::msg::builder::Init_ErrorInfo_code();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__ERROR_INFO__BUILDER_HPP_
