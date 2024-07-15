// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendChassisData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CHASSIS_DATA__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CHASSIS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_chassis_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendChassisData_Request_vw
{
public:
  explicit Init_SendChassisData_Request_vw(::node_interface::srv::SendChassisData_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendChassisData_Request vw(::node_interface::srv::SendChassisData_Request::_vw_type arg)
  {
    msg_.vw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendChassisData_Request msg_;
};

class Init_SendChassisData_Request_vy
{
public:
  explicit Init_SendChassisData_Request_vy(::node_interface::srv::SendChassisData_Request & msg)
  : msg_(msg)
  {}
  Init_SendChassisData_Request_vw vy(::node_interface::srv::SendChassisData_Request::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_SendChassisData_Request_vw(msg_);
  }

private:
  ::node_interface::srv::SendChassisData_Request msg_;
};

class Init_SendChassisData_Request_vx
{
public:
  Init_SendChassisData_Request_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendChassisData_Request_vy vx(::node_interface::srv::SendChassisData_Request::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_SendChassisData_Request_vy(msg_);
  }

private:
  ::node_interface::srv::SendChassisData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendChassisData_Request>()
{
  return node_interface::srv::builder::Init_SendChassisData_Request_vx();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendChassisData_Response_result
{
public:
  Init_SendChassisData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendChassisData_Response result(::node_interface::srv::SendChassisData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendChassisData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendChassisData_Response>()
{
  return node_interface::srv::builder::Init_SendChassisData_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CHASSIS_DATA__BUILDER_HPP_
