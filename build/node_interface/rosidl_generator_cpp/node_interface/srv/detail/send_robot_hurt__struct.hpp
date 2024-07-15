// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendRobotHurt.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendRobotHurt_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendRobotHurt_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendRobotHurt_Request_
{
  using Type = SendRobotHurt_Request_<ContainerAllocator>;

  explicit SendRobotHurt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_id = 0;
      this->hurt_type = 0;
    }
  }

  explicit SendRobotHurt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_id = 0;
      this->hurt_type = 0;
    }
  }

  // field types and members
  using _armor_id_type =
    uint8_t;
  _armor_id_type armor_id;
  using _hurt_type_type =
    uint8_t;
  _hurt_type_type hurt_type;

  // setters for named parameter idiom
  Type & set__armor_id(
    const uint8_t & _arg)
  {
    this->armor_id = _arg;
    return *this;
  }
  Type & set__hurt_type(
    const uint8_t & _arg)
  {
    this->hurt_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendRobotHurt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendRobotHurt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendRobotHurt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendRobotHurt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendRobotHurt_Request
    std::shared_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendRobotHurt_Request
    std::shared_ptr<node_interface::srv::SendRobotHurt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendRobotHurt_Request_ & other) const
  {
    if (this->armor_id != other.armor_id) {
      return false;
    }
    if (this->hurt_type != other.hurt_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendRobotHurt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendRobotHurt_Request_

// alias to use template instance with default allocator
using SendRobotHurt_Request =
  node_interface::srv::SendRobotHurt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendRobotHurt_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendRobotHurt_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendRobotHurt_Response_
{
  using Type = SendRobotHurt_Response_<ContainerAllocator>;

  explicit SendRobotHurt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendRobotHurt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendRobotHurt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendRobotHurt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendRobotHurt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendRobotHurt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendRobotHurt_Response
    std::shared_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendRobotHurt_Response
    std::shared_ptr<node_interface::srv::SendRobotHurt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendRobotHurt_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendRobotHurt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendRobotHurt_Response_

// alias to use template instance with default allocator
using SendRobotHurt_Response =
  node_interface::srv::SendRobotHurt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendRobotHurt
{
  using Request = node_interface::srv::SendRobotHurt_Request;
  using Response = node_interface::srv::SendRobotHurt_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ROBOT_HURT__STRUCT_HPP_
