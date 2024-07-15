// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendGyroscopeData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GYROSCOPE_DATA__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GYROSCOPE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_gyroscope_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGyroscopeData_Request_roll
{
public:
  explicit Init_SendGyroscopeData_Request_roll(::node_interface::srv::SendGyroscopeData_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendGyroscopeData_Request roll(::node_interface::srv::SendGyroscopeData_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGyroscopeData_Request msg_;
};

class Init_SendGyroscopeData_Request_pitch
{
public:
  explicit Init_SendGyroscopeData_Request_pitch(::node_interface::srv::SendGyroscopeData_Request & msg)
  : msg_(msg)
  {}
  Init_SendGyroscopeData_Request_roll pitch(::node_interface::srv::SendGyroscopeData_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SendGyroscopeData_Request_roll(msg_);
  }

private:
  ::node_interface::srv::SendGyroscopeData_Request msg_;
};

class Init_SendGyroscopeData_Request_yaw
{
public:
  Init_SendGyroscopeData_Request_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendGyroscopeData_Request_pitch yaw(::node_interface::srv::SendGyroscopeData_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_SendGyroscopeData_Request_pitch(msg_);
  }

private:
  ::node_interface::srv::SendGyroscopeData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGyroscopeData_Request>()
{
  return node_interface::srv::builder::Init_SendGyroscopeData_Request_yaw();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGyroscopeData_Response_result
{
public:
  Init_SendGyroscopeData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendGyroscopeData_Response result(::node_interface::srv::SendGyroscopeData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGyroscopeData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGyroscopeData_Response>()
{
  return node_interface::srv::builder::Init_SendGyroscopeData_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GYROSCOPE_DATA__BUILDER_HPP_
