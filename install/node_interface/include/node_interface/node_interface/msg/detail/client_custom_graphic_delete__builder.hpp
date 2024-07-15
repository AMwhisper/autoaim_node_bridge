// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/ClientCustomGraphicDelete.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/client_custom_graphic_delete__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_ClientCustomGraphicDelete_layer
{
public:
  explicit Init_ClientCustomGraphicDelete_layer(::node_interface::msg::ClientCustomGraphicDelete & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::ClientCustomGraphicDelete layer(::node_interface::msg::ClientCustomGraphicDelete::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicDelete msg_;
};

class Init_ClientCustomGraphicDelete_operate_tpye
{
public:
  explicit Init_ClientCustomGraphicDelete_operate_tpye(::node_interface::msg::ClientCustomGraphicDelete & msg)
  : msg_(msg)
  {}
  Init_ClientCustomGraphicDelete_layer operate_tpye(::node_interface::msg::ClientCustomGraphicDelete::_operate_tpye_type arg)
  {
    msg_.operate_tpye = std::move(arg);
    return Init_ClientCustomGraphicDelete_layer(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicDelete msg_;
};

class Init_ClientCustomGraphicDelete_receiver_id
{
public:
  explicit Init_ClientCustomGraphicDelete_receiver_id(::node_interface::msg::ClientCustomGraphicDelete & msg)
  : msg_(msg)
  {}
  Init_ClientCustomGraphicDelete_operate_tpye receiver_id(::node_interface::msg::ClientCustomGraphicDelete::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_ClientCustomGraphicDelete_operate_tpye(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicDelete msg_;
};

class Init_ClientCustomGraphicDelete_send_id
{
public:
  explicit Init_ClientCustomGraphicDelete_send_id(::node_interface::msg::ClientCustomGraphicDelete & msg)
  : msg_(msg)
  {}
  Init_ClientCustomGraphicDelete_receiver_id send_id(::node_interface::msg::ClientCustomGraphicDelete::_send_id_type arg)
  {
    msg_.send_id = std::move(arg);
    return Init_ClientCustomGraphicDelete_receiver_id(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicDelete msg_;
};

class Init_ClientCustomGraphicDelete_data_cmd_id
{
public:
  Init_ClientCustomGraphicDelete_data_cmd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClientCustomGraphicDelete_send_id data_cmd_id(::node_interface::msg::ClientCustomGraphicDelete::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_ClientCustomGraphicDelete_send_id(msg_);
  }

private:
  ::node_interface::msg::ClientCustomGraphicDelete msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::ClientCustomGraphicDelete>()
{
  return node_interface::msg::builder::Init_ClientCustomGraphicDelete_data_cmd_id();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__BUILDER_HPP_
