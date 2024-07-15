// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/bullet_remaining__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_BulletRemaining_coin_remaining_num
{
public:
  explicit Init_BulletRemaining_coin_remaining_num(::node_interface::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::BulletRemaining coin_remaining_num(::node_interface::msg::BulletRemaining::_coin_remaining_num_type arg)
  {
    msg_.coin_remaining_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_bullet_remaining_num_42mm
{
public:
  explicit Init_BulletRemaining_bullet_remaining_num_42mm(::node_interface::msg::BulletRemaining & msg)
  : msg_(msg)
  {}
  Init_BulletRemaining_coin_remaining_num bullet_remaining_num_42mm(::node_interface::msg::BulletRemaining::_bullet_remaining_num_42mm_type arg)
  {
    msg_.bullet_remaining_num_42mm = std::move(arg);
    return Init_BulletRemaining_coin_remaining_num(msg_);
  }

private:
  ::node_interface::msg::BulletRemaining msg_;
};

class Init_BulletRemaining_bullet_remaining_num_17mm
{
public:
  Init_BulletRemaining_bullet_remaining_num_17mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BulletRemaining_bullet_remaining_num_42mm bullet_remaining_num_17mm(::node_interface::msg::BulletRemaining::_bullet_remaining_num_17mm_type arg)
  {
    msg_.bullet_remaining_num_17mm = std::move(arg);
    return Init_BulletRemaining_bullet_remaining_num_42mm(msg_);
  }

private:
  ::node_interface::msg::BulletRemaining msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::BulletRemaining>()
{
  return node_interface::msg::builder::Init_BulletRemaining_bullet_remaining_num_17mm();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__BUILDER_HPP_
