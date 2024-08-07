// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:msg/JointCalibration.idl
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
#include "node_interface/msg/detail/joint_calibration__struct.h"
#include "node_interface/msg/detail/joint_calibration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__msg__joint_calibration__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("node_interface.msg._joint_calibration.JointCalibration", full_classname_dest, 54) == 0);
  }
  node_interface__msg__JointCalibration * ros_message = _ros_message;
  {  // state_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_code = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // base_joint_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_joint_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_joint_position = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // base_joint_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_joint_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->base_joint_speed = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // shoulder_joint_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "shoulder_joint_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shoulder_joint_position = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // shoulder_joint_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "shoulder_joint_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shoulder_joint_speed = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elbow_joint_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow_joint_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elbow_joint_position = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elbow_joint_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "elbow_joint_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->elbow_joint_speed = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_joint_1_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_joint_1_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_joint_1_position = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_joint_1_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_joint_1_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_joint_1_speed = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_joint_2_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_joint_2_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_joint_2_position = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // wrist_joint_2_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrist_joint_2_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wrist_joint_2_speed = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__msg__joint_calibration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointCalibration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.msg._joint_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointCalibration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__msg__JointCalibration * ros_message = (node_interface__msg__JointCalibration *)raw_ros_message;
  {  // state_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_joint_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->base_joint_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_joint_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_joint_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->base_joint_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_joint_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shoulder_joint_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shoulder_joint_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shoulder_joint_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shoulder_joint_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->shoulder_joint_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shoulder_joint_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow_joint_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elbow_joint_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow_joint_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elbow_joint_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->elbow_joint_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elbow_joint_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_joint_1_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_joint_1_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_joint_1_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_joint_1_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_joint_1_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_joint_1_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_joint_2_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_joint_2_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_joint_2_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wrist_joint_2_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wrist_joint_2_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrist_joint_2_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
