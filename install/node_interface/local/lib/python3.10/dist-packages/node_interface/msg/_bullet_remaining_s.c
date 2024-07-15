// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:msg/BulletRemaining.idl
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
#include "node_interface/msg/detail/bullet_remaining__struct.h"
#include "node_interface/msg/detail/bullet_remaining__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__msg__bullet_remaining__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("node_interface.msg._bullet_remaining.BulletRemaining", full_classname_dest, 52) == 0);
  }
  node_interface__msg__BulletRemaining * ros_message = _ros_message;
  {  // bullet_remaining_num_17mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "bullet_remaining_num_17mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bullet_remaining_num_17mm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bullet_remaining_num_42mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "bullet_remaining_num_42mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bullet_remaining_num_42mm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coin_remaining_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "coin_remaining_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coin_remaining_num = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__msg__bullet_remaining__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BulletRemaining */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.msg._bullet_remaining");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BulletRemaining");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__msg__BulletRemaining * ros_message = (node_interface__msg__BulletRemaining *)raw_ros_message;
  {  // bullet_remaining_num_17mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bullet_remaining_num_17mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bullet_remaining_num_17mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bullet_remaining_num_42mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bullet_remaining_num_42mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bullet_remaining_num_42mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coin_remaining_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->coin_remaining_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coin_remaining_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
