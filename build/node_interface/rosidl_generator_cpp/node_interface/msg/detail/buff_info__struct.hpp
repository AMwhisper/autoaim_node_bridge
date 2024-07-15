// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/BuffInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__BuffInfo __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__BuffInfo __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BuffInfo_
{
  using Type = BuffInfo_<ContainerAllocator>;

  explicit BuffInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_rune_buff = 0;
    }
  }

  explicit BuffInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_rune_buff = 0;
    }
  }

  // field types and members
  using _power_rune_buff_type =
    uint8_t;
  _power_rune_buff_type power_rune_buff;

  // setters for named parameter idiom
  Type & set__power_rune_buff(
    const uint8_t & _arg)
  {
    this->power_rune_buff = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::BuffInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::BuffInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::BuffInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::BuffInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::BuffInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::BuffInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::BuffInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::BuffInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::BuffInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::BuffInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__BuffInfo
    std::shared_ptr<node_interface::msg::BuffInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__BuffInfo
    std::shared_ptr<node_interface::msg::BuffInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BuffInfo_ & other) const
  {
    if (this->power_rune_buff != other.power_rune_buff) {
      return false;
    }
    return true;
  }
  bool operator!=(const BuffInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BuffInfo_

// alias to use template instance with default allocator
using BuffInfo =
  node_interface::msg::BuffInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__BUFF_INFO__STRUCT_HPP_
