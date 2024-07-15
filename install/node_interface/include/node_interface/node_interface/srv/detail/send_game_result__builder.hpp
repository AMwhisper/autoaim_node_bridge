// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendGameResult.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GAME_RESULT__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GAME_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_game_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGameResult_Request_winner
{
public:
  Init_SendGameResult_Request_winner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendGameResult_Request winner(::node_interface::srv::SendGameResult_Request::_winner_type arg)
  {
    msg_.winner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGameResult_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGameResult_Request>()
{
  return node_interface::srv::builder::Init_SendGameResult_Request_winner();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendGameResult_Response_result
{
public:
  Init_SendGameResult_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendGameResult_Response result(::node_interface::srv::SendGameResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendGameResult_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendGameResult_Response>()
{
  return node_interface::srv::builder::Init_SendGameResult_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GAME_RESULT__BUILDER_HPP_
