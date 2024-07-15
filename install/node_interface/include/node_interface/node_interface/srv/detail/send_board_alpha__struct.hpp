// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendBoardAlpha.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_BOARD_ALPHA__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_BOARD_ALPHA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendBoardAlpha_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendBoardAlpha_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendBoardAlpha_Request_
{
  using Type = SendBoardAlpha_Request_<ContainerAllocator>;

  explicit SendBoardAlpha_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit SendBoardAlpha_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendBoardAlpha_Request
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendBoardAlpha_Request
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendBoardAlpha_Request_ & other) const
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
  bool operator!=(const SendBoardAlpha_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendBoardAlpha_Request_

// alias to use template instance with default allocator
using SendBoardAlpha_Request =
  node_interface::srv::SendBoardAlpha_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendBoardAlpha_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendBoardAlpha_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendBoardAlpha_Response_
{
  using Type = SendBoardAlpha_Response_<ContainerAllocator>;

  explicit SendBoardAlpha_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendBoardAlpha_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendBoardAlpha_Response
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendBoardAlpha_Response
    std::shared_ptr<node_interface::srv::SendBoardAlpha_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendBoardAlpha_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendBoardAlpha_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendBoardAlpha_Response_

// alias to use template instance with default allocator
using SendBoardAlpha_Response =
  node_interface::srv::SendBoardAlpha_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendBoardAlpha
{
  using Request = node_interface::srv::SendBoardAlpha_Request;
  using Response = node_interface::srv::SendBoardAlpha_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_BOARD_ALPHA__STRUCT_HPP_
