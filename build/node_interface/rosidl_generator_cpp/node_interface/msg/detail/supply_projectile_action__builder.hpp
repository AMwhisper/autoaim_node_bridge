// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/supply_projectile_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_SupplyProjectileAction_supply_projectile_num
{
public:
  explicit Init_SupplyProjectileAction_supply_projectile_num(::node_interface::msg::SupplyProjectileAction & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::SupplyProjectileAction supply_projectile_num(::node_interface::msg::SupplyProjectileAction::_supply_projectile_num_type arg)
  {
    msg_.supply_projectile_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::SupplyProjectileAction msg_;
};

class Init_SupplyProjectileAction_supply_projectile_step
{
public:
  explicit Init_SupplyProjectileAction_supply_projectile_step(::node_interface::msg::SupplyProjectileAction & msg)
  : msg_(msg)
  {}
  Init_SupplyProjectileAction_supply_projectile_num supply_projectile_step(::node_interface::msg::SupplyProjectileAction::_supply_projectile_step_type arg)
  {
    msg_.supply_projectile_step = std::move(arg);
    return Init_SupplyProjectileAction_supply_projectile_num(msg_);
  }

private:
  ::node_interface::msg::SupplyProjectileAction msg_;
};

class Init_SupplyProjectileAction_supply_robot_id
{
public:
  explicit Init_SupplyProjectileAction_supply_robot_id(::node_interface::msg::SupplyProjectileAction & msg)
  : msg_(msg)
  {}
  Init_SupplyProjectileAction_supply_projectile_step supply_robot_id(::node_interface::msg::SupplyProjectileAction::_supply_robot_id_type arg)
  {
    msg_.supply_robot_id = std::move(arg);
    return Init_SupplyProjectileAction_supply_projectile_step(msg_);
  }

private:
  ::node_interface::msg::SupplyProjectileAction msg_;
};

class Init_SupplyProjectileAction_supply_projectile_id
{
public:
  Init_SupplyProjectileAction_supply_projectile_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SupplyProjectileAction_supply_robot_id supply_projectile_id(::node_interface::msg::SupplyProjectileAction::_supply_projectile_id_type arg)
  {
    msg_.supply_projectile_id = std::move(arg);
    return Init_SupplyProjectileAction_supply_robot_id(msg_);
  }

private:
  ::node_interface::msg::SupplyProjectileAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::SupplyProjectileAction>()
{
  return node_interface::msg::builder::Init_SupplyProjectileAction_supply_projectile_id();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_
