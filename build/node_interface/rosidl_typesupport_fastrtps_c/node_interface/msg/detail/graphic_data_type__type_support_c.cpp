// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:msg/GraphicDataType.idl
// generated code does not contain a copyright notice
#include "node_interface/msg/detail/graphic_data_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/msg/detail/graphic_data_type__struct.h"
#include "node_interface/msg/detail/graphic_data_type__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GraphicDataType__ros_msg_type = node_interface__msg__GraphicDataType;

static bool _GraphicDataType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GraphicDataType__ros_msg_type * ros_message = static_cast<const _GraphicDataType__ros_msg_type *>(untyped_ros_message);
  // Field name: graphic_name
  {
    size_t size = 3;
    auto array_ptr = ros_message->graphic_name;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: operate_tpye
  {
    cdr << ros_message->operate_tpye;
  }

  // Field name: graphic_tpye
  {
    cdr << ros_message->graphic_tpye;
  }

  // Field name: layer
  {
    cdr << ros_message->layer;
  }

  // Field name: color
  {
    cdr << ros_message->color;
  }

  // Field name: start_angle
  {
    cdr << ros_message->start_angle;
  }

  // Field name: end_angle
  {
    cdr << ros_message->end_angle;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: start_x
  {
    cdr << ros_message->start_x;
  }

  // Field name: start_y
  {
    cdr << ros_message->start_y;
  }

  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  // Field name: end_x
  {
    cdr << ros_message->end_x;
  }

  // Field name: end_y
  {
    cdr << ros_message->end_y;
  }

  return true;
}

static bool _GraphicDataType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GraphicDataType__ros_msg_type * ros_message = static_cast<_GraphicDataType__ros_msg_type *>(untyped_ros_message);
  // Field name: graphic_name
  {
    size_t size = 3;
    auto array_ptr = ros_message->graphic_name;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: operate_tpye
  {
    cdr >> ros_message->operate_tpye;
  }

  // Field name: graphic_tpye
  {
    cdr >> ros_message->graphic_tpye;
  }

  // Field name: layer
  {
    cdr >> ros_message->layer;
  }

  // Field name: color
  {
    cdr >> ros_message->color;
  }

  // Field name: start_angle
  {
    cdr >> ros_message->start_angle;
  }

  // Field name: end_angle
  {
    cdr >> ros_message->end_angle;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: start_x
  {
    cdr >> ros_message->start_x;
  }

  // Field name: start_y
  {
    cdr >> ros_message->start_y;
  }

  // Field name: radius
  {
    cdr >> ros_message->radius;
  }

  // Field name: end_x
  {
    cdr >> ros_message->end_x;
  }

  // Field name: end_y
  {
    cdr >> ros_message->end_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__msg__GraphicDataType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GraphicDataType__ros_msg_type * ros_message = static_cast<const _GraphicDataType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name graphic_name
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->graphic_name;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operate_tpye
  {
    size_t item_size = sizeof(ros_message->operate_tpye);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name graphic_tpye
  {
    size_t item_size = sizeof(ros_message->graphic_tpye);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name layer
  {
    size_t item_size = sizeof(ros_message->layer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name color
  {
    size_t item_size = sizeof(ros_message->color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_angle
  {
    size_t item_size = sizeof(ros_message->start_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_angle
  {
    size_t item_size = sizeof(ros_message->end_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_x
  {
    size_t item_size = sizeof(ros_message->start_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_y
  {
    size_t item_size = sizeof(ros_message->start_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_x
  {
    size_t item_size = sizeof(ros_message->end_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_y
  {
    size_t item_size = sizeof(ros_message->end_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GraphicDataType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__msg__GraphicDataType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__msg__GraphicDataType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: graphic_name
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: operate_tpye
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: graphic_tpye
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: layer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__msg__GraphicDataType;
    is_plain =
      (
      offsetof(DataType, end_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GraphicDataType__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__msg__GraphicDataType(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GraphicDataType = {
  "node_interface::msg",
  "GraphicDataType",
  _GraphicDataType__cdr_serialize,
  _GraphicDataType__cdr_deserialize,
  _GraphicDataType__get_serialized_size,
  _GraphicDataType__max_serialized_size
};

static rosidl_message_type_support_t _GraphicDataType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GraphicDataType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, msg, GraphicDataType)() {
  return &_GraphicDataType__type_support;
}

#if defined(__cplusplus)
}
#endif
