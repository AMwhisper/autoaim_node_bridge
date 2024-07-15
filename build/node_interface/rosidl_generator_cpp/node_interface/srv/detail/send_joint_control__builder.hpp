// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendJointControl.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_CONTROL__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_joint_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendJointControl_Request_wrist_joint_2_speed
{
public:
  explicit Init_SendJointControl_Request_wrist_joint_2_speed(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendJointControl_Request wrist_joint_2_speed(::node_interface::srv::SendJointControl_Request::_wrist_joint_2_speed_type arg)
  {
    msg_.wrist_joint_2_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_wrist_joint_2_position
{
public:
  explicit Init_SendJointControl_Request_wrist_joint_2_position(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_wrist_joint_2_speed wrist_joint_2_position(::node_interface::srv::SendJointControl_Request::_wrist_joint_2_position_type arg)
  {
    msg_.wrist_joint_2_position = std::move(arg);
    return Init_SendJointControl_Request_wrist_joint_2_speed(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_wrist_joint_1_speed
{
public:
  explicit Init_SendJointControl_Request_wrist_joint_1_speed(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_wrist_joint_2_position wrist_joint_1_speed(::node_interface::srv::SendJointControl_Request::_wrist_joint_1_speed_type arg)
  {
    msg_.wrist_joint_1_speed = std::move(arg);
    return Init_SendJointControl_Request_wrist_joint_2_position(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_wrist_joint_1_position
{
public:
  explicit Init_SendJointControl_Request_wrist_joint_1_position(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_wrist_joint_1_speed wrist_joint_1_position(::node_interface::srv::SendJointControl_Request::_wrist_joint_1_position_type arg)
  {
    msg_.wrist_joint_1_position = std::move(arg);
    return Init_SendJointControl_Request_wrist_joint_1_speed(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_elbow_joint_speed
{
public:
  explicit Init_SendJointControl_Request_elbow_joint_speed(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_wrist_joint_1_position elbow_joint_speed(::node_interface::srv::SendJointControl_Request::_elbow_joint_speed_type arg)
  {
    msg_.elbow_joint_speed = std::move(arg);
    return Init_SendJointControl_Request_wrist_joint_1_position(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_elbow_joint_position
{
public:
  explicit Init_SendJointControl_Request_elbow_joint_position(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_elbow_joint_speed elbow_joint_position(::node_interface::srv::SendJointControl_Request::_elbow_joint_position_type arg)
  {
    msg_.elbow_joint_position = std::move(arg);
    return Init_SendJointControl_Request_elbow_joint_speed(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_shoulder_joint_speed
{
public:
  explicit Init_SendJointControl_Request_shoulder_joint_speed(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_elbow_joint_position shoulder_joint_speed(::node_interface::srv::SendJointControl_Request::_shoulder_joint_speed_type arg)
  {
    msg_.shoulder_joint_speed = std::move(arg);
    return Init_SendJointControl_Request_elbow_joint_position(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_shoulder_joint_position
{
public:
  explicit Init_SendJointControl_Request_shoulder_joint_position(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_shoulder_joint_speed shoulder_joint_position(::node_interface::srv::SendJointControl_Request::_shoulder_joint_position_type arg)
  {
    msg_.shoulder_joint_position = std::move(arg);
    return Init_SendJointControl_Request_shoulder_joint_speed(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_base_joint_speed
{
public:
  explicit Init_SendJointControl_Request_base_joint_speed(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_shoulder_joint_position base_joint_speed(::node_interface::srv::SendJointControl_Request::_base_joint_speed_type arg)
  {
    msg_.base_joint_speed = std::move(arg);
    return Init_SendJointControl_Request_shoulder_joint_position(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_base_joint_position
{
public:
  explicit Init_SendJointControl_Request_base_joint_position(::node_interface::srv::SendJointControl_Request & msg)
  : msg_(msg)
  {}
  Init_SendJointControl_Request_base_joint_speed base_joint_position(::node_interface::srv::SendJointControl_Request::_base_joint_position_type arg)
  {
    msg_.base_joint_position = std::move(arg);
    return Init_SendJointControl_Request_base_joint_speed(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

class Init_SendJointControl_Request_state_code
{
public:
  Init_SendJointControl_Request_state_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendJointControl_Request_base_joint_position state_code(::node_interface::srv::SendJointControl_Request::_state_code_type arg)
  {
    msg_.state_code = std::move(arg);
    return Init_SendJointControl_Request_base_joint_position(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendJointControl_Request>()
{
  return node_interface::srv::builder::Init_SendJointControl_Request_state_code();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendJointControl_Response_result
{
public:
  Init_SendJointControl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendJointControl_Response result(::node_interface::srv::SendJointControl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendJointControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendJointControl_Response>()
{
  return node_interface::srv::builder::Init_SendJointControl_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_CONTROL__BUILDER_HPP_
