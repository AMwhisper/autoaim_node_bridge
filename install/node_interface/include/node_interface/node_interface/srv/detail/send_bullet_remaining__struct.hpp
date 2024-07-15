// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendBulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_BULLET_REMAINING__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_BULLET_REMAINING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendBulletRemaining_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendBulletRemaining_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendBulletRemaining_Request_
{
  using Type = SendBulletRemaining_Request_<ContainerAllocator>;

  explicit SendBulletRemaining_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_remaining_num_17mm = 0;
      this->bullet_remaining_num_42mm = 0;
      this->coin_remaining_num = 0;
    }
  }

  explicit SendBulletRemaining_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_remaining_num_17mm = 0;
      this->bullet_remaining_num_42mm = 0;
      this->coin_remaining_num = 0;
    }
  }

  // field types and members
  using _bullet_remaining_num_17mm_type =
    uint16_t;
  _bullet_remaining_num_17mm_type bullet_remaining_num_17mm;
  using _bullet_remaining_num_42mm_type =
    uint16_t;
  _bullet_remaining_num_42mm_type bullet_remaining_num_42mm;
  using _coin_remaining_num_type =
    uint16_t;
  _coin_remaining_num_type coin_remaining_num;

  // setters for named parameter idiom
  Type & set__bullet_remaining_num_17mm(
    const uint16_t & _arg)
  {
    this->bullet_remaining_num_17mm = _arg;
    return *this;
  }
  Type & set__bullet_remaining_num_42mm(
    const uint16_t & _arg)
  {
    this->bullet_remaining_num_42mm = _arg;
    return *this;
  }
  Type & set__coin_remaining_num(
    const uint16_t & _arg)
  {
    this->coin_remaining_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendBulletRemaining_Request
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendBulletRemaining_Request
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendBulletRemaining_Request_ & other) const
  {
    if (this->bullet_remaining_num_17mm != other.bullet_remaining_num_17mm) {
      return false;
    }
    if (this->bullet_remaining_num_42mm != other.bullet_remaining_num_42mm) {
      return false;
    }
    if (this->coin_remaining_num != other.coin_remaining_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendBulletRemaining_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendBulletRemaining_Request_

// alias to use template instance with default allocator
using SendBulletRemaining_Request =
  node_interface::srv::SendBulletRemaining_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendBulletRemaining_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendBulletRemaining_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendBulletRemaining_Response_
{
  using Type = SendBulletRemaining_Response_<ContainerAllocator>;

  explicit SendBulletRemaining_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendBulletRemaining_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendBulletRemaining_Response
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendBulletRemaining_Response
    std::shared_ptr<node_interface::srv::SendBulletRemaining_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendBulletRemaining_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendBulletRemaining_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendBulletRemaining_Response_

// alias to use template instance with default allocator
using SendBulletRemaining_Response =
  node_interface::srv::SendBulletRemaining_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendBulletRemaining
{
  using Request = node_interface::srv::SendBulletRemaining_Request;
  using Response = node_interface::srv::SendBulletRemaining_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_BULLET_REMAINING__STRUCT_HPP_
