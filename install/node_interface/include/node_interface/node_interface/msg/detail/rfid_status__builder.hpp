// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/RfidStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/rfid_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_RfidStatus_rfid_status
{
public:
  Init_RfidStatus_rfid_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::msg::RfidStatus rfid_status(::node_interface::msg::RfidStatus::_rfid_status_type arg)
  {
    msg_.rfid_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::RfidStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::RfidStatus>()
{
  return node_interface::msg::builder::Init_RfidStatus_rfid_status();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__RFID_STATUS__BUILDER_HPP_
