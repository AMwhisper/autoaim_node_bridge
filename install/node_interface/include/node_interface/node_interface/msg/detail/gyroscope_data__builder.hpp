// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/GyroscopeData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/gyroscope_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_GyroscopeData_roll
{
public:
  explicit Init_GyroscopeData_roll(::node_interface::msg::GyroscopeData & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::GyroscopeData roll(::node_interface::msg::GyroscopeData::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::GyroscopeData msg_;
};

class Init_GyroscopeData_pitch
{
public:
  explicit Init_GyroscopeData_pitch(::node_interface::msg::GyroscopeData & msg)
  : msg_(msg)
  {}
  Init_GyroscopeData_roll pitch(::node_interface::msg::GyroscopeData::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GyroscopeData_roll(msg_);
  }

private:
  ::node_interface::msg::GyroscopeData msg_;
};

class Init_GyroscopeData_yaw
{
public:
  Init_GyroscopeData_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GyroscopeData_pitch yaw(::node_interface::msg::GyroscopeData::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GyroscopeData_pitch(msg_);
  }

private:
  ::node_interface::msg::GyroscopeData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::GyroscopeData>()
{
  return node_interface::msg::builder::Init_GyroscopeData_yaw();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__BUILDER_HPP_
