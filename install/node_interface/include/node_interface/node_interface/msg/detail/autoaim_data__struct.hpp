// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/AutoaimData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__AUTOAIM_DATA__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__AUTOAIM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__AutoaimData __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__AutoaimData __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoaimData_
{
  using Type = AutoaimData_<ContainerAllocator>;

  explicit AutoaimData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_angle_diff = 0.0f;
      this->pitch_angle_diff = 0.0f;
      this->fire = 0;
    }
  }

  explicit AutoaimData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_angle_diff = 0.0f;
      this->pitch_angle_diff = 0.0f;
      this->fire = 0;
    }
  }

  // field types and members
  using _yaw_angle_diff_type =
    float;
  _yaw_angle_diff_type yaw_angle_diff;
  using _pitch_angle_diff_type =
    float;
  _pitch_angle_diff_type pitch_angle_diff;
  using _fire_type =
    uint8_t;
  _fire_type fire;

  // setters for named parameter idiom
  Type & set__yaw_angle_diff(
    const float & _arg)
  {
    this->yaw_angle_diff = _arg;
    return *this;
  }
  Type & set__pitch_angle_diff(
    const float & _arg)
  {
    this->pitch_angle_diff = _arg;
    return *this;
  }
  Type & set__fire(
    const uint8_t & _arg)
  {
    this->fire = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::AutoaimData_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::AutoaimData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::AutoaimData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::AutoaimData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::AutoaimData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::AutoaimData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::AutoaimData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::AutoaimData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::AutoaimData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::AutoaimData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__AutoaimData
    std::shared_ptr<node_interface::msg::AutoaimData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__AutoaimData
    std::shared_ptr<node_interface::msg::AutoaimData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoaimData_ & other) const
  {
    if (this->yaw_angle_diff != other.yaw_angle_diff) {
      return false;
    }
    if (this->pitch_angle_diff != other.pitch_angle_diff) {
      return false;
    }
    if (this->fire != other.fire) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoaimData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoaimData_

// alias to use template instance with default allocator
using AutoaimData =
  node_interface::msg::AutoaimData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__AUTOAIM_DATA__STRUCT_HPP_
