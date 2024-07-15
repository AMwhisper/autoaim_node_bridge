// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__EventData __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__EventData __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventData_
{
  using Type = EventData_<ContainerAllocator>;

  explicit EventData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0ul;
    }
  }

  explicit EventData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_type = 0ul;
    }
  }

  // field types and members
  using _event_type_type =
    uint32_t;
  _event_type_type event_type;

  // setters for named parameter idiom
  Type & set__event_type(
    const uint32_t & _arg)
  {
    this->event_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::EventData_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::EventData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::EventData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::EventData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::EventData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::EventData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::EventData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::EventData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::EventData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::EventData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__EventData
    std::shared_ptr<node_interface::msg::EventData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__EventData
    std::shared_ptr<node_interface::msg::EventData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventData_ & other) const
  {
    if (this->event_type != other.event_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventData_

// alias to use template instance with default allocator
using EventData =
  node_interface::msg::EventData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__EVENT_DATA__STRUCT_HPP_
