// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:srv/SendSupplyProjectileAction.idl
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
#include "node_interface/srv/detail/send_supply_projectile_action__struct.h"
#include "node_interface/srv/detail/send_supply_projectile_action__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_supply_projectile_action__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[85];
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
    assert(strncmp("node_interface.srv._send_supply_projectile_action.SendSupplyProjectileAction_Request", full_classname_dest, 84) == 0);
  }
  node_interface__srv__SendSupplyProjectileAction_Request * ros_message = _ros_message;
  {  // supply_projectile_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_projectile_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_projectile_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_robot_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_projectile_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_projectile_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_projectile_step = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_projectile_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_projectile_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_projectile_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__srv__send_supply_projectile_action__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendSupplyProjectileAction_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_supply_projectile_action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendSupplyProjectileAction_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendSupplyProjectileAction_Request * ros_message = (node_interface__srv__SendSupplyProjectileAction_Request *)raw_ros_message;
  {  // supply_projectile_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_projectile_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_projectile_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_projectile_step
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_projectile_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_projectile_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_projectile_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_projectile_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_projectile_num", field);
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
// #include "node_interface/srv/detail/send_supply_projectile_action__struct.h"
// already included above
// #include "node_interface/srv/detail/send_supply_projectile_action__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_supply_projectile_action__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[86];
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
    assert(strncmp("node_interface.srv._send_supply_projectile_action.SendSupplyProjectileAction_Response", full_classname_dest, 85) == 0);
  }
  node_interface__srv__SendSupplyProjectileAction_Response * ros_message = _ros_message;
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
PyObject * node_interface__srv__send_supply_projectile_action__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendSupplyProjectileAction_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_supply_projectile_action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendSupplyProjectileAction_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendSupplyProjectileAction_Response * ros_message = (node_interface__srv__SendSupplyProjectileAction_Response *)raw_ros_message;
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
