// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_HPP_
#define NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__msg__SupplyProjectileAction __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__msg__SupplyProjectileAction __declspec(deprecated)
#endif

namespace node_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SupplyProjectileAction_
{
  using Type = SupplyProjectileAction_<ContainerAllocator>;

  explicit SupplyProjectileAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_projectile_id = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_step = 0;
      this->supply_projectile_num = 0;
    }
  }

  explicit SupplyProjectileAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supply_projectile_id = 0;
      this->supply_robot_id = 0;
      this->supply_projectile_step = 0;
      this->supply_projectile_num = 0;
    }
  }

  // field types and members
  using _supply_projectile_id_type =
    uint8_t;
  _supply_projectile_id_type supply_projectile_id;
  using _supply_robot_id_type =
    uint8_t;
  _supply_robot_id_type supply_robot_id;
  using _supply_projectile_step_type =
    uint8_t;
  _supply_projectile_step_type supply_projectile_step;
  using _supply_projectile_num_type =
    uint8_t;
  _supply_projectile_num_type supply_projectile_num;

  // setters for named parameter idiom
  Type & set__supply_projectile_id(
    const uint8_t & _arg)
  {
    this->supply_projectile_id = _arg;
    return *this;
  }
  Type & set__supply_robot_id(
    const uint8_t & _arg)
  {
    this->supply_robot_id = _arg;
    return *this;
  }
  Type & set__supply_projectile_step(
    const uint8_t & _arg)
  {
    this->supply_projectile_step = _arg;
    return *this;
  }
  Type & set__supply_projectile_num(
    const uint8_t & _arg)
  {
    this->supply_projectile_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::msg::SupplyProjectileAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::msg::SupplyProjectileAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::SupplyProjectileAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::msg::SupplyProjectileAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__msg__SupplyProjectileAction
    std::shared_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__msg__SupplyProjectileAction
    std::shared_ptr<node_interface::msg::SupplyProjectileAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SupplyProjectileAction_ & other) const
  {
    if (this->supply_projectile_id != other.supply_projectile_id) {
      return false;
    }
    if (this->supply_robot_id != other.supply_robot_id) {
      return false;
    }
    if (this->supply_projectile_step != other.supply_projectile_step) {
      return false;
    }
    if (this->supply_projectile_num != other.supply_projectile_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const SupplyProjectileAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SupplyProjectileAction_

// alias to use template instance with default allocator
using SupplyProjectileAction =
  node_interface::msg::SupplyProjectileAction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace node_interface

#endif  // NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_HPP_
