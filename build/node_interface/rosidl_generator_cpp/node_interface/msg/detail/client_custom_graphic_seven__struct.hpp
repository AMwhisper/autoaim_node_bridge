// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/ClientCustomGraphicSeven.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SEVEN__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SEVEN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'grapic_data_struct'
#include "node_interface/msg/detail/graphic_data_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__node_interface__msg__ClientCustomGraphicSeven __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__ClientCustomGraphicSeven __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClientCustomGraphicSeven_
{
  using Type = ClientCustomGraphicSeven_<ContainerAllocator>;

  explicit ClientCustomGraphicSeven_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
      this->grapic_data_struct.fill(node_interface::msg::GraphicDataType_<ContainerAllocator>{_init});
    }
  }

  explicit ClientCustomGraphicSeven_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grapic_data_struct(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
      this->grapic_data_struct.fill(node_interface::msg::GraphicDataType_<ContainerAllocator>{_alloc, _init});
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
  using _grapic_data_struct_type =
    std::array<node_interface::msg::GraphicDataType_<ContainerAllocator>, 7>;
  _grapic_data_struct_type grapic_data_struct;

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
  Type & set__grapic_data_struct(
    const std::array<node_interface::msg::GraphicDataType_<ContainerAllocator>, 7> & _arg)
  {
    this->grapic_data_struct = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__ClientCustomGraphicSeven
    std::shared_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__ClientCustomGraphicSeven
    std::shared_ptr<node_interface::msg::ClientCustomGraphicSeven_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClientCustomGraphicSeven_ & other) const
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
    if (this->grapic_data_struct != other.grapic_data_struct) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClientCustomGraphicSeven_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClientCustomGraphicSeven_

// alias to use template instance with default allocator
using ClientCustomGraphicSeven =
  node_interface::msg::ClientCustomGraphicSeven_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__CLIENT_CUSTOM_GRAPHIC_SEVEN__STRUCT_HPP_
