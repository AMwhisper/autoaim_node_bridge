// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/HealthPoint.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/health_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_HealthPoint_blue_base_hp
{
public:
  explicit Init_HealthPoint_blue_base_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::HealthPoint blue_base_hp(::node_interface::msg::HealthPoint::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_blue_outpost_hp
{
public:
  explicit Init_HealthPoint_blue_outpost_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_base_hp blue_outpost_hp(::node_interface::msg::HealthPoint::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_HealthPoint_blue_base_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_blue_7_robot_hp
{
public:
  explicit Init_HealthPoint_blue_7_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_outpost_hp blue_7_robot_hp(::node_interface::msg::HealthPoint::_blue_7_robot_hp_type arg)
  {
    msg_.blue_7_robot_hp = std::move(arg);
    return Init_HealthPoint_blue_outpost_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_blue_5_robot_hp
{
public:
  explicit Init_HealthPoint_blue_5_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_7_robot_hp blue_5_robot_hp(::node_interface::msg::HealthPoint::_blue_5_robot_hp_type arg)
  {
    msg_.blue_5_robot_hp = std::move(arg);
    return Init_HealthPoint_blue_7_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_blue_4_robot_hp
{
public:
  explicit Init_HealthPoint_blue_4_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_5_robot_hp blue_4_robot_hp(::node_interface::msg::HealthPoint::_blue_4_robot_hp_type arg)
  {
    msg_.blue_4_robot_hp = std::move(arg);
    return Init_HealthPoint_blue_5_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_blue_3_robot_hp
{
public:
  explicit Init_HealthPoint_blue_3_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_4_robot_hp blue_3_robot_hp(::node_interface::msg::HealthPoint::_blue_3_robot_hp_type arg)
  {
    msg_.blue_3_robot_hp = std::move(arg);
    return Init_HealthPoint_blue_4_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_blue_2_robot_hp
{
public:
  explicit Init_HealthPoint_blue_2_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_3_robot_hp blue_2_robot_hp(::node_interface::msg::HealthPoint::_blue_2_robot_hp_type arg)
  {
    msg_.blue_2_robot_hp = std::move(arg);
    return Init_HealthPoint_blue_3_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_blue_1_robot_hp
{
public:
  explicit Init_HealthPoint_blue_1_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_2_robot_hp blue_1_robot_hp(::node_interface::msg::HealthPoint::_blue_1_robot_hp_type arg)
  {
    msg_.blue_1_robot_hp = std::move(arg);
    return Init_HealthPoint_blue_2_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_base_hp
{
public:
  explicit Init_HealthPoint_red_base_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_blue_1_robot_hp red_base_hp(::node_interface::msg::HealthPoint::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_HealthPoint_blue_1_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_outpost_hp
{
public:
  explicit Init_HealthPoint_red_outpost_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_red_base_hp red_outpost_hp(::node_interface::msg::HealthPoint::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_HealthPoint_red_base_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_7_robot_hp
{
public:
  explicit Init_HealthPoint_red_7_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_red_outpost_hp red_7_robot_hp(::node_interface::msg::HealthPoint::_red_7_robot_hp_type arg)
  {
    msg_.red_7_robot_hp = std::move(arg);
    return Init_HealthPoint_red_outpost_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_5_robot_hp
{
public:
  explicit Init_HealthPoint_red_5_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_red_7_robot_hp red_5_robot_hp(::node_interface::msg::HealthPoint::_red_5_robot_hp_type arg)
  {
    msg_.red_5_robot_hp = std::move(arg);
    return Init_HealthPoint_red_7_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_4_robot_hp
{
public:
  explicit Init_HealthPoint_red_4_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_red_5_robot_hp red_4_robot_hp(::node_interface::msg::HealthPoint::_red_4_robot_hp_type arg)
  {
    msg_.red_4_robot_hp = std::move(arg);
    return Init_HealthPoint_red_5_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_3_robot_hp
{
public:
  explicit Init_HealthPoint_red_3_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_red_4_robot_hp red_3_robot_hp(::node_interface::msg::HealthPoint::_red_3_robot_hp_type arg)
  {
    msg_.red_3_robot_hp = std::move(arg);
    return Init_HealthPoint_red_4_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_2_robot_hp
{
public:
  explicit Init_HealthPoint_red_2_robot_hp(::node_interface::msg::HealthPoint & msg)
  : msg_(msg)
  {}
  Init_HealthPoint_red_3_robot_hp red_2_robot_hp(::node_interface::msg::HealthPoint::_red_2_robot_hp_type arg)
  {
    msg_.red_2_robot_hp = std::move(arg);
    return Init_HealthPoint_red_3_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

class Init_HealthPoint_red_1_robot_hp
{
public:
  Init_HealthPoint_red_1_robot_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HealthPoint_red_2_robot_hp red_1_robot_hp(::node_interface::msg::HealthPoint::_red_1_robot_hp_type arg)
  {
    msg_.red_1_robot_hp = std::move(arg);
    return Init_HealthPoint_red_2_robot_hp(msg_);
  }

private:
  ::node_interface::msg::HealthPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::HealthPoint>()
{
  return node_interface::msg::builder::Init_HealthPoint_red_1_robot_hp();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__HEALTH_POINT__BUILDER_HPP_
