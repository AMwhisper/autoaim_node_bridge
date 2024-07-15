// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/shoot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_ShootData_bullet_speed
{
public:
  explicit Init_ShootData_bullet_speed(::node_interface::msg::ShootData & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::ShootData bullet_speed(::node_interface::msg::ShootData::_bullet_speed_type arg)
  {
    msg_.bullet_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::ShootData msg_;
};

class Init_ShootData_bullet_freq
{
public:
  explicit Init_ShootData_bullet_freq(::node_interface::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_speed bullet_freq(::node_interface::msg::ShootData::_bullet_freq_type arg)
  {
    msg_.bullet_freq = std::move(arg);
    return Init_ShootData_bullet_speed(msg_);
  }

private:
  ::node_interface::msg::ShootData msg_;
};

class Init_ShootData_shooter_id
{
public:
  explicit Init_ShootData_shooter_id(::node_interface::msg::ShootData & msg)
  : msg_(msg)
  {}
  Init_ShootData_bullet_freq shooter_id(::node_interface::msg::ShootData::_shooter_id_type arg)
  {
    msg_.shooter_id = std::move(arg);
    return Init_ShootData_bullet_freq(msg_);
  }

private:
  ::node_interface::msg::ShootData msg_;
};

class Init_ShootData_bullet_type
{
public:
  Init_ShootData_bullet_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ShootData_shooter_id bullet_type(::node_interface::msg::ShootData::_bullet_type_type arg)
  {
    msg_.bullet_type = std::move(arg);
    return Init_ShootData_shooter_id(msg_);
  }

private:
  ::node_interface::msg::ShootData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::ShootData>()
{
  return node_interface::msg::builder::Init_ShootData_bullet_type();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__BUILDER_HPP_
