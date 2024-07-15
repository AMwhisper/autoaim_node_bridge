// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendHealthPoint.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendHealthPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendHealthPoint_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendHealthPoint_Request_
{
  using Type = SendHealthPoint_Request_<ContainerAllocator>;

  explicit SendHealthPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_1_robot_hp = 0;
      this->red_2_robot_hp = 0;
      this->red_3_robot_hp = 0;
      this->red_4_robot_hp = 0;
      this->red_5_robot_hp = 0;
      this->red_7_robot_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_robot_hp = 0;
      this->blue_2_robot_hp = 0;
      this->blue_3_robot_hp = 0;
      this->blue_4_robot_hp = 0;
      this->blue_5_robot_hp = 0;
      this->blue_7_robot_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
    }
  }

  explicit SendHealthPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_1_robot_hp = 0;
      this->red_2_robot_hp = 0;
      this->red_3_robot_hp = 0;
      this->red_4_robot_hp = 0;
      this->red_5_robot_hp = 0;
      this->red_7_robot_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_robot_hp = 0;
      this->blue_2_robot_hp = 0;
      this->blue_3_robot_hp = 0;
      this->blue_4_robot_hp = 0;
      this->blue_5_robot_hp = 0;
      this->blue_7_robot_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
    }
  }

  // field types and members
  using _red_1_robot_hp_type =
    uint16_t;
  _red_1_robot_hp_type red_1_robot_hp;
  using _red_2_robot_hp_type =
    uint16_t;
  _red_2_robot_hp_type red_2_robot_hp;
  using _red_3_robot_hp_type =
    uint16_t;
  _red_3_robot_hp_type red_3_robot_hp;
  using _red_4_robot_hp_type =
    uint16_t;
  _red_4_robot_hp_type red_4_robot_hp;
  using _red_5_robot_hp_type =
    uint16_t;
  _red_5_robot_hp_type red_5_robot_hp;
  using _red_7_robot_hp_type =
    uint16_t;
  _red_7_robot_hp_type red_7_robot_hp;
  using _red_outpost_hp_type =
    uint16_t;
  _red_outpost_hp_type red_outpost_hp;
  using _red_base_hp_type =
    uint16_t;
  _red_base_hp_type red_base_hp;
  using _blue_1_robot_hp_type =
    uint16_t;
  _blue_1_robot_hp_type blue_1_robot_hp;
  using _blue_2_robot_hp_type =
    uint16_t;
  _blue_2_robot_hp_type blue_2_robot_hp;
  using _blue_3_robot_hp_type =
    uint16_t;
  _blue_3_robot_hp_type blue_3_robot_hp;
  using _blue_4_robot_hp_type =
    uint16_t;
  _blue_4_robot_hp_type blue_4_robot_hp;
  using _blue_5_robot_hp_type =
    uint16_t;
  _blue_5_robot_hp_type blue_5_robot_hp;
  using _blue_7_robot_hp_type =
    uint16_t;
  _blue_7_robot_hp_type blue_7_robot_hp;
  using _blue_outpost_hp_type =
    uint16_t;
  _blue_outpost_hp_type blue_outpost_hp;
  using _blue_base_hp_type =
    uint16_t;
  _blue_base_hp_type blue_base_hp;

  // setters for named parameter idiom
  Type & set__red_1_robot_hp(
    const uint16_t & _arg)
  {
    this->red_1_robot_hp = _arg;
    return *this;
  }
  Type & set__red_2_robot_hp(
    const uint16_t & _arg)
  {
    this->red_2_robot_hp = _arg;
    return *this;
  }
  Type & set__red_3_robot_hp(
    const uint16_t & _arg)
  {
    this->red_3_robot_hp = _arg;
    return *this;
  }
  Type & set__red_4_robot_hp(
    const uint16_t & _arg)
  {
    this->red_4_robot_hp = _arg;
    return *this;
  }
  Type & set__red_5_robot_hp(
    const uint16_t & _arg)
  {
    this->red_5_robot_hp = _arg;
    return *this;
  }
  Type & set__red_7_robot_hp(
    const uint16_t & _arg)
  {
    this->red_7_robot_hp = _arg;
    return *this;
  }
  Type & set__red_outpost_hp(
    const uint16_t & _arg)
  {
    this->red_outpost_hp = _arg;
    return *this;
  }
  Type & set__red_base_hp(
    const uint16_t & _arg)
  {
    this->red_base_hp = _arg;
    return *this;
  }
  Type & set__blue_1_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_1_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_2_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_2_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_3_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_3_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_4_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_4_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_5_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_5_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_7_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_7_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_outpost_hp(
    const uint16_t & _arg)
  {
    this->blue_outpost_hp = _arg;
    return *this;
  }
  Type & set__blue_base_hp(
    const uint16_t & _arg)
  {
    this->blue_base_hp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendHealthPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendHealthPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendHealthPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendHealthPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendHealthPoint_Request
    std::shared_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendHealthPoint_Request
    std::shared_ptr<node_interface::srv::SendHealthPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendHealthPoint_Request_ & other) const
  {
    if (this->red_1_robot_hp != other.red_1_robot_hp) {
      return false;
    }
    if (this->red_2_robot_hp != other.red_2_robot_hp) {
      return false;
    }
    if (this->red_3_robot_hp != other.red_3_robot_hp) {
      return false;
    }
    if (this->red_4_robot_hp != other.red_4_robot_hp) {
      return false;
    }
    if (this->red_5_robot_hp != other.red_5_robot_hp) {
      return false;
    }
    if (this->red_7_robot_hp != other.red_7_robot_hp) {
      return false;
    }
    if (this->red_outpost_hp != other.red_outpost_hp) {
      return false;
    }
    if (this->red_base_hp != other.red_base_hp) {
      return false;
    }
    if (this->blue_1_robot_hp != other.blue_1_robot_hp) {
      return false;
    }
    if (this->blue_2_robot_hp != other.blue_2_robot_hp) {
      return false;
    }
    if (this->blue_3_robot_hp != other.blue_3_robot_hp) {
      return false;
    }
    if (this->blue_4_robot_hp != other.blue_4_robot_hp) {
      return false;
    }
    if (this->blue_5_robot_hp != other.blue_5_robot_hp) {
      return false;
    }
    if (this->blue_7_robot_hp != other.blue_7_robot_hp) {
      return false;
    }
    if (this->blue_outpost_hp != other.blue_outpost_hp) {
      return false;
    }
    if (this->blue_base_hp != other.blue_base_hp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendHealthPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendHealthPoint_Request_

// alias to use template instance with default allocator
using SendHealthPoint_Request =
  node_interface::srv::SendHealthPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendHealthPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendHealthPoint_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendHealthPoint_Response_
{
  using Type = SendHealthPoint_Response_<ContainerAllocator>;

  explicit SendHealthPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendHealthPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendHealthPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendHealthPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendHealthPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendHealthPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendHealthPoint_Response
    std::shared_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendHealthPoint_Response
    std::shared_ptr<node_interface::srv::SendHealthPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendHealthPoint_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendHealthPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendHealthPoint_Response_

// alias to use template instance with default allocator
using SendHealthPoint_Response =
  node_interface::srv::SendHealthPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendHealthPoint
{
  using Request = node_interface::srv::SendHealthPoint_Request;
  using Response = node_interface::srv::SendHealthPoint_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_HEALTH_POINT__STRUCT_HPP_
