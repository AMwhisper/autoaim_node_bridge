// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/BuffInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/buff_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_BuffInfo_power_rune_buff
{
public:
  Init_BuffInfo_power_rune_buff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::BuffInfo power_rune_buff(::node_interface::msg::BuffInfo::_power_rune_buff_type arg)
  {
    msg_.power_rune_buff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::BuffInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::BuffInfo>()
{
  return node_interface::msg::builder::Init_BuffInfo_power_rune_buff();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__BUILDER_HPP_
