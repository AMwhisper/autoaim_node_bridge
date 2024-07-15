// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/GraphicDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__GraphicDataType __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__GraphicDataType __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphicDataType_
{
  using Type = GraphicDataType_<ContainerAllocator>;

  explicit GraphicDataType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->graphic_name.begin(), this->graphic_name.end(), 0);
      this->operate_tpye = 0ul;
      this->graphic_tpye = 0ul;
      this->layer = 0ul;
      this->color = 0ul;
      this->start_angle = 0ul;
      this->end_angle = 0ul;
      this->width = 0ul;
      this->start_x = 0ul;
      this->start_y = 0ul;
      this->radius = 0ul;
      this->end_x = 0ul;
      this->end_y = 0ul;
    }
  }

  explicit GraphicDataType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : graphic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->graphic_name.begin(), this->graphic_name.end(), 0);
      this->operate_tpye = 0ul;
      this->graphic_tpye = 0ul;
      this->layer = 0ul;
      this->color = 0ul;
      this->start_angle = 0ul;
      this->end_angle = 0ul;
      this->width = 0ul;
      this->start_x = 0ul;
      this->start_y = 0ul;
      this->radius = 0ul;
      this->end_x = 0ul;
      this->end_y = 0ul;
    }
  }

  // field types and members
  using _graphic_name_type =
    std::array<uint8_t, 3>;
  _graphic_name_type graphic_name;
  using _operate_tpye_type =
    uint32_t;
  _operate_tpye_type operate_tpye;
  using _graphic_tpye_type =
    uint32_t;
  _graphic_tpye_type graphic_tpye;
  using _layer_type =
    uint32_t;
  _layer_type layer;
  using _color_type =
    uint32_t;
  _color_type color;
  using _start_angle_type =
    uint32_t;
  _start_angle_type start_angle;
  using _end_angle_type =
    uint32_t;
  _end_angle_type end_angle;
  using _width_type =
    uint32_t;
  _width_type width;
  using _start_x_type =
    uint32_t;
  _start_x_type start_x;
  using _start_y_type =
    uint32_t;
  _start_y_type start_y;
  using _radius_type =
    uint32_t;
  _radius_type radius;
  using _end_x_type =
    uint32_t;
  _end_x_type end_x;
  using _end_y_type =
    uint32_t;
  _end_y_type end_y;

  // setters for named parameter idiom
  Type & set__graphic_name(
    const std::array<uint8_t, 3> & _arg)
  {
    this->graphic_name = _arg;
    return *this;
  }
  Type & set__operate_tpye(
    const uint32_t & _arg)
  {
    this->operate_tpye = _arg;
    return *this;
  }
  Type & set__graphic_tpye(
    const uint32_t & _arg)
  {
    this->graphic_tpye = _arg;
    return *this;
  }
  Type & set__layer(
    const uint32_t & _arg)
  {
    this->layer = _arg;
    return *this;
  }
  Type & set__color(
    const uint32_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__start_angle(
    const uint32_t & _arg)
  {
    this->start_angle = _arg;
    return *this;
  }
  Type & set__end_angle(
    const uint32_t & _arg)
  {
    this->end_angle = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__start_x(
    const uint32_t & _arg)
  {
    this->start_x = _arg;
    return *this;
  }
  Type & set__start_y(
    const uint32_t & _arg)
  {
    this->start_y = _arg;
    return *this;
  }
  Type & set__radius(
    const uint32_t & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__end_x(
    const uint32_t & _arg)
  {
    this->end_x = _arg;
    return *this;
  }
  Type & set__end_y(
    const uint32_t & _arg)
  {
    this->end_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::GraphicDataType_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::GraphicDataType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::GraphicDataType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::GraphicDataType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__GraphicDataType
    std::shared_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__GraphicDataType
    std::shared_ptr<node_interface::msg::GraphicDataType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphicDataType_ & other) const
  {
    if (this->graphic_name != other.graphic_name) {
      return false;
    }
    if (this->operate_tpye != other.operate_tpye) {
      return false;
    }
    if (this->graphic_tpye != other.graphic_tpye) {
      return false;
    }
    if (this->layer != other.layer) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->start_angle != other.start_angle) {
      return false;
    }
    if (this->end_angle != other.end_angle) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->start_x != other.start_x) {
      return false;
    }
    if (this->start_y != other.start_y) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->end_x != other.end_x) {
      return false;
    }
    if (this->end_y != other.end_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphicDataType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphicDataType_

// alias to use template instance with default allocator
using GraphicDataType =
  node_interface::msg::GraphicDataType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__STRUCT_HPP_
