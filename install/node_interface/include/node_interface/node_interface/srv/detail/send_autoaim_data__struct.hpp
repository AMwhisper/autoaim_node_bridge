// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendAutoaimData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_AUTOAIM_DATA__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_AUTOAIM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendAutoaimData_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendAutoaimData_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendAutoaimData_Request_
{
  using Type = SendAutoaimData_Request_<ContainerAllocator>;

  explicit SendAutoaimData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_angle_diff = 0.0f;
      this->pitch_angle_diff = 0.0f;
      this->fire = 0;
    }
  }

  explicit SendAutoaimData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_angle_diff = 0.0f;
      this->pitch_angle_diff = 0.0f;
      this->fire = 0;
    }
  }

  // field types and members
  using _yaw_angle_diff_type =
    float;
  _yaw_angle_diff_type yaw_angle_diff;
  using _pitch_angle_diff_type =
    float;
  _pitch_angle_diff_type pitch_angle_diff;
  using _fire_type =
    uint8_t;
  _fire_type fire;

  // setters for named parameter idiom
  Type & set__yaw_angle_diff(
    const float & _arg)
  {
    this->yaw_angle_diff = _arg;
    return *this;
  }
  Type & set__pitch_angle_diff(
    const float & _arg)
  {
    this->pitch_angle_diff = _arg;
    return *this;
  }
  Type & set__fire(
    const uint8_t & _arg)
  {
    this->fire = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendAutoaimData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendAutoaimData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAutoaimData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAutoaimData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendAutoaimData_Request
    std::shared_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendAutoaimData_Request
    std::shared_ptr<node_interface::srv::SendAutoaimData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendAutoaimData_Request_ & other) const
  {
    if (this->yaw_angle_diff != other.yaw_angle_diff) {
      return false;
    }
    if (this->pitch_angle_diff != other.pitch_angle_diff) {
      return false;
    }
    if (this->fire != other.fire) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendAutoaimData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendAutoaimData_Request_

// alias to use template instance with default allocator
using SendAutoaimData_Request =
  node_interface::srv::SendAutoaimData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendAutoaimData_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendAutoaimData_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendAutoaimData_Response_
{
  using Type = SendAutoaimData_Response_<ContainerAllocator>;

  explicit SendAutoaimData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendAutoaimData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendAutoaimData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendAutoaimData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAutoaimData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendAutoaimData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendAutoaimData_Response
    std::shared_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendAutoaimData_Response
    std::shared_ptr<node_interface::srv::SendAutoaimData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendAutoaimData_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendAutoaimData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendAutoaimData_Response_

// alias to use template instance with default allocator
using SendAutoaimData_Response =
  node_interface::srv::SendAutoaimData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendAutoaimData
{
  using Request = node_interface::srv::SendAutoaimData_Request;
  using Response = node_interface::srv::SendAutoaimData_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_AUTOAIM_DATA__STRUCT_HPP_
