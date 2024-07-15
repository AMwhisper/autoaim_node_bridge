// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/DartStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_STATUS__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DART_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__DartStatus __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__DartStatus __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DartStatus_
{
  using Type = DartStatus_<ContainerAllocator>;

  explicit DartStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_belong = 0;
      this->stage_remaining_time = 0;
    }
  }

  explicit DartStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_belong = 0;
      this->stage_remaining_time = 0;
    }
  }

  // field types and members
  using _dart_belong_type =
    uint8_t;
  _dart_belong_type dart_belong;
  using _stage_remaining_time_type =
    uint16_t;
  _stage_remaining_time_type stage_remaining_time;

  // setters for named parameter idiom
  Type & set__dart_belong(
    const uint8_t & _arg)
  {
    this->dart_belong = _arg;
    return *this;
  }
  Type & set__stage_remaining_time(
    const uint16_t & _arg)
  {
    this->stage_remaining_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::DartStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::DartStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::DartStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::DartStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DartStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DartStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DartStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DartStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::DartStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::DartStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__DartStatus
    std::shared_ptr<node_interface::msg::DartStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__DartStatus
    std::shared_ptr<node_interface::msg::DartStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DartStatus_ & other) const
  {
    if (this->dart_belong != other.dart_belong) {
      return false;
    }
    if (this->stage_remaining_time != other.stage_remaining_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DartStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DartStatus_

// alias to use template instance with default allocator
using DartStatus =
  node_interface::msg::DartStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_STATUS__STRUCT_HPP_
