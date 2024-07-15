// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/DartRemainingTime.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_REMAINING_TIME__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DART_REMAINING_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/dart_remaining_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_DartRemainingTime_dart_remaining_time
{
public:
  Init_DartRemainingTime_dart_remaining_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::DartRemainingTime dart_remaining_time(::node_interface::msg::DartRemainingTime::_dart_remaining_time_type arg)
  {
    msg_.dart_remaining_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::DartRemainingTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::DartRemainingTime>()
{
  return node_interface::msg::builder::Init_DartRemainingTime_dart_remaining_time();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_REMAINING_TIME__BUILDER_HPP_
