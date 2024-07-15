// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/event_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_EventData_event_type
{
public:
  Init_EventData_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::EventData event_type(::node_interface::msg::EventData::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::EventData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::EventData>()
{
  return node_interface::msg::builder::Init_EventData_event_type();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__BUILDER_HPP_
