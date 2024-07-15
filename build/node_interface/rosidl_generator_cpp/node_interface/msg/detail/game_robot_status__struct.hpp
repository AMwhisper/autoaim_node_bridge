// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__GameRobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__GameRobotStatus __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameRobotStatus_
{
  using Type = GameRobotStatus_<ContainerAllocator>;

  explicit GameRobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->robot_level = 0;
      this->remain_hp = 0;
      this->max_hp = 0;
      this->shooter_id1_17mm_cooling_rate = 0;
      this->shooter_id1_17mm_cooling_limit = 0;
      this->shooter_id1_17mm_speed_limit = 0;
      this->shooter_id2_17mm_cooling_rate = 0;
      this->shooter_id2_17mm_cooling_limit = 0;
      this->shooter_id2_17mm_speed_limit = 0;
      this->shooter_id1_42mm_cooling_rate = 0;
      this->shooter_id1_42mm_cooling_limit = 0;
      this->shooter_id1_42mm_speed_limit = 0;
      this->chassis_power_limit = 0;
      this->mains_power_gimbal_output = 0;
      this->mains_power_chassis_output = 0;
      this->mains_power_shooter_output = 0;
    }
  }

  explicit GameRobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->robot_level = 0;
      this->remain_hp = 0;
      this->max_hp = 0;
      this->shooter_id1_17mm_cooling_rate = 0;
      this->shooter_id1_17mm_cooling_limit = 0;
      this->shooter_id1_17mm_speed_limit = 0;
      this->shooter_id2_17mm_cooling_rate = 0;
      this->shooter_id2_17mm_cooling_limit = 0;
      this->shooter_id2_17mm_speed_limit = 0;
      this->shooter_id1_42mm_cooling_rate = 0;
      this->shooter_id1_42mm_cooling_limit = 0;
      this->shooter_id1_42mm_speed_limit = 0;
      this->chassis_power_limit = 0;
      this->mains_power_gimbal_output = 0;
      this->mains_power_chassis_output = 0;
      this->mains_power_shooter_output = 0;
    }
  }

  // field types and members
  using _robot_id_type =
    uint8_t;
  _robot_id_type robot_id;
  using _robot_level_type =
    uint8_t;
  _robot_level_type robot_level;
  using _remain_hp_type =
    uint16_t;
  _remain_hp_type remain_hp;
  using _max_hp_type =
    uint16_t;
  _max_hp_type max_hp;
  using _shooter_id1_17mm_cooling_rate_type =
    uint16_t;
  _shooter_id1_17mm_cooling_rate_type shooter_id1_17mm_cooling_rate;
  using _shooter_id1_17mm_cooling_limit_type =
    uint16_t;
  _shooter_id1_17mm_cooling_limit_type shooter_id1_17mm_cooling_limit;
  using _shooter_id1_17mm_speed_limit_type =
    uint16_t;
  _shooter_id1_17mm_speed_limit_type shooter_id1_17mm_speed_limit;
  using _shooter_id2_17mm_cooling_rate_type =
    uint16_t;
  _shooter_id2_17mm_cooling_rate_type shooter_id2_17mm_cooling_rate;
  using _shooter_id2_17mm_cooling_limit_type =
    uint16_t;
  _shooter_id2_17mm_cooling_limit_type shooter_id2_17mm_cooling_limit;
  using _shooter_id2_17mm_speed_limit_type =
    uint16_t;
  _shooter_id2_17mm_speed_limit_type shooter_id2_17mm_speed_limit;
  using _shooter_id1_42mm_cooling_rate_type =
    uint16_t;
  _shooter_id1_42mm_cooling_rate_type shooter_id1_42mm_cooling_rate;
  using _shooter_id1_42mm_cooling_limit_type =
    uint16_t;
  _shooter_id1_42mm_cooling_limit_type shooter_id1_42mm_cooling_limit;
  using _shooter_id1_42mm_speed_limit_type =
    uint16_t;
  _shooter_id1_42mm_speed_limit_type shooter_id1_42mm_speed_limit;
  using _chassis_power_limit_type =
    uint16_t;
  _chassis_power_limit_type chassis_power_limit;
  using _mains_power_gimbal_output_type =
    uint8_t;
  _mains_power_gimbal_output_type mains_power_gimbal_output;
  using _mains_power_chassis_output_type =
    uint8_t;
  _mains_power_chassis_output_type mains_power_chassis_output;
  using _mains_power_shooter_output_type =
    uint8_t;
  _mains_power_shooter_output_type mains_power_shooter_output;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint8_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__robot_level(
    const uint8_t & _arg)
  {
    this->robot_level = _arg;
    return *this;
  }
  Type & set__remain_hp(
    const uint16_t & _arg)
  {
    this->remain_hp = _arg;
    return *this;
  }
  Type & set__max_hp(
    const uint16_t & _arg)
  {
    this->max_hp = _arg;
    return *this;
  }
  Type & set__shooter_id1_17mm_cooling_rate(
    const uint16_t & _arg)
  {
    this->shooter_id1_17mm_cooling_rate = _arg;
    return *this;
  }
  Type & set__shooter_id1_17mm_cooling_limit(
    const uint16_t & _arg)
  {
    this->shooter_id1_17mm_cooling_limit = _arg;
    return *this;
  }
  Type & set__shooter_id1_17mm_speed_limit(
    const uint16_t & _arg)
  {
    this->shooter_id1_17mm_speed_limit = _arg;
    return *this;
  }
  Type & set__shooter_id2_17mm_cooling_rate(
    const uint16_t & _arg)
  {
    this->shooter_id2_17mm_cooling_rate = _arg;
    return *this;
  }
  Type & set__shooter_id2_17mm_cooling_limit(
    const uint16_t & _arg)
  {
    this->shooter_id2_17mm_cooling_limit = _arg;
    return *this;
  }
  Type & set__shooter_id2_17mm_speed_limit(
    const uint16_t & _arg)
  {
    this->shooter_id2_17mm_speed_limit = _arg;
    return *this;
  }
  Type & set__shooter_id1_42mm_cooling_rate(
    const uint16_t & _arg)
  {
    this->shooter_id1_42mm_cooling_rate = _arg;
    return *this;
  }
  Type & set__shooter_id1_42mm_cooling_limit(
    const uint16_t & _arg)
  {
    this->shooter_id1_42mm_cooling_limit = _arg;
    return *this;
  }
  Type & set__shooter_id1_42mm_speed_limit(
    const uint16_t & _arg)
  {
    this->shooter_id1_42mm_speed_limit = _arg;
    return *this;
  }
  Type & set__chassis_power_limit(
    const uint16_t & _arg)
  {
    this->chassis_power_limit = _arg;
    return *this;
  }
  Type & set__mains_power_gimbal_output(
    const uint8_t & _arg)
  {
    this->mains_power_gimbal_output = _arg;
    return *this;
  }
  Type & set__mains_power_chassis_output(
    const uint8_t & _arg)
  {
    this->mains_power_chassis_output = _arg;
    return *this;
  }
  Type & set__mains_power_shooter_output(
    const uint8_t & _arg)
  {
    this->mains_power_shooter_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::GameRobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::GameRobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::GameRobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::GameRobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__GameRobotStatus
    std::shared_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__GameRobotStatus
    std::shared_ptr<node_interface::msg::GameRobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameRobotStatus_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->robot_level != other.robot_level) {
      return false;
    }
    if (this->remain_hp != other.remain_hp) {
      return false;
    }
    if (this->max_hp != other.max_hp) {
      return false;
    }
    if (this->shooter_id1_17mm_cooling_rate != other.shooter_id1_17mm_cooling_rate) {
      return false;
    }
    if (this->shooter_id1_17mm_cooling_limit != other.shooter_id1_17mm_cooling_limit) {
      return false;
    }
    if (this->shooter_id1_17mm_speed_limit != other.shooter_id1_17mm_speed_limit) {
      return false;
    }
    if (this->shooter_id2_17mm_cooling_rate != other.shooter_id2_17mm_cooling_rate) {
      return false;
    }
    if (this->shooter_id2_17mm_cooling_limit != other.shooter_id2_17mm_cooling_limit) {
      return false;
    }
    if (this->shooter_id2_17mm_speed_limit != other.shooter_id2_17mm_speed_limit) {
      return false;
    }
    if (this->shooter_id1_42mm_cooling_rate != other.shooter_id1_42mm_cooling_rate) {
      return false;
    }
    if (this->shooter_id1_42mm_cooling_limit != other.shooter_id1_42mm_cooling_limit) {
      return false;
    }
    if (this->shooter_id1_42mm_speed_limit != other.shooter_id1_42mm_speed_limit) {
      return false;
    }
    if (this->chassis_power_limit != other.chassis_power_limit) {
      return false;
    }
    if (this->mains_power_gimbal_output != other.mains_power_gimbal_output) {
      return false;
    }
    if (this->mains_power_chassis_output != other.mains_power_chassis_output) {
      return false;
    }
    if (this->mains_power_shooter_output != other.mains_power_shooter_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameRobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameRobotStatus_

// alias to use template instance with default allocator
using GameRobotStatus =
  node_interface::msg::GameRobotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_HPP_
