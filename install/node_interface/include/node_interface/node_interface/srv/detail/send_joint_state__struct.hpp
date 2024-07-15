// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendJointState.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_STATE__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendJointState_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendJointState_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendJointState_Request_
{
  using Type = SendJointState_Request_<ContainerAllocator>;

  explicit SendJointState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_code = 0;
      this->base_joint_position = 0;
      this->base_joint_speed = 0;
      this->shoulder_joint_position = 0;
      this->shoulder_joint_speed = 0;
      this->elbow_joint_position = 0;
      this->elbow_joint_speed = 0;
      this->wrist_joint_1_position = 0;
      this->wrist_joint_1_speed = 0;
      this->wrist_joint_2_position = 0;
      this->wrist_joint_2_speed = 0;
    }
  }

  explicit SendJointState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_code = 0;
      this->base_joint_position = 0;
      this->base_joint_speed = 0;
      this->shoulder_joint_position = 0;
      this->shoulder_joint_speed = 0;
      this->elbow_joint_position = 0;
      this->elbow_joint_speed = 0;
      this->wrist_joint_1_position = 0;
      this->wrist_joint_1_speed = 0;
      this->wrist_joint_2_position = 0;
      this->wrist_joint_2_speed = 0;
    }
  }

  // field types and members
  using _state_code_type =
    uint8_t;
  _state_code_type state_code;
  using _base_joint_position_type =
    int16_t;
  _base_joint_position_type base_joint_position;
  using _base_joint_speed_type =
    int16_t;
  _base_joint_speed_type base_joint_speed;
  using _shoulder_joint_position_type =
    int16_t;
  _shoulder_joint_position_type shoulder_joint_position;
  using _shoulder_joint_speed_type =
    int16_t;
  _shoulder_joint_speed_type shoulder_joint_speed;
  using _elbow_joint_position_type =
    int16_t;
  _elbow_joint_position_type elbow_joint_position;
  using _elbow_joint_speed_type =
    int16_t;
  _elbow_joint_speed_type elbow_joint_speed;
  using _wrist_joint_1_position_type =
    int16_t;
  _wrist_joint_1_position_type wrist_joint_1_position;
  using _wrist_joint_1_speed_type =
    int16_t;
  _wrist_joint_1_speed_type wrist_joint_1_speed;
  using _wrist_joint_2_position_type =
    int16_t;
  _wrist_joint_2_position_type wrist_joint_2_position;
  using _wrist_joint_2_speed_type =
    int16_t;
  _wrist_joint_2_speed_type wrist_joint_2_speed;

  // setters for named parameter idiom
  Type & set__state_code(
    const uint8_t & _arg)
  {
    this->state_code = _arg;
    return *this;
  }
  Type & set__base_joint_position(
    const int16_t & _arg)
  {
    this->base_joint_position = _arg;
    return *this;
  }
  Type & set__base_joint_speed(
    const int16_t & _arg)
  {
    this->base_joint_speed = _arg;
    return *this;
  }
  Type & set__shoulder_joint_position(
    const int16_t & _arg)
  {
    this->shoulder_joint_position = _arg;
    return *this;
  }
  Type & set__shoulder_joint_speed(
    const int16_t & _arg)
  {
    this->shoulder_joint_speed = _arg;
    return *this;
  }
  Type & set__elbow_joint_position(
    const int16_t & _arg)
  {
    this->elbow_joint_position = _arg;
    return *this;
  }
  Type & set__elbow_joint_speed(
    const int16_t & _arg)
  {
    this->elbow_joint_speed = _arg;
    return *this;
  }
  Type & set__wrist_joint_1_position(
    const int16_t & _arg)
  {
    this->wrist_joint_1_position = _arg;
    return *this;
  }
  Type & set__wrist_joint_1_speed(
    const int16_t & _arg)
  {
    this->wrist_joint_1_speed = _arg;
    return *this;
  }
  Type & set__wrist_joint_2_position(
    const int16_t & _arg)
  {
    this->wrist_joint_2_position = _arg;
    return *this;
  }
  Type & set__wrist_joint_2_speed(
    const int16_t & _arg)
  {
    this->wrist_joint_2_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendJointState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendJointState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendJointState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendJointState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendJointState_Request
    std::shared_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendJointState_Request
    std::shared_ptr<node_interface::srv::SendJointState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendJointState_Request_ & other) const
  {
    if (this->state_code != other.state_code) {
      return false;
    }
    if (this->base_joint_position != other.base_joint_position) {
      return false;
    }
    if (this->base_joint_speed != other.base_joint_speed) {
      return false;
    }
    if (this->shoulder_joint_position != other.shoulder_joint_position) {
      return false;
    }
    if (this->shoulder_joint_speed != other.shoulder_joint_speed) {
      return false;
    }
    if (this->elbow_joint_position != other.elbow_joint_position) {
      return false;
    }
    if (this->elbow_joint_speed != other.elbow_joint_speed) {
      return false;
    }
    if (this->wrist_joint_1_position != other.wrist_joint_1_position) {
      return false;
    }
    if (this->wrist_joint_1_speed != other.wrist_joint_1_speed) {
      return false;
    }
    if (this->wrist_joint_2_position != other.wrist_joint_2_position) {
      return false;
    }
    if (this->wrist_joint_2_speed != other.wrist_joint_2_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendJointState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendJointState_Request_

// alias to use template instance with default allocator
using SendJointState_Request =
  node_interface::srv::SendJointState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendJointState_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendJointState_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendJointState_Response_
{
  using Type = SendJointState_Response_<ContainerAllocator>;

  explicit SendJointState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendJointState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendJointState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendJointState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendJointState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendJointState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendJointState_Response
    std::shared_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendJointState_Response
    std::shared_ptr<node_interface::srv::SendJointState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendJointState_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendJointState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendJointState_Response_

// alias to use template instance with default allocator
using SendJointState_Response =
  node_interface::srv::SendJointState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendJointState
{
  using Request = node_interface::srv::SendJointState_Request;
  using Response = node_interface::srv::SendJointState_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_JOINT_STATE__STRUCT_HPP_
