// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendAerialRobotEnergy.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_AERIAL_ROBOT_ENERGY__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_AERIAL_ROBOT_ENERGY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendAerialRobotEnergy_Request_
{
  using Type = SendAerialRobotEnergy_Request_<ContainerAllocator>;

  explicit SendAerialRobotEnergy_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attack_time = 0;
    }
  }

  explicit SendAerialRobotEnergy_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attack_time = 0;
    }
  }

  // field types and members
  using _attack_time_type =
    uint8_t;
  _attack_time_type attack_time;

  // setters for named parameter idiom
  Type & set__attack_time(
    const uint8_t & _arg)
  {
    this->attack_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Request
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Request
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendAerialRobotEnergy_Request_ & other) const
  {
    if (this->attack_time != other.attack_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendAerialRobotEnergy_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendAerialRobotEnergy_Request_

// alias to use template instance with default allocator
using SendAerialRobotEnergy_Request =
  node_interface::srv::SendAerialRobotEnergy_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendAerialRobotEnergy_Response_
{
  using Type = SendAerialRobotEnergy_Response_<ContainerAllocator>;

  explicit SendAerialRobotEnergy_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendAerialRobotEnergy_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Response
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendAerialRobotEnergy_Response
    std::shared_ptr<node_interface::srv::SendAerialRobotEnergy_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendAerialRobotEnergy_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendAerialRobotEnergy_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendAerialRobotEnergy_Response_

// alias to use template instance with default allocator
using SendAerialRobotEnergy_Response =
  node_interface::srv::SendAerialRobotEnergy_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendAerialRobotEnergy
{
  using Request = node_interface::srv::SendAerialRobotEnergy_Request;
  using Response = node_interface::srv::SendAerialRobotEnergy_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_AERIAL_ROBOT_ENERGY__STRUCT_HPP_
