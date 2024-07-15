// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendClientCustomGraphicDelete.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DELETE__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DELETE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_client_custom_graphic_delete__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendClientCustomGraphicDelete_Request_layer
{
public:
  explicit Init_SendClientCustomGraphicDelete_Request_layer(::node_interface::srv::SendClientCustomGraphicDelete_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendClientCustomGraphicDelete_Request layer(::node_interface::srv::SendClientCustomGraphicDelete_Request::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicDelete_Request msg_;
};

class Init_SendClientCustomGraphicDelete_Request_operate_tpye
{
public:
  explicit Init_SendClientCustomGraphicDelete_Request_operate_tpye(::node_interface::srv::SendClientCustomGraphicDelete_Request & msg)
  : msg_(msg)
  {}
  Init_SendClientCustomGraphicDelete_Request_layer operate_tpye(::node_interface::srv::SendClientCustomGraphicDelete_Request::_operate_tpye_type arg)
  {
    msg_.operate_tpye = std::move(arg);
    return Init_SendClientCustomGraphicDelete_Request_layer(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicDelete_Request msg_;
};

class Init_SendClientCustomGraphicDelete_Request_receiver_id
{
public:
  explicit Init_SendClientCustomGraphicDelete_Request_receiver_id(::node_interface::srv::SendClientCustomGraphicDelete_Request & msg)
  : msg_(msg)
  {}
  Init_SendClientCustomGraphicDelete_Request_operate_tpye receiver_id(::node_interface::srv::SendClientCustomGraphicDelete_Request::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_SendClientCustomGraphicDelete_Request_operate_tpye(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicDelete_Request msg_;
};

class Init_SendClientCustomGraphicDelete_Request_send_id
{
public:
  explicit Init_SendClientCustomGraphicDelete_Request_send_id(::node_interface::srv::SendClientCustomGraphicDelete_Request & msg)
  : msg_(msg)
  {}
  Init_SendClientCustomGraphicDelete_Request_receiver_id send_id(::node_interface::srv::SendClientCustomGraphicDelete_Request::_send_id_type arg)
  {
    msg_.send_id = std::move(arg);
    return Init_SendClientCustomGraphicDelete_Request_receiver_id(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicDelete_Request msg_;
};

class Init_SendClientCustomGraphicDelete_Request_data_cmd_id
{
public:
  Init_SendClientCustomGraphicDelete_Request_data_cmd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendClientCustomGraphicDelete_Request_send_id data_cmd_id(::node_interface::srv::SendClientCustomGraphicDelete_Request::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_SendClientCustomGraphicDelete_Request_send_id(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicDelete_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendClientCustomGraphicDelete_Request>()
{
  return node_interface::srv::builder::Init_SendClientCustomGraphicDelete_Request_data_cmd_id();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendClientCustomGraphicDelete_Response_result
{
public:
  Init_SendClientCustomGraphicDelete_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendClientCustomGraphicDelete_Response result(::node_interface::srv::SendClientCustomGraphicDelete_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicDelete_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendClientCustomGraphicDelete_Response>()
{
  return node_interface::srv::builder::Init_SendClientCustomGraphicDelete_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_DELETE__BUILDER_HPP_
