// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:srv/SendGameRobotStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "node_interface/srv/detail/send_game_robot_status__struct.h"
#include "node_interface/srv/detail/send_game_robot_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_game_robot_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("node_interface.srv._send_game_robot_status.SendGameRobotStatus_Request", full_classname_dest, 70) == 0);
  }
  node_interface__srv__SendGameRobotStatus_Request * ros_message = _ros_message;
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robot_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remain_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_17mm_cooling_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_17mm_cooling_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_17mm_cooling_rate = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_17mm_cooling_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_17mm_cooling_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_17mm_cooling_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_17mm_speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_17mm_speed_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_17mm_speed_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id2_17mm_cooling_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id2_17mm_cooling_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id2_17mm_cooling_rate = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id2_17mm_cooling_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id2_17mm_cooling_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id2_17mm_cooling_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id2_17mm_speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id2_17mm_speed_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id2_17mm_speed_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_42mm_cooling_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_42mm_cooling_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_42mm_cooling_rate = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_42mm_cooling_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_42mm_cooling_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_42mm_cooling_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_id1_42mm_speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_id1_42mm_speed_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_id1_42mm_speed_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chassis_power_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_power_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_power_limit = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mains_power_gimbal_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "mains_power_gimbal_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mains_power_gimbal_output = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mains_power_chassis_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "mains_power_chassis_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mains_power_chassis_output = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mains_power_shooter_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "mains_power_shooter_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mains_power_shooter_output = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__srv__send_game_robot_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendGameRobotStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_game_robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendGameRobotStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendGameRobotStatus_Request * ros_message = (node_interface__srv__SendGameRobotStatus_Request *)raw_ros_message;
  {  // robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remain_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_17mm_cooling_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_17mm_cooling_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_17mm_cooling_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_17mm_cooling_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_17mm_cooling_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_17mm_cooling_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_17mm_speed_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_17mm_speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_17mm_speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id2_17mm_cooling_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id2_17mm_cooling_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id2_17mm_cooling_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id2_17mm_cooling_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id2_17mm_cooling_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id2_17mm_cooling_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id2_17mm_speed_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id2_17mm_speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id2_17mm_speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_42mm_cooling_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_42mm_cooling_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_42mm_cooling_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_42mm_cooling_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_42mm_cooling_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_42mm_cooling_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_id1_42mm_speed_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_id1_42mm_speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_id1_42mm_speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_power_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chassis_power_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_power_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mains_power_gimbal_output
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mains_power_gimbal_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mains_power_gimbal_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mains_power_chassis_output
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mains_power_chassis_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mains_power_chassis_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mains_power_shooter_output
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mains_power_shooter_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mains_power_shooter_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "node_interface/srv/detail/send_game_robot_status__struct.h"
// already included above
// #include "node_interface/srv/detail/send_game_robot_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_game_robot_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("node_interface.srv._send_game_robot_status.SendGameRobotStatus_Response", full_classname_dest, 71) == 0);
  }
  node_interface__srv__SendGameRobotStatus_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->result, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__srv__send_game_robot_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendGameRobotStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_game_robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendGameRobotStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendGameRobotStatus_Response * ros_message = (node_interface__srv__SendGameRobotStatus_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->result.data,
      strlen(ros_message->result.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
