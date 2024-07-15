// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendDbugData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_dbug_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDbugData_Request_dbus_buffer
{
public:
  Init_SendDbugData_Request_dbus_buffer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDbugData_Request dbus_buffer(::node_interface::srv::SendDbugData_Request::_dbus_buffer_type arg)
  {
    msg_.dbus_buffer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDbugData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDbugData_Request>()
{
  return node_interface::srv::builder::Init_SendDbugData_Request_dbus_buffer();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendDbugData_Response_result
{
public:
  Init_SendDbugData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendDbugData_Response result(::node_interface::srv::SendDbugData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendDbugData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendDbugData_Response>()
{
  return node_interface::srv::builder::Init_SendDbugData_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__BUILDER_HPP_
