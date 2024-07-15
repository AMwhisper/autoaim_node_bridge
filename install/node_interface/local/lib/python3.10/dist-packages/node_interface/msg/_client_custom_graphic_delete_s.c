// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:msg/ClientCustomGraphicDelete.idl
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
#include "node_interface/msg/detail/client_custom_graphic_delete__struct.h"
#include "node_interface/msg/detail/client_custom_graphic_delete__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__msg__client_custom_graphic_delete__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("node_interface.msg._client_custom_graphic_delete.ClientCustomGraphicDelete", full_classname_dest, 74) == 0);
  }
  node_interface__msg__ClientCustomGraphicDelete * ros_message = _ros_message;
  {  // data_cmd_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_cmd_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data_cmd_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // send_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "send_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->send_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // receiver_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "receiver_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->receiver_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operate_tpye
    PyObject * field = PyObject_GetAttrString(_pymsg, "operate_tpye");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operate_tpye = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // layer
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layer = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__msg__client_custom_graphic_delete__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ClientCustomGraphicDelete */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.msg._client_custom_graphic_delete");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ClientCustomGraphicDelete");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__msg__ClientCustomGraphicDelete * ros_message = (node_interface__msg__ClientCustomGraphicDelete *)raw_ros_message;
  {  // data_cmd_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data_cmd_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_cmd_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // send_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->send_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "send_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // receiver_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->receiver_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "receiver_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // operate_tpye
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operate_tpye);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operate_tpye", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // layer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->layer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
