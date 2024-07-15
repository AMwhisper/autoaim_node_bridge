// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/DartStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DART_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/dart_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_DartStatus_stage_remaining_time
{
public:
  explicit Init_DartStatus_stage_remaining_time(::node_interface::msg::DartStatus & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::DartStatus stage_remaining_time(::node_interface::msg::DartStatus::_stage_remaining_time_type arg)
  {
    msg_.stage_remaining_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::DartStatus msg_;
};

class Init_DartStatus_dart_belong
{
public:
  Init_DartStatus_dart_belong()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DartStatus_stage_remaining_time dart_belong(::node_interface::msg::DartStatus::_dart_belong_type arg)
  {
    msg_.dart_belong = std::move(arg);
    return Init_DartStatus_stage_remaining_time(msg_);
  }

private:
  ::node_interface::msg::DartStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::DartStatus>()
{
  return node_interface::msg::builder::Init_DartStatus_dart_belong();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_STATUS__BUILDER_HPP_
