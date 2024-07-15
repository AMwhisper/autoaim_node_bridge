// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendSupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_supply_projectile_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendSupplyProjectileAction_Request_supply_projectile_num
{
public:
  explicit Init_SendSupplyProjectileAction_Request_supply_projectile_num(::node_interface::srv::SendSupplyProjectileAction_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendSupplyProjectileAction_Request supply_projectile_num(::node_interface::srv::SendSupplyProjectileAction_Request::_supply_projectile_num_type arg)
  {
    msg_.supply_projectile_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendSupplyProjectileAction_Request msg_;
};

class Init_SendSupplyProjectileAction_Request_supply_projectile_step
{
public:
  explicit Init_SendSupplyProjectileAction_Request_supply_projectile_step(::node_interface::srv::SendSupplyProjectileAction_Request & msg)
  : msg_(msg)
  {}
  Init_SendSupplyProjectileAction_Request_supply_projectile_num supply_projectile_step(::node_interface::srv::SendSupplyProjectileAction_Request::_supply_projectile_step_type arg)
  {
    msg_.supply_projectile_step = std::move(arg);
    return Init_SendSupplyProjectileAction_Request_supply_projectile_num(msg_);
  }

private:
  ::node_interface::srv::SendSupplyProjectileAction_Request msg_;
};

class Init_SendSupplyProjectileAction_Request_supply_robot_id
{
public:
  explicit Init_SendSupplyProjectileAction_Request_supply_robot_id(::node_interface::srv::SendSupplyProjectileAction_Request & msg)
  : msg_(msg)
  {}
  Init_SendSupplyProjectileAction_Request_supply_projectile_step supply_robot_id(::node_interface::srv::SendSupplyProjectileAction_Request::_supply_robot_id_type arg)
  {
    msg_.supply_robot_id = std::move(arg);
    return Init_SendSupplyProjectileAction_Request_supply_projectile_step(msg_);
  }

private:
  ::node_interface::srv::SendSupplyProjectileAction_Request msg_;
};

class Init_SendSupplyProjectileAction_Request_supply_projectile_id
{
public:
  Init_SendSupplyProjectileAction_Request_supply_projectile_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendSupplyProjectileAction_Request_supply_robot_id supply_projectile_id(::node_interface::srv::SendSupplyProjectileAction_Request::_supply_projectile_id_type arg)
  {
    msg_.supply_projectile_id = std::move(arg);
    return Init_SendSupplyProjectileAction_Request_supply_robot_id(msg_);
  }

private:
  ::node_interface::srv::SendSupplyProjectileAction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendSupplyProjectileAction_Request>()
{
  return node_interface::srv::builder::Init_SendSupplyProjectileAction_Request_supply_projectile_id();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendSupplyProjectileAction_Response_result
{
public:
  Init_SendSupplyProjectileAction_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendSupplyProjectileAction_Response result(::node_interface::srv::SendSupplyProjectileAction_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendSupplyProjectileAction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendSupplyProjectileAction_Response>()
{
  return node_interface::srv::builder::Init_SendSupplyProjectileAction_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_SUPPLY_PROJECTILE_ACTION__BUILDER_HPP_
