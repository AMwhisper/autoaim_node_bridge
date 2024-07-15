// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__BulletRemaining __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__BulletRemaining __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BulletRemaining_
{
  using Type = BulletRemaining_<ContainerAllocator>;

  explicit BulletRemaining_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_remaining_num_17mm = 0;
      this->bullet_remaining_num_42mm = 0;
      this->coin_remaining_num = 0;
    }
  }

  explicit BulletRemaining_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_remaining_num_17mm = 0;
      this->bullet_remaining_num_42mm = 0;
      this->coin_remaining_num = 0;
    }
  }

  // field types and members
  using _bullet_remaining_num_17mm_type =
    uint16_t;
  _bullet_remaining_num_17mm_type bullet_remaining_num_17mm;
  using _bullet_remaining_num_42mm_type =
    uint16_t;
  _bullet_remaining_num_42mm_type bullet_remaining_num_42mm;
  using _coin_remaining_num_type =
    uint16_t;
  _coin_remaining_num_type coin_remaining_num;

  // setters for named parameter idiom
  Type & set__bullet_remaining_num_17mm(
    const uint16_t & _arg)
  {
    this->bullet_remaining_num_17mm = _arg;
    return *this;
  }
  Type & set__bullet_remaining_num_42mm(
    const uint16_t & _arg)
  {
    this->bullet_remaining_num_42mm = _arg;
    return *this;
  }
  Type & set__coin_remaining_num(
    const uint16_t & _arg)
  {
    this->coin_remaining_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::BulletRemaining_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::BulletRemaining_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::BulletRemaining_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::BulletRemaining_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__BulletRemaining
    std::shared_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__BulletRemaining
    std::shared_ptr<node_interface::msg::BulletRemaining_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BulletRemaining_ & other) const
  {
    if (this->bullet_remaining_num_17mm != other.bullet_remaining_num_17mm) {
      return false;
    }
    if (this->bullet_remaining_num_42mm != other.bullet_remaining_num_42mm) {
      return false;
    }
    if (this->coin_remaining_num != other.coin_remaining_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const BulletRemaining_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BulletRemaining_

// alias to use template instance with default allocator
using BulletRemaining =
  node_interface::msg::BulletRemaining_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__BULLET_REMAINING__STRUCT_HPP_
