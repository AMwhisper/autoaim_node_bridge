// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendIcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendIcraBuffDebuffZoneStatus_Request_blue2_bullet_left
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_blue2_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request blue2_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_blue2_bullet_left_type arg)
  {
    msg_.blue2_bullet_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_blue1_bullet_left
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_blue1_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_blue2_bullet_left blue1_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_blue1_bullet_left_type arg)
  {
    msg_.blue1_bullet_left = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_blue2_bullet_left(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_red2_bullet_left
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_red2_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_blue1_bullet_left red2_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_red2_bullet_left_type arg)
  {
    msg_.red2_bullet_left = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_blue1_bullet_left(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_red1_bullet_left
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_red1_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_red2_bullet_left red1_bullet_left(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_red1_bullet_left_type arg)
  {
    msg_.red1_bullet_left = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_red2_bullet_left(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_buff_debuff_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_red1_bullet_left f6_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f6_zone_buff_debuff_status_type arg)
  {
    msg_.f6_zone_buff_debuff_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_red1_bullet_left(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_buff_debuff_status f6_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f6_zone_status_type arg)
  {
    msg_.f6_zone_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_buff_debuff_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_status f5_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f5_zone_buff_debuff_status_type arg)
  {
    msg_.f5_zone_buff_debuff_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f6_zone_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_buff_debuff_status f5_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f5_zone_status_type arg)
  {
    msg_.f5_zone_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_buff_debuff_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_status f4_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f4_zone_buff_debuff_status_type arg)
  {
    msg_.f4_zone_buff_debuff_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f5_zone_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_buff_debuff_status f4_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f4_zone_status_type arg)
  {
    msg_.f4_zone_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_buff_debuff_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_status f3_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f3_zone_buff_debuff_status_type arg)
  {
    msg_.f3_zone_buff_debuff_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f4_zone_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_buff_debuff_status f3_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f3_zone_status_type arg)
  {
    msg_.f3_zone_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_buff_debuff_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_status f2_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f2_zone_buff_debuff_status_type arg)
  {
    msg_.f2_zone_buff_debuff_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f3_zone_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_buff_debuff_status f2_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f2_zone_status_type arg)
  {
    msg_.f2_zone_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f1_zone_buff_debuff_status
{
public:
  explicit Init_SendIcraBuffDebuffZoneStatus_Request_f1_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_status f1_zone_buff_debuff_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f1_zone_buff_debuff_status_type arg)
  {
    msg_.f1_zone_buff_debuff_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f2_zone_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

class Init_SendIcraBuffDebuffZoneStatus_Request_f1_zone_status
{
public:
  Init_SendIcraBuffDebuffZoneStatus_Request_f1_zone_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendIcraBuffDebuffZoneStatus_Request_f1_zone_buff_debuff_status f1_zone_status(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request::_f1_zone_status_type arg)
  {
    msg_.f1_zone_status = std::move(arg);
    return Init_SendIcraBuffDebuffZoneStatus_Request_f1_zone_buff_debuff_status(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendIcraBuffDebuffZoneStatus_Request>()
{
  return node_interface::srv::builder::Init_SendIcraBuffDebuffZoneStatus_Request_f1_zone_status();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendIcraBuffDebuffZoneStatus_Response_result
{
public:
  Init_SendIcraBuffDebuffZoneStatus_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Response result(::node_interface::srv::SendIcraBuffDebuffZoneStatus_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendIcraBuffDebuffZoneStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendIcraBuffDebuffZoneStatus_Response>()
{
  return node_interface::srv::builder::Init_SendIcraBuffDebuffZoneStatus_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__BUILDER_HPP_
