// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/supply_projectile_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SupplyProjectileAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: supply_projectile_id
  {
    out << "supply_projectile_id: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_id, out);
    out << ", ";
  }

  // member: supply_robot_id
  {
    out << "supply_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_robot_id, out);
    out << ", ";
  }

  // member: supply_projectile_step
  {
    out << "supply_projectile_step: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_step, out);
    out << ", ";
  }

  // member: supply_projectile_num
  {
    out << "supply_projectile_num: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SupplyProjectileAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: supply_projectile_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_projectile_id: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_id, out);
    out << "\n";
  }

  // member: supply_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_robot_id, out);
    out << "\n";
  }

  // member: supply_projectile_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_projectile_step: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_step, out);
    out << "\n";
  }

  // member: supply_projectile_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_projectile_num: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_projectile_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SupplyProjectileAction & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace node_interface

namespace rosidl_generator_traits
{

[[deprecated("use node_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_interface::msg::SupplyProjectileAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::SupplyProjectileAction & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::SupplyProjectileAction>()
{
  return "node_interface::msg::SupplyProjectileAction";
}

template<>
inline const char * name<node_interface::msg::SupplyProjectileAction>()
{
  return "node_interface/msg/SupplyProjectileAction";
}

template<>
struct has_fixed_size<node_interface::msg::SupplyProjectileAction>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::SupplyProjectileAction>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::SupplyProjectileAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__TRAITS_HPP_
