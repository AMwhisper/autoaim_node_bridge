// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/DebugDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__DebugDataType __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__DebugDataType __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugDataType_
{
  using Type = DebugDataType_<ContainerAllocator>;

  explicit DebugDataType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug1 = 0l;
      this->debug2 = 0l;
      this->debug3 = 0l;
      this->debug4 = 0l;
      this->debug5 = 0l;
      this->debug6 = 0l;
      this->debug7 = 0l;
      this->debug8 = 0l;
    }
  }

  explicit DebugDataType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->debug1 = 0l;
      this->debug2 = 0l;
      this->debug3 = 0l;
      this->debug4 = 0l;
      this->debug5 = 0l;
      this->debug6 = 0l;
      this->debug7 = 0l;
      this->debug8 = 0l;
    }
  }

  // field types and members
  using _debug1_type =
    int32_t;
  _debug1_type debug1;
  using _debug2_type =
    int32_t;
  _debug2_type debug2;
  using _debug3_type =
    int32_t;
  _debug3_type debug3;
  using _debug4_type =
    int32_t;
  _debug4_type debug4;
  using _debug5_type =
    int32_t;
  _debug5_type debug5;
  using _debug6_type =
    int32_t;
  _debug6_type debug6;
  using _debug7_type =
    int32_t;
  _debug7_type debug7;
  using _debug8_type =
    int32_t;
  _debug8_type debug8;

  // setters for named parameter idiom
  Type & set__debug1(
    const int32_t & _arg)
  {
    this->debug1 = _arg;
    return *this;
  }
  Type & set__debug2(
    const int32_t & _arg)
  {
    this->debug2 = _arg;
    return *this;
  }
  Type & set__debug3(
    const int32_t & _arg)
  {
    this->debug3 = _arg;
    return *this;
  }
  Type & set__debug4(
    const int32_t & _arg)
  {
    this->debug4 = _arg;
    return *this;
  }
  Type & set__debug5(
    const int32_t & _arg)
  {
    this->debug5 = _arg;
    return *this;
  }
  Type & set__debug6(
    const int32_t & _arg)
  {
    this->debug6 = _arg;
    return *this;
  }
  Type & set__debug7(
    const int32_t & _arg)
  {
    this->debug7 = _arg;
    return *this;
  }
  Type & set__debug8(
    const int32_t & _arg)
  {
    this->debug8 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::DebugDataType_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::DebugDataType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::DebugDataType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::DebugDataType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DebugDataType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DebugDataType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DebugDataType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DebugDataType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::DebugDataType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::DebugDataType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__DebugDataType
    std::shared_ptr<node_interface::msg::DebugDataType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__DebugDataType
    std::shared_ptr<node_interface::msg::DebugDataType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugDataType_ & other) const
  {
    if (this->debug1 != other.debug1) {
      return false;
    }
    if (this->debug2 != other.debug2) {
      return false;
    }
    if (this->debug3 != other.debug3) {
      return false;
    }
    if (this->debug4 != other.debug4) {
      return false;
    }
    if (this->debug5 != other.debug5) {
      return false;
    }
    if (this->debug6 != other.debug6) {
      return false;
    }
    if (this->debug7 != other.debug7) {
      return false;
    }
    if (this->debug8 != other.debug8) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugDataType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugDataType_

// alias to use template instance with default allocator
using DebugDataType =
  node_interface::msg::DebugDataType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DEBUG_DATA_TYPE__STRUCT_HPP_
