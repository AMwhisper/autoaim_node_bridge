// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__ShootData __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__ShootData __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShootData_
{
  using Type = ShootData_<ContainerAllocator>;

  explicit ShootData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_type = 0;
      this->shooter_id = 0;
      this->bullet_freq = 0;
      this->bullet_speed = 0.0f;
    }
  }

  explicit ShootData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_type = 0;
      this->shooter_id = 0;
      this->bullet_freq = 0;
      this->bullet_speed = 0.0f;
    }
  }

  // field types and members
  using _bullet_type_type =
    uint8_t;
  _bullet_type_type bullet_type;
  using _shooter_id_type =
    uint8_t;
  _shooter_id_type shooter_id;
  using _bullet_freq_type =
    uint8_t;
  _bullet_freq_type bullet_freq;
  using _bullet_speed_type =
    float;
  _bullet_speed_type bullet_speed;

  // setters for named parameter idiom
  Type & set__bullet_type(
    const uint8_t & _arg)
  {
    this->bullet_type = _arg;
    return *this;
  }
  Type & set__shooter_id(
    const uint8_t & _arg)
  {
    this->shooter_id = _arg;
    return *this;
  }
  Type & set__bullet_freq(
    const uint8_t & _arg)
  {
    this->bullet_freq = _arg;
    return *this;
  }
  Type & set__bullet_speed(
    const float & _arg)
  {
    this->bullet_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::ShootData_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::ShootData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::ShootData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::ShootData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ShootData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ShootData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ShootData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ShootData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::ShootData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::ShootData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__ShootData
    std::shared_ptr<node_interface::msg::ShootData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__ShootData
    std::shared_ptr<node_interface::msg::ShootData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShootData_ & other) const
  {
    if (this->bullet_type != other.bullet_type) {
      return false;
    }
    if (this->shooter_id != other.shooter_id) {
      return false;
    }
    if (this->bullet_freq != other.bullet_freq) {
      return false;
    }
    if (this->bullet_speed != other.bullet_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShootData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShootData_

// alias to use template instance with default allocator
using ShootData =
  node_interface::msg::ShootData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_
