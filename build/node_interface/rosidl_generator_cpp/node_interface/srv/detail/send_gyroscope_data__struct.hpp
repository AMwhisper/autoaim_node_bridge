// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendGyroscopeData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GYROSCOPE_DATA__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GYROSCOPE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendGyroscopeData_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendGyroscopeData_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendGyroscopeData_Request_
{
  using Type = SendGyroscopeData_Request_<ContainerAllocator>;

  explicit SendGyroscopeData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  explicit SendGyroscopeData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  // field types and members
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendGyroscopeData_Request
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendGyroscopeData_Request
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendGyroscopeData_Request_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendGyroscopeData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendGyroscopeData_Request_

// alias to use template instance with default allocator
using SendGyroscopeData_Request =
  node_interface::srv::SendGyroscopeData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendGyroscopeData_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendGyroscopeData_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendGyroscopeData_Response_
{
  using Type = SendGyroscopeData_Response_<ContainerAllocator>;

  explicit SendGyroscopeData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendGyroscopeData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendGyroscopeData_Response
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendGyroscopeData_Response
    std::shared_ptr<node_interface::srv::SendGyroscopeData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendGyroscopeData_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendGyroscopeData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendGyroscopeData_Response_

// alias to use template instance with default allocator
using SendGyroscopeData_Response =
  node_interface::srv::SendGyroscopeData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendGyroscopeData
{
  using Request = node_interface::srv::SendGyroscopeData_Request;
  using Response = node_interface::srv::SendGyroscopeData_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GYROSCOPE_DATA__STRUCT_HPP_
