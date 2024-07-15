// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/game_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_GameStatus_sync_time_stamp
{
public:
  explicit Init_GameStatus_sync_time_stamp(::node_interface::msg::GameStatus & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::GameStatus sync_time_stamp(::node_interface::msg::GameStatus::_sync_time_stamp_type arg)
  {
    msg_.sync_time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::GameStatus msg_;
};

class Init_GameStatus_stage_remain_time
{
public:
  explicit Init_GameStatus_stage_remain_time(::node_interface::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_sync_time_stamp stage_remain_time(::node_interface::msg::GameStatus::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_GameStatus_sync_time_stamp(msg_);
  }

private:
  ::node_interface::msg::GameStatus msg_;
};

class Init_GameStatus_game_progress
{
public:
  explicit Init_GameStatus_game_progress(::node_interface::msg::GameStatus & msg)
  : msg_(msg)
  {}
  Init_GameStatus_stage_remain_time game_progress(::node_interface::msg::GameStatus::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_GameStatus_stage_remain_time(msg_);
  }

private:
  ::node_interface::msg::GameStatus msg_;
};

class Init_GameStatus_game_type
{
public:
  Init_GameStatus_game_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GameStatus_game_progress game_type(::node_interface::msg::GameStatus::_game_type_type arg)
  {
    msg_.game_type = std::move(arg);
    return Init_GameStatus_game_progress(msg_);
  }

private:
  ::node_interface::msg::GameStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::GameStatus>()
{
  return node_interface::msg::builder::Init_GameStatus_game_type();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_STATUS__BUILDER_HPP_
