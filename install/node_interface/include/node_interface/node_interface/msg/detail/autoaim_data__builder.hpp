// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/AutoaimData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__AUTOAIM_DATA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__AUTOAIM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/autoaim_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_AutoaimData_fire
{
public:
  explicit Init_AutoaimData_fire(::node_interface::msg::AutoaimData & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::AutoaimData fire(::node_interface::msg::AutoaimData::_fire_type arg)
  {
    msg_.fire = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::AutoaimData msg_;
};

class Init_AutoaimData_pitch_angle_diff
{
public:
  explicit Init_AutoaimData_pitch_angle_diff(::node_interface::msg::AutoaimData & msg)
  : msg_(msg)
  {}
  Init_AutoaimData_fire pitch_angle_diff(::node_interface::msg::AutoaimData::_pitch_angle_diff_type arg)
  {
    msg_.pitch_angle_diff = std::move(arg);
    return Init_AutoaimData_fire(msg_);
  }

private:
  ::node_interface::msg::AutoaimData msg_;
};

class Init_AutoaimData_yaw_angle_diff
{
public:
  Init_AutoaimData_yaw_angle_diff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoaimData_pitch_angle_diff yaw_angle_diff(::node_interface::msg::AutoaimData::_yaw_angle_diff_type arg)
  {
    msg_.yaw_angle_diff = std::move(arg);
    return Init_AutoaimData_pitch_angle_diff(msg_);
  }

private:
  ::node_interface::msg::AutoaimData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::AutoaimData>()
{
  return node_interface::msg::builder::Init_AutoaimData_yaw_angle_diff();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__AUTOAIM_DATA__BUILDER_HPP_
