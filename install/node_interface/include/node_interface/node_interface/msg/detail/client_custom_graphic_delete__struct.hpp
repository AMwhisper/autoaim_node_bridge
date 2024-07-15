// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/ClientCustomGraphicDelete.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__ClientCustomGraphicDelete __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__ClientCustomGraphicDelete __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClientCustomGraphicDelete_
{
  using Type = ClientCustomGraphicDelete_<ContainerAllocator>;

  explicit ClientCustomGraphicDelete_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
      this->operate_tpye = 0;
      this->layer = 0;
    }
  }

  explicit ClientCustomGraphicDelete_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
      this->operate_tpye = 0;
      this->layer = 0;
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
  using _operate_tpye_type =
    uint8_t;
  _operate_tpye_type operate_tpye;
  using _layer_type =
    uint8_t;
  _layer_type layer;

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
  Type & set__operate_tpye(
    const uint8_t & _arg)
  {
    this->operate_tpye = _arg;
    return *this;
  }
  Type & set__layer(
    const uint8_t & _arg)
  {
    this->layer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__ClientCustomGraphicDelete
    std::shared_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__ClientCustomGraphicDelete
    std::shared_ptr<node_interface::msg::ClientCustomGraphicDelete_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClientCustomGraphicDelete_ & other) const
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
    if (this->operate_tpye != other.operate_tpye) {
      return false;
    }
    if (this->layer != other.layer) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClientCustomGraphicDelete_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClientCustomGraphicDelete_

// alias to use template instance with default allocator
using ClientCustomGraphicDelete =
  node_interface::msg::ClientCustomGraphicDelete_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_DELETE__STRUCT_HPP_
