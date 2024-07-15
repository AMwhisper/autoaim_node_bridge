// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendClientCustomGraphicFive.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_FIVE__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_FIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_client_custom_graphic_five__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendClientCustomGraphicFive_Request_grapic_data_struct
{
public:
  explicit Init_SendClientCustomGraphicFive_Request_grapic_data_struct(::node_interface::srv::SendClientCustomGraphicFive_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendClientCustomGraphicFive_Request grapic_data_struct(::node_interface::srv::SendClientCustomGraphicFive_Request::_grapic_data_struct_type arg)
  {
    msg_.grapic_data_struct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicFive_Request msg_;
};

class Init_SendClientCustomGraphicFive_Request_receiver_id
{
public:
  explicit Init_SendClientCustomGraphicFive_Request_receiver_id(::node_interface::srv::SendClientCustomGraphicFive_Request & msg)
  : msg_(msg)
  {}
  Init_SendClientCustomGraphicFive_Request_grapic_data_struct receiver_id(::node_interface::srv::SendClientCustomGraphicFive_Request::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_SendClientCustomGraphicFive_Request_grapic_data_struct(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicFive_Request msg_;
};

class Init_SendClientCustomGraphicFive_Request_send_id
{
public:
  explicit Init_SendClientCustomGraphicFive_Request_send_id(::node_interface::srv::SendClientCustomGraphicFive_Request & msg)
  : msg_(msg)
  {}
  Init_SendClientCustomGraphicFive_Request_receiver_id send_id(::node_interface::srv::SendClientCustomGraphicFive_Request::_send_id_type arg)
  {
    msg_.send_id = std::move(arg);
    return Init_SendClientCustomGraphicFive_Request_receiver_id(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicFive_Request msg_;
};

class Init_SendClientCustomGraphicFive_Request_data_cmd_id
{
public:
  Init_SendClientCustomGraphicFive_Request_data_cmd_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendClientCustomGraphicFive_Request_send_id data_cmd_id(::node_interface::srv::SendClientCustomGraphicFive_Request::_data_cmd_id_type arg)
  {
    msg_.data_cmd_id = std::move(arg);
    return Init_SendClientCustomGraphicFive_Request_send_id(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicFive_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendClientCustomGraphicFive_Request>()
{
  return node_interface::srv::builder::Init_SendClientCustomGraphicFive_Request_data_cmd_id();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendClientCustomGraphicFive_Response_result
{
public:
  Init_SendClientCustomGraphicFive_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendClientCustomGraphicFive_Response result(::node_interface::srv::SendClientCustomGraphicFive_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendClientCustomGraphicFive_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendClientCustomGraphicFive_Response>()
{
  return node_interface::srv::builder::Init_SendClientCustomGraphicFive_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_FIVE__BUILDER_HPP_
