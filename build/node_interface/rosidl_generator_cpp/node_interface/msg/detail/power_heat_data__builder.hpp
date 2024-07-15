// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/power_heat_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_PowerHeatData_shooter_id1_42mm_cooling_heat
{
public:
  explicit Init_PowerHeatData_shooter_id1_42mm_cooling_heat(::node_interface::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::PowerHeatData shooter_id1_42mm_cooling_heat(::node_interface::msg::PowerHeatData::_shooter_id1_42mm_cooling_heat_type arg)
  {
    msg_.shooter_id1_42mm_cooling_heat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_shooter_id2_17mm_cooling_heat
{
public:
  explicit Init_PowerHeatData_shooter_id2_17mm_cooling_heat(::node_interface::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_id1_42mm_cooling_heat shooter_id2_17mm_cooling_heat(::node_interface::msg::PowerHeatData::_shooter_id2_17mm_cooling_heat_type arg)
  {
    msg_.shooter_id2_17mm_cooling_heat = std::move(arg);
    return Init_PowerHeatData_shooter_id1_42mm_cooling_heat(msg_);
  }

private:
  ::node_interface::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_shooter_id1_17mm_cooling_heat
{
public:
  explicit Init_PowerHeatData_shooter_id1_17mm_cooling_heat(::node_interface::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_id2_17mm_cooling_heat shooter_id1_17mm_cooling_heat(::node_interface::msg::PowerHeatData::_shooter_id1_17mm_cooling_heat_type arg)
  {
    msg_.shooter_id1_17mm_cooling_heat = std::move(arg);
    return Init_PowerHeatData_shooter_id2_17mm_cooling_heat(msg_);
  }

private:
  ::node_interface::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_chassis_power_buffer
{
public:
  explicit Init_PowerHeatData_chassis_power_buffer(::node_interface::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_shooter_id1_17mm_cooling_heat chassis_power_buffer(::node_interface::msg::PowerHeatData::_chassis_power_buffer_type arg)
  {
    msg_.chassis_power_buffer = std::move(arg);
    return Init_PowerHeatData_shooter_id1_17mm_cooling_heat(msg_);
  }

private:
  ::node_interface::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_chassis_power
{
public:
  explicit Init_PowerHeatData_chassis_power(::node_interface::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_chassis_power_buffer chassis_power(::node_interface::msg::PowerHeatData::_chassis_power_type arg)
  {
    msg_.chassis_power = std::move(arg);
    return Init_PowerHeatData_chassis_power_buffer(msg_);
  }

private:
  ::node_interface::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_chassis_current
{
public:
  explicit Init_PowerHeatData_chassis_current(::node_interface::msg::PowerHeatData & msg)
  : msg_(msg)
  {}
  Init_PowerHeatData_chassis_power chassis_current(::node_interface::msg::PowerHeatData::_chassis_current_type arg)
  {
    msg_.chassis_current = std::move(arg);
    return Init_PowerHeatData_chassis_power(msg_);
  }

private:
  ::node_interface::msg::PowerHeatData msg_;
};

class Init_PowerHeatData_chassis_volt
{
public:
  Init_PowerHeatData_chassis_volt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerHeatData_chassis_current chassis_volt(::node_interface::msg::PowerHeatData::_chassis_volt_type arg)
  {
    msg_.chassis_volt = std::move(arg);
    return Init_PowerHeatData_chassis_current(msg_);
  }

private:
  ::node_interface::msg::PowerHeatData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::PowerHeatData>()
{
  return node_interface::msg::builder::Init_PowerHeatData_chassis_volt();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__POWER_HEAT_DATA__BUILDER_HPP_
