// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from node_interface:msg/GraphicDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__BUILDER_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "node_interface/msg/detail/graphic_data_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace node_interface
{

namespace msg
{

namespace builder
{

class Init_GraphicDataType_end_y
{
public:
  explicit Init_GraphicDataType_end_y(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  ::node_interface::msg::GraphicDataType end_y(::node_interface::msg::GraphicDataType::_end_y_type arg)
  {
    msg_.end_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_end_x
{
public:
  explicit Init_GraphicDataType_end_x(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_end_y end_x(::node_interface::msg::GraphicDataType::_end_x_type arg)
  {
    msg_.end_x = std::move(arg);
    return Init_GraphicDataType_end_y(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_radius
{
public:
  explicit Init_GraphicDataType_radius(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_end_x radius(::node_interface::msg::GraphicDataType::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_GraphicDataType_end_x(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_start_y
{
public:
  explicit Init_GraphicDataType_start_y(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_radius start_y(::node_interface::msg::GraphicDataType::_start_y_type arg)
  {
    msg_.start_y = std::move(arg);
    return Init_GraphicDataType_radius(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_start_x
{
public:
  explicit Init_GraphicDataType_start_x(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_start_y start_x(::node_interface::msg::GraphicDataType::_start_x_type arg)
  {
    msg_.start_x = std::move(arg);
    return Init_GraphicDataType_start_y(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_width
{
public:
  explicit Init_GraphicDataType_width(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_start_x width(::node_interface::msg::GraphicDataType::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_GraphicDataType_start_x(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_end_angle
{
public:
  explicit Init_GraphicDataType_end_angle(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_width end_angle(::node_interface::msg::GraphicDataType::_end_angle_type arg)
  {
    msg_.end_angle = std::move(arg);
    return Init_GraphicDataType_width(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_start_angle
{
public:
  explicit Init_GraphicDataType_start_angle(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_end_angle start_angle(::node_interface::msg::GraphicDataType::_start_angle_type arg)
  {
    msg_.start_angle = std::move(arg);
    return Init_GraphicDataType_end_angle(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_color
{
public:
  explicit Init_GraphicDataType_color(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_start_angle color(::node_interface::msg::GraphicDataType::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_GraphicDataType_start_angle(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_layer
{
public:
  explicit Init_GraphicDataType_layer(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_color layer(::node_interface::msg::GraphicDataType::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return Init_GraphicDataType_color(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_graphic_tpye
{
public:
  explicit Init_GraphicDataType_graphic_tpye(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_layer graphic_tpye(::node_interface::msg::GraphicDataType::_graphic_tpye_type arg)
  {
    msg_.graphic_tpye = std::move(arg);
    return Init_GraphicDataType_layer(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_operate_tpye
{
public:
  explicit Init_GraphicDataType_operate_tpye(::node_interface::msg::GraphicDataType & msg)
  : msg_(msg)
  {}
  Init_GraphicDataType_graphic_tpye operate_tpye(::node_interface::msg::GraphicDataType::_operate_tpye_type arg)
  {
    msg_.operate_tpye = std::move(arg);
    return Init_GraphicDataType_graphic_tpye(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

class Init_GraphicDataType_graphic_name
{
public:
  Init_GraphicDataType_graphic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphicDataType_operate_tpye graphic_name(::node_interface::msg::GraphicDataType::_graphic_name_type arg)
  {
    msg_.graphic_name = std::move(arg);
    return Init_GraphicDataType_operate_tpye(msg_);
  }

private:
  ::node_interface::msg::GraphicDataType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::node_interface::msg::GraphicDataType>()
{
  return node_interface::msg::builder::Init_GraphicDataType_graphic_name();
}

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__BUILDER_HPP_
