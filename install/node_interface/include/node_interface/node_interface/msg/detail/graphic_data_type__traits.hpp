// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from node_interface:msg/GraphicDataType.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__TRAITS_HPP_
#define NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "node_interface/msg/detail/graphic_data_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace node_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphicDataType & msg,
  std::ostream & out)
{
  out << "{";
  // member: graphic_name
  {
    if (msg.graphic_name.size() == 0) {
      out << "graphic_name: []";
    } else {
      out << "graphic_name: [";
      size_t pending_items = msg.graphic_name.size();
      for (auto item : msg.graphic_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operate_tpye
  {
    out << "operate_tpye: ";
    rosidl_generator_traits::value_to_yaml(msg.operate_tpye, out);
    out << ", ";
  }

  // member: graphic_tpye
  {
    out << "graphic_tpye: ";
    rosidl_generator_traits::value_to_yaml(msg.graphic_tpye, out);
    out << ", ";
  }

  // member: layer
  {
    out << "layer: ";
    rosidl_generator_traits::value_to_yaml(msg.layer, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: start_angle
  {
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << ", ";
  }

  // member: end_angle
  {
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: start_x
  {
    out << "start_x: ";
    rosidl_generator_traits::value_to_yaml(msg.start_x, out);
    out << ", ";
  }

  // member: start_y
  {
    out << "start_y: ";
    rosidl_generator_traits::value_to_yaml(msg.start_y, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: end_x
  {
    out << "end_x: ";
    rosidl_generator_traits::value_to_yaml(msg.end_x, out);
    out << ", ";
  }

  // member: end_y
  {
    out << "end_y: ";
    rosidl_generator_traits::value_to_yaml(msg.end_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphicDataType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: graphic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.graphic_name.size() == 0) {
      out << "graphic_name: []\n";
    } else {
      out << "graphic_name:\n";
      for (auto item : msg.graphic_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: operate_tpye
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operate_tpye: ";
    rosidl_generator_traits::value_to_yaml(msg.operate_tpye, out);
    out << "\n";
  }

  // member: graphic_tpye
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graphic_tpye: ";
    rosidl_generator_traits::value_to_yaml(msg.graphic_tpye, out);
    out << "\n";
  }

  // member: layer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer: ";
    rosidl_generator_traits::value_to_yaml(msg.layer, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: start_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << "\n";
  }

  // member: end_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: start_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_x: ";
    rosidl_generator_traits::value_to_yaml(msg.start_x, out);
    out << "\n";
  }

  // member: start_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_y: ";
    rosidl_generator_traits::value_to_yaml(msg.start_y, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: end_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_x: ";
    rosidl_generator_traits::value_to_yaml(msg.end_x, out);
    out << "\n";
  }

  // member: end_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_y: ";
    rosidl_generator_traits::value_to_yaml(msg.end_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphicDataType & msg, bool use_flow_style = false)
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
  const node_interface::msg::GraphicDataType & msg,
  std::ostream & out, size_t indentation = 0)
{
  node_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use node_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const node_interface::msg::GraphicDataType & msg)
{
  return node_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<node_interface::msg::GraphicDataType>()
{
  return "node_interface::msg::GraphicDataType";
}

template<>
inline const char * name<node_interface::msg::GraphicDataType>()
{
  return "node_interface/msg/GraphicDataType";
}

template<>
struct has_fixed_size<node_interface::msg::GraphicDataType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<node_interface::msg::GraphicDataType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<node_interface::msg::GraphicDataType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NODE_INTERFACE__MSG__DETAIL__GRAPHIC_DATA_TYPE__TRAITS_HPP_
