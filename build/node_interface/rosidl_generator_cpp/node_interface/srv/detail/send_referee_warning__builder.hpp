// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendRefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_REFEREE_WARNING__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_REFEREE_WARNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_referee_warning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendRefereeWarning_Request_foul_robot_id
{
public:
  explicit Init_SendRefereeWarning_Request_foul_robot_id(::node_interface::srv::SendRefereeWarning_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendRefereeWarning_Request foul_robot_id(::node_interface::srv::SendRefereeWarning_Request::_foul_robot_id_type arg)
  {
    msg_.foul_robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendRefereeWarning_Request msg_;
};

class Init_SendRefereeWarning_Request_level
{
public:
  Init_SendRefereeWarning_Request_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendRefereeWarning_Request_foul_robot_id level(::node_interface::srv::SendRefereeWarning_Request::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_SendRefereeWarning_Request_foul_robot_id(msg_);
  }

private:
  ::node_interface::srv::SendRefereeWarning_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendRefereeWarning_Request>()
{
  return node_interface::srv::builder::Init_SendRefereeWarning_Request_level();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendRefereeWarning_Response_result
{
public:
  Init_SendRefereeWarning_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendRefereeWarning_Response result(::node_interface::srv::SendRefereeWarning_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendRefereeWarning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendRefereeWarning_Response>()
{
  return node_interface::srv::builder::Init_SendRefereeWarning_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_REFEREE_WARNING__BUILDER_HPP_
