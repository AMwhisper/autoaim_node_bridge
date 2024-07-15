// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/ClientCustomGraphicFive.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_FIVE__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_FIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/client_custom_graphic_five__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_ClientCustomGraphicFive_grapic_data_struct
{
public:
  explicit Init_ClientCustomGraphicFive_grapic_data_struct(::node_interface::msg::ClientCustomGraphicFive & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::ClientCustomGraphicFive grapic_data_struct(::node_interface::msg::ClientCustomGraphicFive::_grapic_data_struct_type arg)
  {
    msg_.grapic_data_struct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicFive msg_;
};

class Init_ClientCustomGraphicFive_receiver_id
{
public:
  explicit Init_ClientCustomGraphicFive_receiver_id(::node_interface::msg::ClientCustomGraphicFive & msg)
  : msg_(msg)
  {}
  Init_ClientCustomGraphicFive_grapic_data_struct receiver_id(::node_interface::msg::ClientCustomGraphicFive::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_ClientCustomGraphicFive_grapic_data_struct(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicFive msg_;
};

class Init_ClientCustomGraphicFive_send_id
{
public:
  explicit Init_ClientCustomGraphicFive_send_id(::node_interface::msg::ClientCustomGraphicFive & msg)
  : msg_(msg)
  {}
  Init_ClientCustomGraphicFive_receiver_id send_id(::node_interface::msg::ClientCustomGraphicFive::_send_id_type arg)
  {
    msg_.send_id = std::move(arg);
    return Init_ClientCustomGraphicFive_receiver_id(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicFive msg_;
};

class Init_ClientCustomGraphicFive_data_cmd_id
{
public:
  Init_ClientCustomGraphicFive_data_cmd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClientCustomGraphicFive_send_id data_cmd_id(::node_interface::msg::ClientCustomGraphicFive::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_ClientCustomGraphicFive_send_id(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicFive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::ClientCustomGraphicFive>()
{
  return node_interface::msg::builder::Init_ClientCustomGraphicFive_data_cmd_id();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_FIVE__BUILDER_HPP_
