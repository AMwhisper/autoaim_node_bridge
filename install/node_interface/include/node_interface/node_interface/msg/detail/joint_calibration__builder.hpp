// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/JointCalibration.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__JOINT_CALIBRATION__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__JOINT_CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/joint_calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_JointCalibration_wrist_joint_2_speed
{
public:
  explicit Init_JointCalibration_wrist_joint_2_speed(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::JointCalibration wrist_joint_2_speed(::node_interface::msg::JointCalibration::_wrist_joint_2_speed_type arg)
  {
    msg_.wrist_joint_2_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_wrist_joint_2_position
{
public:
  explicit Init_JointCalibration_wrist_joint_2_position(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_wrist_joint_2_speed wrist_joint_2_position(::node_interface::msg::JointCalibration::_wrist_joint_2_position_type arg)
  {
    msg_.wrist_joint_2_position = std::move(arg);
    return Init_JointCalibration_wrist_joint_2_speed(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_wrist_joint_1_speed
{
public:
  explicit Init_JointCalibration_wrist_joint_1_speed(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_wrist_joint_2_position wrist_joint_1_speed(::node_interface::msg::JointCalibration::_wrist_joint_1_speed_type arg)
  {
    msg_.wrist_joint_1_speed = std::move(arg);
    return Init_JointCalibration_wrist_joint_2_position(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_wrist_joint_1_position
{
public:
  explicit Init_JointCalibration_wrist_joint_1_position(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_wrist_joint_1_speed wrist_joint_1_position(::node_interface::msg::JointCalibration::_wrist_joint_1_position_type arg)
  {
    msg_.wrist_joint_1_position = std::move(arg);
    return Init_JointCalibration_wrist_joint_1_speed(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_elbow_joint_speed
{
public:
  explicit Init_JointCalibration_elbow_joint_speed(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_wrist_joint_1_position elbow_joint_speed(::node_interface::msg::JointCalibration::_elbow_joint_speed_type arg)
  {
    msg_.elbow_joint_speed = std::move(arg);
    return Init_JointCalibration_wrist_joint_1_position(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_elbow_joint_position
{
public:
  explicit Init_JointCalibration_elbow_joint_position(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_elbow_joint_speed elbow_joint_position(::node_interface::msg::JointCalibration::_elbow_joint_position_type arg)
  {
    msg_.elbow_joint_position = std::move(arg);
    return Init_JointCalibration_elbow_joint_speed(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_shoulder_joint_speed
{
public:
  explicit Init_JointCalibration_shoulder_joint_speed(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_elbow_joint_position shoulder_joint_speed(::node_interface::msg::JointCalibration::_shoulder_joint_speed_type arg)
  {
    msg_.shoulder_joint_speed = std::move(arg);
    return Init_JointCalibration_elbow_joint_position(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_shoulder_joint_position
{
public:
  explicit Init_JointCalibration_shoulder_joint_position(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_shoulder_joint_speed shoulder_joint_position(::node_interface::msg::JointCalibration::_shoulder_joint_position_type arg)
  {
    msg_.shoulder_joint_position = std::move(arg);
    return Init_JointCalibration_shoulder_joint_speed(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_base_joint_speed
{
public:
  explicit Init_JointCalibration_base_joint_speed(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_shoulder_joint_position base_joint_speed(::node_interface::msg::JointCalibration::_base_joint_speed_type arg)
  {
    msg_.base_joint_speed = std::move(arg);
    return Init_JointCalibration_shoulder_joint_position(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_base_joint_position
{
public:
  explicit Init_JointCalibration_base_joint_position(::node_interface::msg::JointCalibration & msg)
  : msg_(msg)
  {}
  Init_JointCalibration_base_joint_speed base_joint_position(::node_interface::msg::JointCalibration::_base_joint_position_type arg)
  {
    msg_.base_joint_position = std::move(arg);
    return Init_JointCalibration_base_joint_speed(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

class Init_JointCalibration_state_code
{
public:
  Init_JointCalibration_state_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointCalibration_base_joint_position state_code(::node_interface::msg::JointCalibration::_state_code_type arg)
  {
    msg_.state_code = std::move(arg);
    return Init_JointCalibration_base_joint_position(msg_);
  }

private:
  ::node_interface::msg::JointCalibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::JointCalibration>()
{
  return node_interface::msg::builder::Init_JointCalibration_state_code();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__JOINT_CALIBRATION__BUILDER_HPP_
