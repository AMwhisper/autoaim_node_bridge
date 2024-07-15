// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:srv/SendClientCustomGraphicFive.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_FIVE__TRAITS_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_FIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/srv/detail/send_client_custom_graphic_five__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'grapic_data_struct'
#include "node_interface/msg/detail/graphic_data_type__traits.hpp"

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendClientCustomGraphicFive_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data_cmd_id
  {
    out << "data_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_cmd_id, out);
    out << ", ";
  }

  // member: send_id
  {
    out << "send_id: ";
    rosidl_generator_traits::value_to_yaml(msg.send_id, out);
    out << ", ";
  }

  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: grapic_data_struct
  {
    if (msg.grapic_data_struct.size() == 0) {
      out << "grapic_data_struct: []";
    } else {
      out << "grapic_data_struct: [";
      size_t pending_items = msg.grapic_data_struct.size();
      for (auto item : msg.grapic_data_struct) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendClientCustomGraphicFive_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data_cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.data_cmd_id, out);
    out << "\n";
  }

  // member: send_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_id: ";
    rosidl_generator_traits::value_to_yaml(msg.send_id, out);
    out << "\n";
  }

  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: grapic_data_struct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.grapic_data_struct.size() == 0) {
      out << "grapic_data_struct: []\n";
    } else {
      out << "grapic_data_struct:\n";
      for (auto item : msg.grapic_data_struct) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendClientCustomGraphicFive_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace node_interface

namespace rosidl_generator_traits
{

[[deprecated("use node_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_interface::srv::SendClientCustomGraphicFive_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendClientCustomGraphicFive_Request & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendClientCustomGraphicFive_Request>()
{
  return "node_interface::srv::SendClientCustomGraphicFive_Request";
}

template<>
inline const char * name<node_interface::srv::SendClientCustomGraphicFive_Request>()
{
  return "node_interface/srv/SendClientCustomGraphicFive_Request";
}

template<>
struct has_fixed_size<node_interface::srv::SendClientCustomGraphicFive_Request>
  : std::integral_constant<bool, has_fixed_size<node_interface::msg::GraphicDataType>::value> {};

template<>
struct has_bounded_size<node_interface::srv::SendClientCustomGraphicFive_Request>
  : std::integral_constant<bool, has_bounded_size<node_interface::msg::GraphicDataType>::value> {};

template<>
struct is_message<node_interface::srv::SendClientCustomGraphicFive_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace node_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendClientCustomGraphicFive_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendClientCustomGraphicFive_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendClientCustomGraphicFive_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace node_interface

namespace rosidl_generator_traits
{

[[deprecated("use node_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const node_interface::srv::SendClientCustomGraphicFive_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::srv::SendClientCustomGraphicFive_Response & msg)
{
  return node_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::srv::SendClientCustomGraphicFive_Response>()
{
  return "node_interface::srv::SendClientCustomGraphicFive_Response";
}

template<>
inline const char * name<node_interface::srv::SendClientCustomGraphicFive_Response>()
{
  return "node_interface/srv/SendClientCustomGraphicFive_Response";
}

template<>
struct has_fixed_size<node_interface::srv::SendClientCustomGraphicFive_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<node_interface::srv::SendClientCustomGraphicFive_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<node_interface::srv::SendClientCustomGraphicFive_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<node_interface::srv::SendClientCustomGraphicFive>()
{
  return "node_interface::srv::SendClientCustomGraphicFive";
}

template<>
inline const char * name<node_interface::srv::SendClientCustomGraphicFive>()
{
  return "node_interface/srv/SendClientCustomGraphicFive";
}

template<>
struct has_fixed_size<node_interface::srv::SendClientCustomGraphicFive>
  : std::integral_constant<
    bool,
    has_fixed_size<node_interface::srv::SendClientCustomGraphicFive_Request>::value &&
    has_fixed_size<node_interface::srv::SendClientCustomGraphicFive_Response>::value
  >
{
};

template<>
struct has_bounded_size<node_interface::srv::SendClientCustomGraphicFive>
  : std::integral_constant<
    bool,
    has_bounded_size<node_interface::srv::SendClientCustomGraphicFive_Request>::value &&
    has_bounded_size<node_interface::srv::SendClientCustomGraphicFive_Response>::value
  >
{
};

template<>
struct is_service<node_interface::srv::SendClientCustomGraphicFive>
  : std::true_type
{
};

template<>
struct is_service_request<node_interface::srv::SendClientCustomGraphicFive_Request>
  : std::true_type
{
};

template<>
struct is_service_response<node_interface::srv::SendClientCustomGraphicFive_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_CLIENT_CUSTOM_GRAPHIC_FIVE__TRAITS_HPP_
