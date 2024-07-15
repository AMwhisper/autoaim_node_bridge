// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/DebugInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/debug_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_DebugInfo_debug_data
{
public:
  Init_DebugInfo_debug_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::DebugInfo debug_data(::node_interface::msg::DebugInfo::_debug_data_type arg)
  {
    msg_.debug_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::DebugInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::DebugInfo>()
{
  return node_interface::msg::builder::Init_DebugInfo_debug_data();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__BUILDER_HPP_
