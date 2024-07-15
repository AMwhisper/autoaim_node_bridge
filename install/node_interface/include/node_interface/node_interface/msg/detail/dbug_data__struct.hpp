// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/DbugData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__DbugData __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__DbugData __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DbugData_
{
  using Type = DbugData_<ContainerAllocator>;

  explicit DbugData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 18>::iterator, uint8_t>(this->dbus_buffer.begin(), this->dbus_buffer.end(), 0);
    }
  }

  explicit DbugData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dbus_buffer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 18>::iterator, uint8_t>(this->dbus_buffer.begin(), this->dbus_buffer.end(), 0);
    }
  }

  // field types and members
  using _dbus_buffer_type =
    std::array<uint8_t, 18>;
  _dbus_buffer_type dbus_buffer;

  // setters for named parameter idiom
  Type & set__dbus_buffer(
    const std::array<uint8_t, 18> & _arg)
  {
    this->dbus_buffer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::DbugData_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::DbugData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::DbugData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::DbugData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DbugData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DbugData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DbugData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DbugData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::DbugData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::DbugData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__DbugData
    std::shared_ptr<node_interface::msg::DbugData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__DbugData
    std::shared_ptr<node_interface::msg::DbugData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DbugData_ & other) const
  {
    if (this->dbus_buffer != other.dbus_buffer) {
      return false;
    }
    return true;
  }
  bool operator!=(const DbugData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DbugData_

// alias to use template instance with default allocator
using DbugData =
  node_interface::msg::DbugData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DBUG_DATA__STRUCT_HPP_
