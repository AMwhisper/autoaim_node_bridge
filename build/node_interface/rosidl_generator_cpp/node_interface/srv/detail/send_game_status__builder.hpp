// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendGameStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GAME_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GAME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_game_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGameStatus_Request_sync_time_stamp
{
public:
  explicit Init_SendGameStatus_Request_sync_time_stamp(::node_interface::srv::SendGameStatus_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendGameStatus_Request sync_time_stamp(::node_interface::srv::SendGameStatus_Request::_sync_time_stamp_type arg)
  {
    msg_.sync_time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGameStatus_Request msg_;
};

class Init_SendGameStatus_Request_stage_remain_time
{
public:
  explicit Init_SendGameStatus_Request_stage_remain_time(::node_interface::srv::SendGameStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendGameStatus_Request_sync_time_stamp stage_remain_time(::node_interface::srv::SendGameStatus_Request::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_SendGameStatus_Request_sync_time_stamp(msg_);
  }

private:
  ::node_interface::srv::SendGameStatus_Request msg_;
};

class Init_SendGameStatus_Request_game_progress
{
public:
  explicit Init_SendGameStatus_Request_game_progress(::node_interface::srv::SendGameStatus_Request & msg)
  : msg_(msg)
  {}
  Init_SendGameStatus_Request_stage_remain_time game_progress(::node_interface::srv::SendGameStatus_Request::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_SendGameStatus_Request_stage_remain_time(msg_);
  }

private:
  ::node_interface::srv::SendGameStatus_Request msg_;
};

class Init_SendGameStatus_Request_game_type
{
public:
  Init_SendGameStatus_Request_game_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendGameStatus_Request_game_progress game_type(::node_interface::srv::SendGameStatus_Request::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_SendGameStatus_Request_game_progress(msg_);
  }

private:
  ::node_interface::srv::SendGameStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGameStatus_Request>()
{
  return node_interface::srv::builder::Init_SendGameStatus_Request_game_type();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGameStatus_Response_result
{
public:
  Init_SendGameStatus_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendGameStatus_Response result(::node_interface::srv::SendGameStatus_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGameStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGameStatus_Response>()
{
  return node_interface::srv::builder::Init_SendGameStatus_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GAME_STATUS__BUILDER_HPP_
