// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/DartClientCmds.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__DartClientCmds __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__DartClientCmds __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DartClientCmds_
{
  using Type = DartClientCmds_<ContainerAllocator>;

  explicit DartClientCmds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_launch_opening_status = 0;
      this->dart_attack_target = 0;
      this->target_change_time = 0;
      this->first_dart_speed = 0;
      this->second_dart_speed = 0;
      this->third_dart_speed = 0;
      this->fourth_dart_speed = 0;
      this->last_dart_launch_time = 0;
      this->operate_launch_cmd_time = 0;
    }
  }

  explicit DartClientCmds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dart_launch_opening_status = 0;
      this->dart_attack_target = 0;
      this->target_change_time = 0;
      this->first_dart_speed = 0;
      this->second_dart_speed = 0;
      this->third_dart_speed = 0;
      this->fourth_dart_speed = 0;
      this->last_dart_launch_time = 0;
      this->operate_launch_cmd_time = 0;
    }
  }

  // field types and members
  using _dart_launch_opening_status_type =
    uint8_t;
  _dart_launch_opening_status_type dart_launch_opening_status;
  using _dart_attack_target_type =
    uint8_t;
  _dart_attack_target_type dart_attack_target;
  using _target_change_time_type =
    uint16_t;
  _target_change_time_type target_change_time;
  using _first_dart_speed_type =
    uint8_t;
  _first_dart_speed_type first_dart_speed;
  using _second_dart_speed_type =
    uint8_t;
  _second_dart_speed_type second_dart_speed;
  using _third_dart_speed_type =
    uint8_t;
  _third_dart_speed_type third_dart_speed;
  using _fourth_dart_speed_type =
    uint8_t;
  _fourth_dart_speed_type fourth_dart_speed;
  using _last_dart_launch_time_type =
    uint16_t;
  _last_dart_launch_time_type last_dart_launch_time;
  using _operate_launch_cmd_time_type =
    uint16_t;
  _operate_launch_cmd_time_type operate_launch_cmd_time;

  // setters for named parameter idiom
  Type & set__dart_launch_opening_status(
    const uint8_t & _arg)
  {
    this->dart_launch_opening_status = _arg;
    return *this;
  }
  Type & set__dart_attack_target(
    const uint8_t & _arg)
  {
    this->dart_attack_target = _arg;
    return *this;
  }
  Type & set__target_change_time(
    const uint16_t & _arg)
  {
    this->target_change_time = _arg;
    return *this;
  }
  Type & set__first_dart_speed(
    const uint8_t & _arg)
  {
    this->first_dart_speed = _arg;
    return *this;
  }
  Type & set__second_dart_speed(
    const uint8_t & _arg)
  {
    this->second_dart_speed = _arg;
    return *this;
  }
  Type & set__third_dart_speed(
    const uint8_t & _arg)
  {
    this->third_dart_speed = _arg;
    return *this;
  }
  Type & set__fourth_dart_speed(
    const uint8_t & _arg)
  {
    this->fourth_dart_speed = _arg;
    return *this;
  }
  Type & set__last_dart_launch_time(
    const uint16_t & _arg)
  {
    this->last_dart_launch_time = _arg;
    return *this;
  }
  Type & set__operate_launch_cmd_time(
    const uint16_t & _arg)
  {
    this->operate_launch_cmd_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::DartClientCmds_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::DartClientCmds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DartClientCmds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::DartClientCmds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__DartClientCmds
    std::shared_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__DartClientCmds
    std::shared_ptr<node_interface::msg::DartClientCmds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DartClientCmds_ & other) const
  {
    if (this->dart_launch_opening_status != other.dart_launch_opening_status) {
      return false;
    }
    if (this->dart_attack_target != other.dart_attack_target) {
      return false;
    }
    if (this->target_change_time != other.target_change_time) {
      return false;
    }
    if (this->first_dart_speed != other.first_dart_speed) {
      return false;
    }
    if (this->second_dart_speed != other.second_dart_speed) {
      return false;
    }
    if (this->third_dart_speed != other.third_dart_speed) {
      return false;
    }
    if (this->fourth_dart_speed != other.fourth_dart_speed) {
      return false;
    }
    if (this->last_dart_launch_time != other.last_dart_launch_time) {
      return false;
    }
    if (this->operate_launch_cmd_time != other.operate_launch_cmd_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DartClientCmds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DartClientCmds_

// alias to use template instance with default allocator
using DartClientCmds =
  node_interface::msg::DartClientCmds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__DART_CLIENT_CMDS__STRUCT_HPP_
