// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:msg/DebugDataType.idl
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
#include "node_interface/msg/detail/debug_data_type__struct.h"
#include "node_interface/msg/detail/debug_data_type__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__msg__debug_data_type__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("node_interface.msg._debug_data_type.DebugDataType", full_classname_dest, 49) == 0);
  }
  node_interface__msg__DebugDataType * ros_message = _ros_message;
  {  // debug1
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // debug2
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // debug3
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // debug4
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // debug5
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug5 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // debug6
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug6 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // debug7
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug7 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // debug8
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->debug8 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__msg__debug_data_type__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DebugDataType */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.msg._debug_data_type");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DebugDataType");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__msg__DebugDataType * ros_message = (node_interface__msg__DebugDataType *)raw_ros_message;
  {  // debug1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug5
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug7
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug8
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->debug8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
