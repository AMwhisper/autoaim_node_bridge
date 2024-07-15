// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/DbugData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/dbug_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_DbugData_dbus_buffer
{
public:
  Init_DbugData_dbus_buffer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::DbugData dbus_buffer(::node_interface::msg::DbugData::_dbus_buffer_type arg)
  {
    msg_.dbus_buffer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::DbugData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::DbugData>()
{
  return node_interface::msg::builder::Init_DbugData_dbus_buffer();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__BUILDER_HPP_
