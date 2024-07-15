// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/Heartbeat.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__HEARTBEAT__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__HEARTBEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::Heartbeat>()
{
  return ::node_interface::msg::Heartbeat(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__HEARTBEAT__BUILDER_HPP_
