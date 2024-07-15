// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:srv/SendPowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_POWER_HEAT_DATA__BUILDER_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_POWER_HEAT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/srv/detail/send_power_heat_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendPowerHeatData_Request_shooter_id1_42mm_cooling_heat
{
public:
  explicit Init_SendPowerHeatData_Request_shooter_id1_42mm_cooling_heat(::node_interface::srv::SendPowerHeatData_Request & msg)
  : msg_(msg)
  {}
  ::node_interface::srv::SendPowerHeatData_Request shooter_id1_42mm_cooling_heat(::node_interface::srv::SendPowerHeatData_Request::_shooter_id1_42mm_cooling_heat_type arg)
  {
    msg_.shooter_id1_42mm_cooling_heat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Request msg_;
};

class Init_SendPowerHeatData_Request_shooter_id2_17mm_cooling_heat
{
public:
  explicit Init_SendPowerHeatData_Request_shooter_id2_17mm_cooling_heat(::node_interface::srv::SendPowerHeatData_Request & msg)
  : msg_(msg)
  {}
  Init_SendPowerHeatData_Request_shooter_id1_42mm_cooling_heat shooter_id2_17mm_cooling_heat(::node_interface::srv::SendPowerHeatData_Request::_shooter_id2_17mm_cooling_heat_type arg)
  {
    msg_.shooter_id2_17mm_cooling_heat = std::move(arg);
    return Init_SendPowerHeatData_Request_shooter_id1_42mm_cooling_heat(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Request msg_;
};

class Init_SendPowerHeatData_Request_shooter_id1_17mm_cooling_heat
{
public:
  explicit Init_SendPowerHeatData_Request_shooter_id1_17mm_cooling_heat(::node_interface::srv::SendPowerHeatData_Request & msg)
  : msg_(msg)
  {}
  Init_SendPowerHeatData_Request_shooter_id2_17mm_cooling_heat shooter_id1_17mm_cooling_heat(::node_interface::srv::SendPowerHeatData_Request::_shooter_id1_17mm_cooling_heat_type arg)
  {
    msg_.shooter_id1_17mm_cooling_heat = std::move(arg);
    return Init_SendPowerHeatData_Request_shooter_id2_17mm_cooling_heat(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Request msg_;
};

class Init_SendPowerHeatData_Request_chassis_power_buffer
{
public:
  explicit Init_SendPowerHeatData_Request_chassis_power_buffer(::node_interface::srv::SendPowerHeatData_Request & msg)
  : msg_(msg)
  {}
  Init_SendPowerHeatData_Request_shooter_id1_17mm_cooling_heat chassis_power_buffer(::node_interface::srv::SendPowerHeatData_Request::_chassis_power_buffer_type arg)
  {
    msg_.chassis_power_buffer = std::move(arg);
    return Init_SendPowerHeatData_Request_shooter_id1_17mm_cooling_heat(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Request msg_;
};

class Init_SendPowerHeatData_Request_chassis_power
{
public:
  explicit Init_SendPowerHeatData_Request_chassis_power(::node_interface::srv::SendPowerHeatData_Request & msg)
  : msg_(msg)
  {}
  Init_SendPowerHeatData_Request_chassis_power_buffer chassis_power(::node_interface::srv::SendPowerHeatData_Request::_chassis_power_type arg)
  {
    msg_.chassis_power = std::move(arg);
    return Init_SendPowerHeatData_Request_chassis_power_buffer(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Request msg_;
};

class Init_SendPowerHeatData_Request_chassis_current
{
public:
  explicit Init_SendPowerHeatData_Request_chassis_current(::node_interface::srv::SendPowerHeatData_Request & msg)
  : msg_(msg)
  {}
  Init_SendPowerHeatData_Request_chassis_power chassis_current(::node_interface::srv::SendPowerHeatData_Request::_chassis_current_type arg)
  {
    msg_.chassis_current = std::move(arg);
    return Init_SendPowerHeatData_Request_chassis_power(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Request msg_;
};

class Init_SendPowerHeatData_Request_chassis_volt
{
public:
  Init_SendPowerHeatData_Request_chassis_volt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendPowerHeatData_Request_chassis_current chassis_volt(::node_interface::srv::SendPowerHeatData_Request::_chassis_volt_type arg)
  {
    msg_.chassis_volt = std::move(arg);
    return Init_SendPowerHeatData_Request_chassis_current(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendPowerHeatData_Request>()
{
  return node_interface::srv::builder::Init_SendPowerHeatData_Request_chassis_volt();
}

}  // namespace node_interface


namespace node_interface
{

namespace srv
{

namespace builder
{

class Init_SendPowerHeatData_Response_result
{
public:
  Init_SendPowerHeatData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::node_interface::srv::SendPowerHeatData_Response result(::node_interface::srv::SendPowerHeatData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::srv::SendPowerHeatData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::srv::SendPowerHeatData_Response>()
{
  return node_interface::srv::builder::Init_SendPowerHeatData_Response_result();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_POWER_HEAT_DATA__BUILDER_HPP_
