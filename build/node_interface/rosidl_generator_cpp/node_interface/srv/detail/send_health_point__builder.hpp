// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendHealthPoint.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_health_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendHealthPoint_Request_blue_base_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_base_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendHealthPoint_Request blue_base_hp(::node_interface::srv::SendHealthPoint_Request::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_blue_outpost_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_outpost_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_base_hp blue_outpost_hp(::node_interface::srv::SendHealthPoint_Request::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_base_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_blue_7_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_7_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_outpost_hp blue_7_robot_hp(::node_interface::srv::SendHealthPoint_Request::_blue_7_robot_hp_type arg)
  {
    msg_.blue_7_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_outpost_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_blue_5_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_5_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_7_robot_hp blue_5_robot_hp(::node_interface::srv::SendHealthPoint_Request::_blue_5_robot_hp_type arg)
  {
    msg_.blue_5_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_7_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_blue_4_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_4_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_5_robot_hp blue_4_robot_hp(::node_interface::srv::SendHealthPoint_Request::_blue_4_robot_hp_type arg)
  {
    msg_.blue_4_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_5_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_blue_3_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_3_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_4_robot_hp blue_3_robot_hp(::node_interface::srv::SendHealthPoint_Request::_blue_3_robot_hp_type arg)
  {
    msg_.blue_3_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_4_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_blue_2_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_2_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_3_robot_hp blue_2_robot_hp(::node_interface::srv::SendHealthPoint_Request::_blue_2_robot_hp_type arg)
  {
    msg_.blue_2_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_3_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_blue_1_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_blue_1_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_2_robot_hp blue_1_robot_hp(::node_interface::srv::SendHealthPoint_Request::_blue_1_robot_hp_type arg)
  {
    msg_.blue_1_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_2_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_base_hp
{
public:
  explicit Init_SendHealthPoint_Request_red_base_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_blue_1_robot_hp red_base_hp(::node_interface::srv::SendHealthPoint_Request::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_SendHealthPoint_Request_blue_1_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_outpost_hp
{
public:
  explicit Init_SendHealthPoint_Request_red_outpost_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_red_base_hp red_outpost_hp(::node_interface::srv::SendHealthPoint_Request::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_SendHealthPoint_Request_red_base_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_7_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_red_7_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_red_outpost_hp red_7_robot_hp(::node_interface::srv::SendHealthPoint_Request::_red_7_robot_hp_type arg)
  {
    msg_.red_7_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_red_outpost_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_5_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_red_5_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_red_7_robot_hp red_5_robot_hp(::node_interface::srv::SendHealthPoint_Request::_red_5_robot_hp_type arg)
  {
    msg_.red_5_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_red_7_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_4_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_red_4_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_red_5_robot_hp red_4_robot_hp(::node_interface::srv::SendHealthPoint_Request::_red_4_robot_hp_type arg)
  {
    msg_.red_4_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_red_5_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_3_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_red_3_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_red_4_robot_hp red_3_robot_hp(::node_interface::srv::SendHealthPoint_Request::_red_3_robot_hp_type arg)
  {
    msg_.red_3_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_red_4_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_2_robot_hp
{
public:
  explicit Init_SendHealthPoint_Request_red_2_robot_hp(::node_interface::srv::SendHealthPoint_Request & msg)
  : msg_(msg)
  {}
  Init_SendHealthPoint_Request_red_3_robot_hp red_2_robot_hp(::node_interface::srv::SendHealthPoint_Request::_red_2_robot_hp_type arg)
  {
    msg_.red_2_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_red_3_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

class Init_SendHealthPoint_Request_red_1_robot_hp
{
public:
  Init_SendHealthPoint_Request_red_1_robot_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendHealthPoint_Request_red_2_robot_hp red_1_robot_hp(::node_interface::srv::SendHealthPoint_Request::_red_1_robot_hp_type arg)
  {
    msg_.red_1_robot_hp = std::move(arg);
    return Init_SendHealthPoint_Request_red_2_robot_hp(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendHealthPoint_Request>()
{
  return node_interface::srv::builder::Init_SendHealthPoint_Request_red_1_robot_hp();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendHealthPoint_Response_result
{
public:
  Init_SendHealthPoint_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendHealthPoint_Response result(::node_interface::srv::SendHealthPoint_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendHealthPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendHealthPoint_Response>()
{
  return node_interface::srv::builder::Init_SendHealthPoint_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__BUILDER_HPP_
