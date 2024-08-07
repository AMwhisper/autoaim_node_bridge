// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/BoardBeta.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BOARD_BETA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__BOARD_BETA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/board_beta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_BoardBeta_data4
{
public:
  explicit Init_BoardBeta_data4(::node_interface::msg::BoardBeta & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::BoardBeta data4(::node_interface::msg::BoardBeta::_data4_type arg)
  {
    msg_.data4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::BoardBeta msg_;
};

class Init_BoardBeta_data3
{
public:
  explicit Init_BoardBeta_data3(::node_interface::msg::BoardBeta & msg)
  : msg_(msg)
  {}
  Init_BoardBeta_data4 data3(::node_interface::msg::BoardBeta::_data3_type arg)
  {
    msg_.data3 = std::move(arg);
    return Init_BoardBeta_data4(msg_);
  }

private:
  ::node_interface::msg::BoardBeta msg_;
};

class Init_BoardBeta_data2
{
public:
  explicit Init_BoardBeta_data2(::node_interface::msg::BoardBeta & msg)
  : msg_(msg)
  {}
  Init_BoardBeta_data3 data2(::node_interface::msg::BoardBeta::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return Init_BoardBeta_data3(msg_);
  }

private:
  ::node_interface::msg::BoardBeta msg_;
};

class Init_BoardBeta_data1
{
public:
  Init_BoardBeta_data1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoardBeta_data2 data1(::node_interface::msg::BoardBeta::_data1_type arg)
  {
    msg_.data1 = std::move(arg);
    return Init_BoardBeta_data2(msg_);
  }

private:
  ::node_interface::msg::BoardBeta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::BoardBeta>()
{
  return node_interface::msg::builder::Init_BoardBeta_data1();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__BOARD_BETA__BUILDER_HPP_
