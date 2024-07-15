// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:srv/SendDartClientCmds.idl
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
#include "node_interface/srv/detail/send_dart_client_cmds__struct.h"
#include "node_interface/srv/detail/send_dart_client_cmds__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_dart_client_cmds__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("node_interface.srv._send_dart_client_cmds.SendDartClientCmds_Request", full_classname_dest, 68) == 0);
  }
  node_interface__srv__SendDartClientCmds_Request * ros_message = _ros_message;
  {  // dart_launch_opening_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "dart_launch_opening_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dart_launch_opening_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dart_attack_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "dart_attack_target");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dart_attack_target = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_change_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_change_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_change_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // first_dart_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "first_dart_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->first_dart_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // second_dart_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "second_dart_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->second_dart_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // third_dart_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "third_dart_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->third_dart_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fourth_dart_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fourth_dart_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fourth_dart_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_dart_launch_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_dart_launch_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_dart_launch_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operate_launch_cmd_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "operate_launch_cmd_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operate_launch_cmd_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__srv__send_dart_client_cmds__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendDartClientCmds_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_dart_client_cmds");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendDartClientCmds_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendDartClientCmds_Request * ros_message = (node_interface__srv__SendDartClientCmds_Request *)raw_ros_message;
  {  // dart_launch_opening_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dart_launch_opening_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dart_launch_opening_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dart_attack_target
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dart_attack_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dart_attack_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_change_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_change_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_change_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // first_dart_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->first_dart_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "first_dart_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // second_dart_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->second_dart_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "second_dart_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // third_dart_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->third_dart_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "third_dart_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fourth_dart_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fourth_dart_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fourth_dart_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_dart_launch_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->last_dart_launch_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_dart_launch_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operate_launch_cmd_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operate_launch_cmd_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operate_launch_cmd_time", field);
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
// #include "node_interface/srv/detail/send_dart_client_cmds__struct.h"
// already included above
// #include "node_interface/srv/detail/send_dart_client_cmds__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_dart_client_cmds__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("node_interface.srv._send_dart_client_cmds.SendDartClientCmds_Response", full_classname_dest, 69) == 0);
  }
  node_interface__srv__SendDartClientCmds_Response * ros_message = _ros_message;
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
PyObject * node_interface__srv__send_dart_client_cmds__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendDartClientCmds_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_dart_client_cmds");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendDartClientCmds_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendDartClientCmds_Response * ros_message = (node_interface__srv__SendDartClientCmds_Response *)raw_ros_message;
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
