// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from node_interface:srv/SendJointCalibration.idl
// generated code does not contain a copyright notice
#include "node_interface/srv/detail/send_joint_calibration__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/srv/detail/send_joint_calibration__struct.h"
#include "node_interface/srv/detail/send_joint_calibration__functions.h"
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


using _SendJointCalibration_Request__ros_msg_type = node_interface__srv__SendJointCalibration_Request;

static bool _SendJointCalibration_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendJointCalibration_Request__ros_msg_type * ros_message = static_cast<const _SendJointCalibration_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: state_code
  {
    cdr << ros_message->state_code;
  }

  // Field name: base_joint_position
  {
    cdr << ros_message->base_joint_position;
  }

  // Field name: base_joint_speed
  {
    cdr << ros_message->base_joint_speed;
  }

  // Field name: shoulder_joint_position
  {
    cdr << ros_message->shoulder_joint_position;
  }

  // Field name: shoulder_joint_speed
  {
    cdr << ros_message->shoulder_joint_speed;
  }

  // Field name: elbow_joint_position
  {
    cdr << ros_message->elbow_joint_position;
  }

  // Field name: elbow_joint_speed
  {
    cdr << ros_message->elbow_joint_speed;
  }

  // Field name: wrist_joint_1_position
  {
    cdr << ros_message->wrist_joint_1_position;
  }

  // Field name: wrist_joint_1_speed
  {
    cdr << ros_message->wrist_joint_1_speed;
  }

  // Field name: wrist_joint_2_position
  {
    cdr << ros_message->wrist_joint_2_position;
  }

  // Field name: wrist_joint_2_speed
  {
    cdr << ros_message->wrist_joint_2_speed;
  }

  return true;
}

static bool _SendJointCalibration_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendJointCalibration_Request__ros_msg_type * ros_message = static_cast<_SendJointCalibration_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: state_code
  {
    cdr >> ros_message->state_code;
  }

  // Field name: base_joint_position
  {
    cdr >> ros_message->base_joint_position;
  }

  // Field name: base_joint_speed
  {
    cdr >> ros_message->base_joint_speed;
  }

  // Field name: shoulder_joint_position
  {
    cdr >> ros_message->shoulder_joint_position;
  }

  // Field name: shoulder_joint_speed
  {
    cdr >> ros_message->shoulder_joint_speed;
  }

  // Field name: elbow_joint_position
  {
    cdr >> ros_message->elbow_joint_position;
  }

  // Field name: elbow_joint_speed
  {
    cdr >> ros_message->elbow_joint_speed;
  }

  // Field name: wrist_joint_1_position
  {
    cdr >> ros_message->wrist_joint_1_position;
  }

  // Field name: wrist_joint_1_speed
  {
    cdr >> ros_message->wrist_joint_1_speed;
  }

  // Field name: wrist_joint_2_position
  {
    cdr >> ros_message->wrist_joint_2_position;
  }

  // Field name: wrist_joint_2_speed
  {
    cdr >> ros_message->wrist_joint_2_speed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__srv__SendJointCalibration_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendJointCalibration_Request__ros_msg_type * ros_message = static_cast<const _SendJointCalibration_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state_code
  {
    size_t item_size = sizeof(ros_message->state_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_joint_position
  {
    size_t item_size = sizeof(ros_message->base_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_joint_speed
  {
    size_t item_size = sizeof(ros_message->base_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder_joint_position
  {
    size_t item_size = sizeof(ros_message->shoulder_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shoulder_joint_speed
  {
    size_t item_size = sizeof(ros_message->shoulder_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_joint_position
  {
    size_t item_size = sizeof(ros_message->elbow_joint_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elbow_joint_speed
  {
    size_t item_size = sizeof(ros_message->elbow_joint_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_1_position
  {
    size_t item_size = sizeof(ros_message->wrist_joint_1_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_1_speed
  {
    size_t item_size = sizeof(ros_message->wrist_joint_1_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_2_position
  {
    size_t item_size = sizeof(ros_message->wrist_joint_2_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrist_joint_2_speed
  {
    size_t item_size = sizeof(ros_message->wrist_joint_2_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SendJointCalibration_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__srv__SendJointCalibration_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__srv__SendJointCalibration_Request(
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

  // member: state_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: base_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: base_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shoulder_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shoulder_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: elbow_joint_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: elbow_joint_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_1_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_1_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_2_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: wrist_joint_2_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__srv__SendJointCalibration_Request;
    is_plain =
      (
      offsetof(DataType, wrist_joint_2_speed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SendJointCalibration_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__srv__SendJointCalibration_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SendJointCalibration_Request = {
  "node_interface::srv",
  "SendJointCalibration_Request",
  _SendJointCalibration_Request__cdr_serialize,
  _SendJointCalibration_Request__cdr_deserialize,
  _SendJointCalibration_Request__get_serialized_size,
  _SendJointCalibration_Request__max_serialized_size
};

static rosidl_message_type_support_t _SendJointCalibration_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendJointCalibration_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendJointCalibration_Request)() {
  return &_SendJointCalibration_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "node_interface/srv/detail/send_joint_calibration__struct.h"
// already included above
// #include "node_interface/srv/detail/send_joint_calibration__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // result
#include "rosidl_runtime_c/string_functions.h"  // result

// forward declare type support functions


using _SendJointCalibration_Response__ros_msg_type = node_interface__srv__SendJointCalibration_Response;

static bool _SendJointCalibration_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendJointCalibration_Response__ros_msg_type * ros_message = static_cast<const _SendJointCalibration_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    const rosidl_runtime_c__String * str = &ros_message->result;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SendJointCalibration_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendJointCalibration_Response__ros_msg_type * ros_message = static_cast<_SendJointCalibration_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result.data) {
      rosidl_runtime_c__String__init(&ros_message->result);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t get_serialized_size_node_interface__srv__SendJointCalibration_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendJointCalibration_Response__ros_msg_type * ros_message = static_cast<const _SendJointCalibration_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SendJointCalibration_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_node_interface__srv__SendJointCalibration_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_node_interface
size_t max_serialized_size_node_interface__srv__SendJointCalibration_Response(
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

  // member: result
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = node_interface__srv__SendJointCalibration_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SendJointCalibration_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_node_interface__srv__SendJointCalibration_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SendJointCalibration_Response = {
  "node_interface::srv",
  "SendJointCalibration_Response",
  _SendJointCalibration_Response__cdr_serialize,
  _SendJointCalibration_Response__cdr_deserialize,
  _SendJointCalibration_Response__get_serialized_size,
  _SendJointCalibration_Response__max_serialized_size
};

static rosidl_message_type_support_t _SendJointCalibration_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendJointCalibration_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendJointCalibration_Response)() {
  return &_SendJointCalibration_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "node_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "node_interface/srv/send_joint_calibration.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SendJointCalibration__callbacks = {
  "node_interface::srv",
  "SendJointCalibration",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendJointCalibration_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendJointCalibration_Response)(),
};

static rosidl_service_type_support_t SendJointCalibration__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SendJointCalibration__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, node_interface, srv, SendJointCalibration)() {
  return &SendJointCalibration__handle;
}

#if defined(__cplusplus)
}
#endif
