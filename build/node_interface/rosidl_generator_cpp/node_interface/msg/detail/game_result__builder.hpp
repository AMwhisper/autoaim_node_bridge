// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/game_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_GameResult_winner
{
public:
  Init_GameResult_winner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::GameResult winner(::node_interface::msg::GameResult::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::GameResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::GameResult>()
{
  return node_interface::msg::builder::Init_GameResult_winner();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_RESULT__BUILDER_HPP_
