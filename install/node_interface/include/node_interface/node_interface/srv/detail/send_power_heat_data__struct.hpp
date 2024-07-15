// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendPowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_POWER_HEAT_DATA__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_POWER_HEAT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendPowerHeatData_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendPowerHeatData_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendPowerHeatData_Request_
{
  using Type = SendPowerHeatData_Request_<ContainerAllocator>;

  explicit SendPowerHeatData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_volt = 0;
      this->chassis_current = 0;
      this->chassis_power = 0.0f;
      this->chassis_power_buffer = 0;
      this->shooter_id1_17mm_cooling_heat = 0;
      this->shooter_id2_17mm_cooling_heat = 0;
      this->shooter_id1_42mm_cooling_heat = 0;
    }
  }

  explicit SendPowerHeatData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_volt = 0;
      this->chassis_current = 0;
      this->chassis_power = 0.0f;
      this->chassis_power_buffer = 0;
      this->shooter_id1_17mm_cooling_heat = 0;
      this->shooter_id2_17mm_cooling_heat = 0;
      this->shooter_id1_42mm_cooling_heat = 0;
    }
  }

  // field types and members
  using _chassis_volt_type =
    uint16_t;
  _chassis_volt_type chassis_volt;
  using _chassis_current_type =
    uint16_t;
  _chassis_current_type chassis_current;
  using _chassis_power_type =
    float;
  _chassis_power_type chassis_power;
  using _chassis_power_buffer_type =
    uint16_t;
  _chassis_power_buffer_type chassis_power_buffer;
  using _shooter_id1_17mm_cooling_heat_type =
    uint16_t;
  _shooter_id1_17mm_cooling_heat_type shooter_id1_17mm_cooling_heat;
  using _shooter_id2_17mm_cooling_heat_type =
    uint16_t;
  _shooter_id2_17mm_cooling_heat_type shooter_id2_17mm_cooling_heat;
  using _shooter_id1_42mm_cooling_heat_type =
    uint16_t;
  _shooter_id1_42mm_cooling_heat_type shooter_id1_42mm_cooling_heat;

  // setters for named parameter idiom
  Type & set__chassis_volt(
    const uint16_t & _arg)
  {
    this->chassis_volt = _arg;
    return *this;
  }
  Type & set__chassis_current(
    const uint16_t & _arg)
  {
    this->chassis_current = _arg;
    return *this;
  }
  Type & set__chassis_power(
    const float & _arg)
  {
    this->chassis_power = _arg;
    return *this;
  }
  Type & set__chassis_power_buffer(
    const uint16_t & _arg)
  {
    this->chassis_power_buffer = _arg;
    return *this;
  }
  Type & set__shooter_id1_17mm_cooling_heat(
    const uint16_t & _arg)
  {
    this->shooter_id1_17mm_cooling_heat = _arg;
    return *this;
  }
  Type & set__shooter_id2_17mm_cooling_heat(
    const uint16_t & _arg)
  {
    this->shooter_id2_17mm_cooling_heat = _arg;
    return *this;
  }
  Type & set__shooter_id1_42mm_cooling_heat(
    const uint16_t & _arg)
  {
    this->shooter_id1_42mm_cooling_heat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendPowerHeatData_Request
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendPowerHeatData_Request
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendPowerHeatData_Request_ & other) const
  {
    if (this->chassis_volt != other.chassis_volt) {
      return false;
    }
    if (this->chassis_current != other.chassis_current) {
      return false;
    }
    if (this->chassis_power != other.chassis_power) {
      return false;
    }
    if (this->chassis_power_buffer != other.chassis_power_buffer) {
      return false;
    }
    if (this->shooter_id1_17mm_cooling_heat != other.shooter_id1_17mm_cooling_heat) {
      return false;
    }
    if (this->shooter_id2_17mm_cooling_heat != other.shooter_id2_17mm_cooling_heat) {
      return false;
    }
    if (this->shooter_id1_42mm_cooling_heat != other.shooter_id1_42mm_cooling_heat) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendPowerHeatData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendPowerHeatData_Request_

// alias to use template instance with default allocator
using SendPowerHeatData_Request =
  node_interface::srv::SendPowerHeatData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendPowerHeatData_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendPowerHeatData_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendPowerHeatData_Response_
{
  using Type = SendPowerHeatData_Response_<ContainerAllocator>;

  explicit SendPowerHeatData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendPowerHeatData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendPowerHeatData_Response
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendPowerHeatData_Response
    std::shared_ptr<node_interface::srv::SendPowerHeatData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendPowerHeatData_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendPowerHeatData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendPowerHeatData_Response_

// alias to use template instance with default allocator
using SendPowerHeatData_Response =
  node_interface::srv::SendPowerHeatData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendPowerHeatData
{
  using Request = node_interface::srv::SendPowerHeatData_Request;
  using Response = node_interface::srv::SendPowerHeatData_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_POWER_HEAT_DATA__STRUCT_HPP_
