// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/RobotCommunication.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/robot_communication__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_RobotCommunication_data4
{
public:
  explicit Init_RobotCommunication_data4(::node_interface::msg::RobotCommunication & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::RobotCommunication data4(::node_interface::msg::RobotCommunication::_data4_type arg)
  {
    msg_.data4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::RobotCommunication msg_;
};

class Init_RobotCommunication_data3
{
public:
  explicit Init_RobotCommunication_data3(::node_interface::msg::RobotCommunication & msg)
  : msg_(msg)
  {}
  Init_RobotCommunication_data4 data3(::node_interface::msg::RobotCommunication::_data3_type arg)
  {
    msg_.data3 = std::move(arg);
    return Init_RobotCommunication_data4(msg_);
  }

private:
  ::node_interface::msg::RobotCommunication msg_;
};

class Init_RobotCommunication_data2
{
public:
  explicit Init_RobotCommunication_data2(::node_interface::msg::RobotCommunication & msg)
  : msg_(msg)
  {}
  Init_RobotCommunication_data3 data2(::node_interface::msg::RobotCommunication::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return Init_RobotCommunication_data3(msg_);
  }

private:
  ::node_interface::msg::RobotCommunication msg_;
};

class Init_RobotCommunication_data1
{
public:
  explicit Init_RobotCommunication_data1(::node_interface::msg::RobotCommunication & msg)
  : msg_(msg)
  {}
  Init_RobotCommunication_data2 data1(::node_interface::msg::RobotCommunication::_data1_type arg)
  {
    msg_.data1 = std::move(arg);
    return Init_RobotCommunication_data2(msg_);
  }

private:
  ::node_interface::msg::RobotCommunication msg_;
};

class Init_RobotCommunication_receiver_id
{
public:
  explicit Init_RobotCommunication_receiver_id(::node_interface::msg::RobotCommunication & msg)
  : msg_(msg)
  {}
  Init_RobotCommunication_data1 receiver_id(::node_interface::msg::RobotCommunication::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_RobotCommunication_data1(msg_);
  }

private:
  ::node_interface::msg::RobotCommunication msg_;
};

class Init_RobotCommunication_send_id
{
public:
  explicit Init_RobotCommunication_send_id(::node_interface::msg::RobotCommunication & msg)
  : msg_(msg)
  {}
  Init_RobotCommunication_receiver_id send_id(::node_interface::msg::RobotCommunication::_send_id_type arg)
  {
    msg_.send_id = std::move(arg);
    return Init_RobotCommunication_receiver_id(msg_);
  }

private:
  ::node_interface::msg::RobotCommunication msg_;
};

class Init_RobotCommunication_data_cmd_id
{
public:
  Init_RobotCommunication_data_cmd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommunication_send_id data_cmd_id(::node_interface::msg::RobotCommunication::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_RobotCommunication_send_id(msg_);
  }

private:
  ::node_interface::msg::RobotCommunication msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::RobotCommunication>()
{
  return node_interface::msg::builder::Init_RobotCommunication_data_cmd_id();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__BUILDER_HPP_
