// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/ChassisData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__ChassisData __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__ChassisData __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChassisData_
{
  using Type = ChassisData_<ContainerAllocator>;

  explicit ChassisData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vw = 0.0f;
    }
  }

  explicit ChassisData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vw = 0.0f;
    }
  }

  // field types and members
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vw_type =
    float;
  _vw_type vw;

  // setters for named parameter idiom
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vw(
    const float & _arg)
  {
    this->vw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::ChassisData_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::ChassisData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::ChassisData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::ChassisData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ChassisData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ChassisData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ChassisData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ChassisData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::ChassisData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::ChassisData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__ChassisData
    std::shared_ptr<node_interface::msg::ChassisData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__ChassisData
    std::shared_ptr<node_interface::msg::ChassisData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChassisData_ & other) const
  {
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vw != other.vw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChassisData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChassisData_

// alias to use template instance with default allocator
using ChassisData =
  node_interface::msg::ChassisData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__CHASSIS_DATA__STRUCT_HPP_
