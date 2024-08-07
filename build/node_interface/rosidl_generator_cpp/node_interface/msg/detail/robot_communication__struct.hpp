// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/RobotCommunication.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__RobotCommunication __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__RobotCommunication __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommunication_
{
  using Type = RobotCommunication_<ContainerAllocator>;

  explicit RobotCommunication_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
      this->data1 = 0l;
      this->data2 = 0l;
      this->data3 = 0l;
      this->data4 = 0l;
    }
  }

  explicit RobotCommunication_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
      this->data1 = 0l;
      this->data2 = 0l;
      this->data3 = 0l;
      this->data4 = 0l;
    }
  }

  // field types and members
  using _data_cmd_id_type =
    uint16_t;
  _data_cmd_id_type data_cmd_id;
  using _send_id_type =
    uint16_t;
  _send_id_type send_id;
  using _receiver_id_type =
    uint16_t;
  _receiver_id_type receiver_id;
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
  Type & set__data_cmd_id(
    const uint16_t & _arg)
  {
    this->data_cmd_id = _arg;
    return *this;
  }
  Type & set__send_id(
    const uint16_t & _arg)
  {
    this->send_id = _arg;
    return *this;
  }
  Type & set__receiver_id(
    const uint16_t & _arg)
  {
    this->receiver_id = _arg;
    return *this;
  }
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
    node_interface::msg::RobotCommunication_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::RobotCommunication_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::RobotCommunication_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::RobotCommunication_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__RobotCommunication
    std::shared_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__RobotCommunication
    std::shared_ptr<node_interface::msg::RobotCommunication_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommunication_ & other) const
  {
    if (this->data_cmd_id != other.data_cmd_id) {
      return false;
    }
    if (this->send_id != other.send_id) {
      return false;
    }
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
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
  bool operator!=(const RobotCommunication_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommunication_

// alias to use template instance with default allocator
using RobotCommunication =
  node_interface::msg::RobotCommunication_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_HPP_
