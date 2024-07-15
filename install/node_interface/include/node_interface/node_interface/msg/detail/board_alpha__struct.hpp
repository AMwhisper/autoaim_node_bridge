// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/BoardAlpha.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__BOARD_ALPHA__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__BOARD_ALPHA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__BoardAlpha __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__BoardAlpha __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoardAlpha_
{
  using Type = BoardAlpha_<ContainerAllocator>;

  explicit BoardAlpha_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = 0l;
      this->data2 = 0l;
      this->data3 = 0l;
      this->data4 = 0l;
    }
  }

  explicit BoardAlpha_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = 0l;
      this->data2 = 0l;
      this->data3 = 0l;
      this->data4 = 0l;
    }
  }

  // field types and members
  using _data1_type =
    int32_t;
  _data1_type data1;
  using _data2_type =
    int32_t;
  _data2_type data2;
  using _data3_type =
    int32_t;
  _data3_type data3;
  using _data4_type =
    int32_t;
  _data4_type data4;

  // setters for named parameter idiom
  Type & set__data1(
    const int32_t & _arg)
  {
    this->data1 = _arg;
    return *this;
  }
  Type & set__data2(
    const int32_t & _arg)
  {
    this->data2 = _arg;
    return *this;
  }
  Type & set__data3(
    const int32_t & _arg)
  {
    this->data3 = _arg;
    return *this;
  }
  Type & set__data4(
    const int32_t & _arg)
  {
    this->data4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::BoardAlpha_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::BoardAlpha_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::BoardAlpha_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::BoardAlpha_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__BoardAlpha
    std::shared_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__BoardAlpha
    std::shared_ptr<node_interface::msg::BoardAlpha_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoardAlpha_ & other) const
  {
    if (this->data1 != other.data1) {
      return false;
    }
    if (this->data2 != other.data2) {
      return false;
    }
    if (this->data3 != other.data3) {
      return false;
    }
    if (this->data4 != other.data4) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoardAlpha_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoardAlpha_

// alias to use template instance with default allocator
using BoardAlpha =
  node_interface::msg::BoardAlpha_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__BOARD_ALPHA__STRUCT_HPP_
