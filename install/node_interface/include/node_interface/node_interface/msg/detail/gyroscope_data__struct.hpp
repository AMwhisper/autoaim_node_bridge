// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/GyroscopeData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__GyroscopeData __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__GyroscopeData __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GyroscopeData_
{
  using Type = GyroscopeData_<ContainerAllocator>;

  explicit GyroscopeData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  explicit GyroscopeData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  // field types and members
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::GyroscopeData_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::GyroscopeData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::GyroscopeData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::GyroscopeData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__GyroscopeData
    std::shared_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__GyroscopeData
    std::shared_ptr<node_interface::msg::GyroscopeData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GyroscopeData_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const GyroscopeData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GyroscopeData_

// alias to use template instance with default allocator
using GyroscopeData =
  node_interface::msg::GyroscopeData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GYROSCOPE_DATA__STRUCT_HPP_
