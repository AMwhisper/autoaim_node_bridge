// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendIcraBuffDebuffZoneStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendIcraBuffDebuffZoneStatus_Request_
{
  using Type = SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator>;

  explicit SendIcraBuffDebuffZoneStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1_zone_status = 0;
      this->f1_zone_buff_debuff_status = 0;
      this->f2_zone_status = 0;
      this->f2_zone_buff_debuff_status = 0;
      this->f3_zone_status = 0;
      this->f3_zone_buff_debuff_status = 0;
      this->f4_zone_status = 0;
      this->f4_zone_buff_debuff_status = 0;
      this->f5_zone_status = 0;
      this->f5_zone_buff_debuff_status = 0;
      this->f6_zone_status = 0;
      this->f6_zone_buff_debuff_status = 0;
      this->red1_bullet_left = 0;
      this->red2_bullet_left = 0;
      this->blue1_bullet_left = 0;
      this->blue2_bullet_left = 0;
    }
  }

  explicit SendIcraBuffDebuffZoneStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->f1_zone_status = 0;
      this->f1_zone_buff_debuff_status = 0;
      this->f2_zone_status = 0;
      this->f2_zone_buff_debuff_status = 0;
      this->f3_zone_status = 0;
      this->f3_zone_buff_debuff_status = 0;
      this->f4_zone_status = 0;
      this->f4_zone_buff_debuff_status = 0;
      this->f5_zone_status = 0;
      this->f5_zone_buff_debuff_status = 0;
      this->f6_zone_status = 0;
      this->f6_zone_buff_debuff_status = 0;
      this->red1_bullet_left = 0;
      this->red2_bullet_left = 0;
      this->blue1_bullet_left = 0;
      this->blue2_bullet_left = 0;
    }
  }

  // field types and members
  using _f1_zone_status_type =
    uint8_t;
  _f1_zone_status_type f1_zone_status;
  using _f1_zone_buff_debuff_status_type =
    uint8_t;
  _f1_zone_buff_debuff_status_type f1_zone_buff_debuff_status;
  using _f2_zone_status_type =
    uint8_t;
  _f2_zone_status_type f2_zone_status;
  using _f2_zone_buff_debuff_status_type =
    uint8_t;
  _f2_zone_buff_debuff_status_type f2_zone_buff_debuff_status;
  using _f3_zone_status_type =
    uint8_t;
  _f3_zone_status_type f3_zone_status;
  using _f3_zone_buff_debuff_status_type =
    uint8_t;
  _f3_zone_buff_debuff_status_type f3_zone_buff_debuff_status;
  using _f4_zone_status_type =
    uint8_t;
  _f4_zone_status_type f4_zone_status;
  using _f4_zone_buff_debuff_status_type =
    uint8_t;
  _f4_zone_buff_debuff_status_type f4_zone_buff_debuff_status;
  using _f5_zone_status_type =
    uint8_t;
  _f5_zone_status_type f5_zone_status;
  using _f5_zone_buff_debuff_status_type =
    uint8_t;
  _f5_zone_buff_debuff_status_type f5_zone_buff_debuff_status;
  using _f6_zone_status_type =
    uint8_t;
  _f6_zone_status_type f6_zone_status;
  using _f6_zone_buff_debuff_status_type =
    uint8_t;
  _f6_zone_buff_debuff_status_type f6_zone_buff_debuff_status;
  using _red1_bullet_left_type =
    uint16_t;
  _red1_bullet_left_type red1_bullet_left;
  using _red2_bullet_left_type =
    uint16_t;
  _red2_bullet_left_type red2_bullet_left;
  using _blue1_bullet_left_type =
    uint16_t;
  _blue1_bullet_left_type blue1_bullet_left;
  using _blue2_bullet_left_type =
    uint16_t;
  _blue2_bullet_left_type blue2_bullet_left;

  // setters for named parameter idiom
  Type & set__f1_zone_status(
    const uint8_t & _arg)
  {
    this->f1_zone_status = _arg;
    return *this;
  }
  Type & set__f1_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f1_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f2_zone_status(
    const uint8_t & _arg)
  {
    this->f2_zone_status = _arg;
    return *this;
  }
  Type & set__f2_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f2_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f3_zone_status(
    const uint8_t & _arg)
  {
    this->f3_zone_status = _arg;
    return *this;
  }
  Type & set__f3_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f3_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f4_zone_status(
    const uint8_t & _arg)
  {
    this->f4_zone_status = _arg;
    return *this;
  }
  Type & set__f4_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f4_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f5_zone_status(
    const uint8_t & _arg)
  {
    this->f5_zone_status = _arg;
    return *this;
  }
  Type & set__f5_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f5_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__f6_zone_status(
    const uint8_t & _arg)
  {
    this->f6_zone_status = _arg;
    return *this;
  }
  Type & set__f6_zone_buff_debuff_status(
    const uint8_t & _arg)
  {
    this->f6_zone_buff_debuff_status = _arg;
    return *this;
  }
  Type & set__red1_bullet_left(
    const uint16_t & _arg)
  {
    this->red1_bullet_left = _arg;
    return *this;
  }
  Type & set__red2_bullet_left(
    const uint16_t & _arg)
  {
    this->red2_bullet_left = _arg;
    return *this;
  }
  Type & set__blue1_bullet_left(
    const uint16_t & _arg)
  {
    this->blue1_bullet_left = _arg;
    return *this;
  }
  Type & set__blue2_bullet_left(
    const uint16_t & _arg)
  {
    this->blue2_bullet_left = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Request
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Request
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendIcraBuffDebuffZoneStatus_Request_ & other) const
  {
    if (this->f1_zone_status != other.f1_zone_status) {
      return false;
    }
    if (this->f1_zone_buff_debuff_status != other.f1_zone_buff_debuff_status) {
      return false;
    }
    if (this->f2_zone_status != other.f2_zone_status) {
      return false;
    }
    if (this->f2_zone_buff_debuff_status != other.f2_zone_buff_debuff_status) {
      return false;
    }
    if (this->f3_zone_status != other.f3_zone_status) {
      return false;
    }
    if (this->f3_zone_buff_debuff_status != other.f3_zone_buff_debuff_status) {
      return false;
    }
    if (this->f4_zone_status != other.f4_zone_status) {
      return false;
    }
    if (this->f4_zone_buff_debuff_status != other.f4_zone_buff_debuff_status) {
      return false;
    }
    if (this->f5_zone_status != other.f5_zone_status) {
      return false;
    }
    if (this->f5_zone_buff_debuff_status != other.f5_zone_buff_debuff_status) {
      return false;
    }
    if (this->f6_zone_status != other.f6_zone_status) {
      return false;
    }
    if (this->f6_zone_buff_debuff_status != other.f6_zone_buff_debuff_status) {
      return false;
    }
    if (this->red1_bullet_left != other.red1_bullet_left) {
      return false;
    }
    if (this->red2_bullet_left != other.red2_bullet_left) {
      return false;
    }
    if (this->blue1_bullet_left != other.blue1_bullet_left) {
      return false;
    }
    if (this->blue2_bullet_left != other.blue2_bullet_left) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendIcraBuffDebuffZoneStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendIcraBuffDebuffZoneStatus_Request_

// alias to use template instance with default allocator
using SendIcraBuffDebuffZoneStatus_Request =
  node_interface::srv::SendIcraBuffDebuffZoneStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendIcraBuffDebuffZoneStatus_Response_
{
  using Type = SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator>;

  explicit SendIcraBuffDebuffZoneStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendIcraBuffDebuffZoneStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Response
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendIcraBuffDebuffZoneStatus_Response
    std::shared_ptr<node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendIcraBuffDebuffZoneStatus_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendIcraBuffDebuffZoneStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendIcraBuffDebuffZoneStatus_Response_

// alias to use template instance with default allocator
using SendIcraBuffDebuffZoneStatus_Response =
  node_interface::srv::SendIcraBuffDebuffZoneStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendIcraBuffDebuffZoneStatus
{
  using Request = node_interface::srv::SendIcraBuffDebuffZoneStatus_Request;
  using Response = node_interface::srv::SendIcraBuffDebuffZoneStatus_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_ICRA_BUFF_DEBUFF_ZONE_STATUS__STRUCT_HPP_
