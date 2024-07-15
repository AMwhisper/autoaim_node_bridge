// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/DebugInfo.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'debug_data'
#include "node_interface/msg/detail/debug_data_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__node_interface__msg__DebugInfo __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__DebugInfo __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugInfo_
{
  using Type = DebugInfo_<ContainerAllocator>;

  explicit DebugInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_data(_init)
  {
    (void)_init;
  }

  explicit DebugInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _debug_data_type =
    node_interface::msg::DebugDataType_<ContainerAllocator>;
  _debug_data_type debug_data;

  // setters for named parameter idiom
  Type & set__debug_data(
    const node_interface::msg::DebugDataType_<ContainerAllocator> & _arg)
  {
    this->debug_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::DebugInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::DebugInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::DebugInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::DebugInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DebugInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DebugInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DebugInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DebugInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::DebugInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::DebugInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__DebugInfo
    std::shared_ptr<node_interface::msg::DebugInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__DebugInfo
    std::shared_ptr<node_interface::msg::DebugInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugInfo_ & other) const
  {
    if (this->debug_data != other.debug_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugInfo_

// alias to use template instance with default allocator
using DebugInfo =
  node_interface::msg::DebugInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_INFO__STRUCT_HPP_
