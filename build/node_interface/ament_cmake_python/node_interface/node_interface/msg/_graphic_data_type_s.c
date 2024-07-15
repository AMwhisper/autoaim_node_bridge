// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:msg/GraphicDataType.idl
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
#include "node_interface/msg/detail/graphic_data_type__struct.h"
#include "node_interface/msg/detail/graphic_data_type__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__msg__graphic_data_type__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("node_interface.msg._graphic_data_type.GraphicDataType", full_classname_dest, 53) == 0);
  }
  node_interface__msg__GraphicDataType * ros_message = _ros_message;
  {  // graphic_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "graphic_name");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->graphic_name;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // operate_tpye
    PyObject * field = PyObject_GetAttrString(_pymsg, "operate_tpye");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operate_tpye = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // graphic_tpye
    PyObject * field = PyObject_GetAttrString(_pymsg, "graphic_tpye");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->graphic_tpye = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // layer
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layer = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // start_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_angle = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // end_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_angle = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->width = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // start_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_x = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // start_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_y = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radius = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // end_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_x = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // end_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_y = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__msg__graphic_data_type__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GraphicDataType */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.msg._graphic_data_type");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GraphicDataType");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__msg__GraphicDataType * ros_message = (node_interface__msg__GraphicDataType *)raw_ros_message;
  {  // graphic_name
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "graphic_name");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->graphic_name[0]);
    memcpy(dst, src, 3 * sizeof(uint8_t));
    Py_DECREF(field);
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
  {  // graphic_tpye
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->graphic_tpye);
    {
      int rc = PyObject_SetAttrString(_pymessage, "graphic_tpye", field);
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
  {  // color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_angle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_angle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->end_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radius
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->end_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->end_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
