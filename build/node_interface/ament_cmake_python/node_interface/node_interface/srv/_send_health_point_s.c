// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:srv/SendHealthPoint.idl
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
#include "node_interface/srv/detail/send_health_point__struct.h"
#include "node_interface/srv/detail/send_health_point__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_health_point__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("node_interface.srv._send_health_point.SendHealthPoint_Request", full_classname_dest, 61) == 0);
  }
  node_interface__srv__SendHealthPoint_Request * ros_message = _ros_message;
  {  // red_1_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_1_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_1_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_2_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_2_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_2_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_3_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_3_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_3_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_4_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_4_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_4_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_5_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_5_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_5_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_7_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_7_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_7_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_1_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_1_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_1_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_2_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_2_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_2_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_3_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_3_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_3_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_4_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_4_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_4_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_5_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_5_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_5_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_7_robot_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_7_robot_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_7_robot_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_outpost_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_outpost_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_outpost_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_base_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_base_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_base_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__srv__send_health_point__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendHealthPoint_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_health_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendHealthPoint_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendHealthPoint_Request * ros_message = (node_interface__srv__SendHealthPoint_Request *)raw_ros_message;
  {  // red_1_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_1_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_1_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_2_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_2_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_2_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_3_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_3_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_3_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_4_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_4_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_4_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_5_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_5_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_5_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_7_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_7_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_7_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_base_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_1_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_1_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_1_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_2_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_2_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_2_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_3_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_3_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_3_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_4_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_4_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_4_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_5_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_5_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_5_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_7_robot_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_7_robot_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_7_robot_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_outpost_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_outpost_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_outpost_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_base_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_base_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_base_hp", field);
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
// #include "node_interface/srv/detail/send_health_point__struct.h"
// already included above
// #include "node_interface/srv/detail/send_health_point__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_health_point__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("node_interface.srv._send_health_point.SendHealthPoint_Response", full_classname_dest, 62) == 0);
  }
  node_interface__srv__SendHealthPoint_Response * ros_message = _ros_message;
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
PyObject * node_interface__srv__send_health_point__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendHealthPoint_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_health_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendHealthPoint_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendHealthPoint_Response * ros_message = (node_interface__srv__SendHealthPoint_Response *)raw_ros_message;
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
