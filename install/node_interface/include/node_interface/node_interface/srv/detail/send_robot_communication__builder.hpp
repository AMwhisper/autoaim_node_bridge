// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendRobotCommunication.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_COMMUNICATION__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_COMMUNICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_robot_communication__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendRobotCommunication_Request_data4
{
public:
  explicit Init_SendRobotCommunication_Request_data4(::node_interface::srv::SendRobotCommunication_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendRobotCommunication_Request data4(::node_interface::srv::SendRobotCommunication_Request::_data4_type arg)
  {
    msg_.data4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Request msg_;
};

class Init_SendRobotCommunication_Request_data3
{
public:
  explicit Init_SendRobotCommunication_Request_data3(::node_interface::srv::SendRobotCommunication_Request & msg)
  : msg_(msg)
  {}
  Init_SendRobotCommunication_Request_data4 data3(::node_interface::srv::SendRobotCommunication_Request::_data3_type arg)
  {
    msg_.data3 = std::move(arg);
    return Init_SendRobotCommunication_Request_data4(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Request msg_;
};

class Init_SendRobotCommunication_Request_data2
{
public:
  explicit Init_SendRobotCommunication_Request_data2(::node_interface::srv::SendRobotCommunication_Request & msg)
  : msg_(msg)
  {}
  Init_SendRobotCommunication_Request_data3 data2(::node_interface::srv::SendRobotCommunication_Request::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return Init_SendRobotCommunication_Request_data3(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Request msg_;
};

class Init_SendRobotCommunication_Request_data1
{
public:
  explicit Init_SendRobotCommunication_Request_data1(::node_interface::srv::SendRobotCommunication_Request & msg)
  : msg_(msg)
  {}
  Init_SendRobotCommunication_Request_data2 data1(::node_interface::srv::SendRobotCommunication_Request::_data1_type arg)
  {
    msg_.data1 = std::move(arg);
    return Init_SendRobotCommunication_Request_data2(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Request msg_;
};

class Init_SendRobotCommunication_Request_receiver_id
{
public:
  explicit Init_SendRobotCommunication_Request_receiver_id(::node_interface::srv::SendRobotCommunication_Request & msg)
  : msg_(msg)
  {}
  Init_SendRobotCommunication_Request_data1 receiver_id(::node_interface::srv::SendRobotCommunication_Request::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_SendRobotCommunication_Request_data1(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Request msg_;
};

class Init_SendRobotCommunication_Request_send_id
{
public:
  explicit Init_SendRobotCommunication_Request_send_id(::node_interface::srv::SendRobotCommunication_Request & msg)
  : msg_(msg)
  {}
  Init_SendRobotCommunication_Request_receiver_id send_id(::node_interface::srv::SendRobotCommunication_Request::_send_id_type arg)
  {
    msg_.send_id = std::move(arg);
    return Init_SendRobotCommunication_Request_receiver_id(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Request msg_;
};

class Init_SendRobotCommunication_Request_data_cmd_id
{
public:
  Init_SendRobotCommunication_Request_data_cmd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendRobotCommunication_Request_send_id data_cmd_id(::node_interface::srv::SendRobotCommunication_Request::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_SendRobotCommunication_Request_send_id(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendRobotCommunication_Request>()
{
  return node_interface::srv::builder::Init_SendRobotCommunication_Request_data_cmd_id();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendRobotCommunication_Response_result
{
public:
  Init_SendRobotCommunication_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendRobotCommunication_Response result(::node_interface::srv::SendRobotCommunication_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendRobotCommunication_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendRobotCommunication_Response>()
{
  return node_interface::srv::builder::Init_SendRobotCommunication_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_COMMUNICATION__BUILDER_HPP_
