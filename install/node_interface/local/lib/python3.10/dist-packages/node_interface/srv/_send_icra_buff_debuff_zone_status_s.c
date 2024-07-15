// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:srv/SendIcraBuffDebuffZoneStatus.idl
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
#include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__struct.h"
#include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_icra_buff_debuff_zone_status__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[91];
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
    assert(strncmp("node_interface.srv._send_icra_buff_debuff_zone_status.SendIcraBuffDebuffZoneStatus_Request", full_classname_dest, 90) == 0);
  }
  node_interface__srv__SendIcraBuffDebuffZoneStatus_Request * ros_message = _ros_message;
  {  // f1_zone_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f1_zone_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f1_zone_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f1_zone_buff_debuff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f1_zone_buff_debuff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f1_zone_buff_debuff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f2_zone_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f2_zone_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f2_zone_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f2_zone_buff_debuff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f2_zone_buff_debuff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f2_zone_buff_debuff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f3_zone_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f3_zone_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f3_zone_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f3_zone_buff_debuff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f3_zone_buff_debuff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f3_zone_buff_debuff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f4_zone_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f4_zone_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f4_zone_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f4_zone_buff_debuff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f4_zone_buff_debuff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f4_zone_buff_debuff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f5_zone_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f5_zone_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f5_zone_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f5_zone_buff_debuff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f5_zone_buff_debuff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f5_zone_buff_debuff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f6_zone_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f6_zone_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f6_zone_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f6_zone_buff_debuff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "f6_zone_buff_debuff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f6_zone_buff_debuff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red1_bullet_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "red1_bullet_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red1_bullet_left = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red2_bullet_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "red2_bullet_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red2_bullet_left = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue1_bullet_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue1_bullet_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue1_bullet_left = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue2_bullet_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue2_bullet_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue2_bullet_left = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__srv__send_icra_buff_debuff_zone_status__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendIcraBuffDebuffZoneStatus_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_icra_buff_debuff_zone_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendIcraBuffDebuffZoneStatus_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendIcraBuffDebuffZoneStatus_Request * ros_message = (node_interface__srv__SendIcraBuffDebuffZoneStatus_Request *)raw_ros_message;
  {  // f1_zone_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f1_zone_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f1_zone_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f1_zone_buff_debuff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f1_zone_buff_debuff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f1_zone_buff_debuff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f2_zone_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f2_zone_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f2_zone_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f2_zone_buff_debuff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f2_zone_buff_debuff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f2_zone_buff_debuff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f3_zone_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f3_zone_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f3_zone_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f3_zone_buff_debuff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f3_zone_buff_debuff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f3_zone_buff_debuff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f4_zone_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f4_zone_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f4_zone_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f4_zone_buff_debuff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f4_zone_buff_debuff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f4_zone_buff_debuff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f5_zone_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f5_zone_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f5_zone_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f5_zone_buff_debuff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f5_zone_buff_debuff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f5_zone_buff_debuff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f6_zone_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f6_zone_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f6_zone_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f6_zone_buff_debuff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f6_zone_buff_debuff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f6_zone_buff_debuff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red1_bullet_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red1_bullet_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red1_bullet_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red2_bullet_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red2_bullet_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red2_bullet_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue1_bullet_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue1_bullet_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue1_bullet_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue2_bullet_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue2_bullet_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue2_bullet_left", field);
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
// #include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__struct.h"
// already included above
// #include "node_interface/srv/detail/send_icra_buff_debuff_zone_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_icra_buff_debuff_zone_status__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[92];
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
    assert(strncmp("node_interface.srv._send_icra_buff_debuff_zone_status.SendIcraBuffDebuffZoneStatus_Response", full_classname_dest, 91) == 0);
  }
  node_interface__srv__SendIcraBuffDebuffZoneStatus_Response * ros_message = _ros_message;
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
PyObject * node_interface__srv__send_icra_buff_debuff_zone_status__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendIcraBuffDebuffZoneStatus_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_icra_buff_debuff_zone_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendIcraBuffDebuffZoneStatus_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendIcraBuffDebuffZoneStatus_Response * ros_message = (node_interface__srv__SendIcraBuffDebuffZoneStatus_Response *)raw_ros_message;
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
