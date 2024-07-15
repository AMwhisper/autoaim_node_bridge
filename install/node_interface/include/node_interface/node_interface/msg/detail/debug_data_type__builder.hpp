// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/DebugDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/debug_data_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_DebugDataType_debug8
{
public:
  explicit Init_DebugDataType_debug8(::node_interface::msg::DebugDataType & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::DebugDataType debug8(::node_interface::msg::DebugDataType::_debug8_type arg)
  {
    msg_.debug8 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

class Init_DebugDataType_debug7
{
public:
  explicit Init_DebugDataType_debug7(::node_interface::msg::DebugDataType & msg)
  : msg_(msg)
  {}
  Init_DebugDataType_debug8 debug7(::node_interface::msg::DebugDataType::_debug7_type arg)
  {
    msg_.debug7 = std::move(arg);
    return Init_DebugDataType_debug8(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

class Init_DebugDataType_debug6
{
public:
  explicit Init_DebugDataType_debug6(::node_interface::msg::DebugDataType & msg)
  : msg_(msg)
  {}
  Init_DebugDataType_debug7 debug6(::node_interface::msg::DebugDataType::_debug6_type arg)
  {
    msg_.debug6 = std::move(arg);
    return Init_DebugDataType_debug7(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

class Init_DebugDataType_debug5
{
public:
  explicit Init_DebugDataType_debug5(::node_interface::msg::DebugDataType & msg)
  : msg_(msg)
  {}
  Init_DebugDataType_debug6 debug5(::node_interface::msg::DebugDataType::_debug5_type arg)
  {
    msg_.debug5 = std::move(arg);
    return Init_DebugDataType_debug6(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

class Init_DebugDataType_debug4
{
public:
  explicit Init_DebugDataType_debug4(::node_interface::msg::DebugDataType & msg)
  : msg_(msg)
  {}
  Init_DebugDataType_debug5 debug4(::node_interface::msg::DebugDataType::_debug4_type arg)
  {
    msg_.debug4 = std::move(arg);
    return Init_DebugDataType_debug5(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

class Init_DebugDataType_debug3
{
public:
  explicit Init_DebugDataType_debug3(::node_interface::msg::DebugDataType & msg)
  : msg_(msg)
  {}
  Init_DebugDataType_debug4 debug3(::node_interface::msg::DebugDataType::_debug3_type arg)
  {
    msg_.debug3 = std::move(arg);
    return Init_DebugDataType_debug4(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

class Init_DebugDataType_debug2
{
public:
  explicit Init_DebugDataType_debug2(::node_interface::msg::DebugDataType & msg)
  : msg_(msg)
  {}
  Init_DebugDataType_debug3 debug2(::node_interface::msg::DebugDataType::_debug2_type arg)
  {
    msg_.debug2 = std::move(arg);
    return Init_DebugDataType_debug3(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

class Init_DebugDataType_debug1
{
public:
  Init_DebugDataType_debug1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugDataType_debug2 debug1(::node_interface::msg::DebugDataType::_debug1_type arg)
  {
    msg_.debug1 = std::move(arg);
    return Init_DebugDataType_debug2(msg_);
  }

private:
  ::node_interface::msg::DebugDataType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::DebugDataType>()
{
  return node_interface::msg::builder::Init_DebugDataType_debug1();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__BUILDER_HPP_
