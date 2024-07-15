// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/ChassisData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/chassis_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_ChassisData_vw
{
public:
  explicit Init_ChassisData_vw(::node_interface::msg::ChassisData & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::ChassisData vw(::node_interface::msg::ChassisData::_vw_type arg)
  {
    msg_.vw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::ChassisData msg_;
};

class Init_ChassisData_vy
{
public:
  explicit Init_ChassisData_vy(::node_interface::msg::ChassisData & msg)
  : msg_(msg)
  {}
  Init_ChassisData_vw vy(::node_interface::msg::ChassisData::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_ChassisData_vw(msg_);
  }

private:
  ::node_interface::msg::ChassisData msg_;
};

class Init_ChassisData_vx
{
public:
  Init_ChassisData_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisData_vy vx(::node_interface::msg::ChassisData::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_ChassisData_vy(msg_);
  }

private:
  ::node_interface::msg::ChassisData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::ChassisData>()
{
  return node_interface::msg::builder::Init_ChassisData_vx();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__BUILDER_HPP_
