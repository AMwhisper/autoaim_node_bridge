// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/IcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/icra_buff_debuff_zone_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_IcraBuffDebuffZoneStatus_blue2_bullet_left
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_blue2_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::IcraBuffDebuffZoneStatus blue2_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus::_blue2_bullet_left_type arg)
  {
    msg_.blue2_bullet_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_blue1_bullet_left
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_blue1_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_blue2_bullet_left blue1_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus::_blue1_bullet_left_type arg)
  {
    msg_.blue1_bullet_left = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_blue2_bullet_left(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_red2_bullet_left
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_red2_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_blue1_bullet_left red2_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus::_red2_bullet_left_type arg)
  {
    msg_.red2_bullet_left = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_blue1_bullet_left(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_red1_bullet_left
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_red1_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_red2_bullet_left red1_bullet_left(::node_interface::msg::IcraBuffDebuffZoneStatus::_red1_bullet_left_type arg)
  {
    msg_.red1_bullet_left = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_red2_bullet_left(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f6_zone_buff_debuff_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f6_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_red1_bullet_left f6_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f6_zone_buff_debuff_status_type arg)
  {
    msg_.f6_zone_buff_debuff_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_red1_bullet_left(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f6_zone_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f6_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f6_zone_buff_debuff_status f6_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f6_zone_status_type arg)
  {
    msg_.f6_zone_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f6_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f5_zone_buff_debuff_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f5_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f6_zone_status f5_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f5_zone_buff_debuff_status_type arg)
  {
    msg_.f5_zone_buff_debuff_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f6_zone_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f5_zone_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f5_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f5_zone_buff_debuff_status f5_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f5_zone_status_type arg)
  {
    msg_.f5_zone_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f5_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f4_zone_buff_debuff_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f4_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f5_zone_status f4_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f4_zone_buff_debuff_status_type arg)
  {
    msg_.f4_zone_buff_debuff_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f5_zone_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f4_zone_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f4_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f4_zone_buff_debuff_status f4_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f4_zone_status_type arg)
  {
    msg_.f4_zone_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f4_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f3_zone_buff_debuff_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f3_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f4_zone_status f3_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f3_zone_buff_debuff_status_type arg)
  {
    msg_.f3_zone_buff_debuff_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f4_zone_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f3_zone_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f3_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f3_zone_buff_debuff_status f3_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f3_zone_status_type arg)
  {
    msg_.f3_zone_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f3_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f2_zone_buff_debuff_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f2_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f3_zone_status f2_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f2_zone_buff_debuff_status_type arg)
  {
    msg_.f2_zone_buff_debuff_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f3_zone_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f2_zone_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f2_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f2_zone_buff_debuff_status f2_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f2_zone_status_type arg)
  {
    msg_.f2_zone_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f2_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f1_zone_buff_debuff_status
{
public:
  explicit Init_IcraBuffDebuffZoneStatus_f1_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus & msg)
  : msg_(msg)
  {}
  Init_IcraBuffDebuffZoneStatus_f2_zone_status f1_zone_buff_debuff_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f1_zone_buff_debuff_status_type arg)
  {
    msg_.f1_zone_buff_debuff_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f2_zone_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

class Init_IcraBuffDebuffZoneStatus_f1_zone_status
{
public:
  Init_IcraBuffDebuffZoneStatus_f1_zone_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IcraBuffDebuffZoneStatus_f1_zone_buff_debuff_status f1_zone_status(::node_interface::msg::IcraBuffDebuffZoneStatus::_f1_zone_status_type arg)
  {
    msg_.f1_zone_status = std::move(arg);
    return Init_IcraBuffDebuffZoneStatus_f1_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::msg::IcraBuffDebuffZoneStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::IcraBuffDebuffZoneStatus>()
{
  return node_interface::msg::builder::Init_IcraBuffDebuffZoneStatus_f1_zone_status();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_STATUS__BUILDER_HPP_