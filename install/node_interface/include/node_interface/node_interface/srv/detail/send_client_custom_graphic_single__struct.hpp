// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendClientCustomGraphicSingle.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_SINGLE__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_SINGLE__STRUCT_HPP_

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
# define DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendClientCustomGraphicSingle_Request_
{
  using Type = SendClientCustomGraphicSingle_Request_<ContainerAllocator>;

  explicit SendClientCustomGraphicSingle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grapic_data_struct(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
    }
  }

  explicit SendClientCustomGraphicSingle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grapic_data_struct(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data_cmd_id = 0;
      this->send_id = 0;
      this->receiver_id = 0;
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
    node_interface::msg::GraphicDataType_<ContainerAllocator>;
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
    const node_interface::msg::GraphicDataType_<ContainerAllocator> & _arg)
  {
    this->grapic_data_struct = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Request
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Request
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendClientCustomGraphicSingle_Request_ & other) const
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
  bool operator!=(const SendClientCustomGraphicSingle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendClientCustomGraphicSingle_Request_

// alias to use template instance with default allocator
using SendClientCustomGraphicSingle_Request =
  node_interface::srv::SendClientCustomGraphicSingle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendClientCustomGraphicSingle_Response_
{
  using Type = SendClientCustomGraphicSingle_Response_<ContainerAllocator>;

  explicit SendClientCustomGraphicSingle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendClientCustomGraphicSingle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Response
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendClientCustomGraphicSingle_Response
    std::shared_ptr<node_interface::srv::SendClientCustomGraphicSingle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendClientCustomGraphicSingle_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendClientCustomGraphicSingle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendClientCustomGraphicSingle_Response_

// alias to use template instance with default allocator
using SendClientCustomGraphicSingle_Response =
  node_interface::srv::SendClientCustomGraphicSingle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendClientCustomGraphicSingle
{
  using Request = node_interface::srv::SendClientCustomGraphicSingle_Request;
  using Response = node_interface::srv::SendClientCustomGraphicSingle_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_SINGLE__STRUCT_HPP_
