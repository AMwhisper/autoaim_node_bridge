// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from node_interface:srv/SendClientCustomGraphicDouble.idl
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
#include "node_interface/srv/detail/send_client_custom_graphic_double__struct.h"
#include "node_interface/srv/detail/send_client_custom_graphic_double__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "node_interface/msg/detail/graphic_data_type__functions.h"
// end nested array functions include
bool node_interface__msg__graphic_data_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * node_interface__msg__graphic_data_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_client_custom_graphic_double__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("node_interface.srv._send_client_custom_graphic_double.SendClientCustomGraphicDouble_Request", full_classname_dest, 91) == 0);
  }
  node_interface__srv__SendClientCustomGraphicDouble_Request * ros_message = _ros_message;
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
  {  // grapic_data_struct
    PyObject * field = PyObject_GetAttrString(_pymsg, "grapic_data_struct");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'grapic_data_struct'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 2;
    node_interface__msg__GraphicDataType * dest = ros_message->grapic_data_struct;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!node_interface__msg__graphic_data_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * node_interface__srv__send_client_custom_graphic_double__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendClientCustomGraphicDouble_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_client_custom_graphic_double");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendClientCustomGraphicDouble_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendClientCustomGraphicDouble_Request * ros_message = (node_interface__srv__SendClientCustomGraphicDouble_Request *)raw_ros_message;
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
  {  // grapic_data_struct
    PyObject * field = NULL;
    size_t size = 2;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    node_interface__msg__GraphicDataType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->grapic_data_struct[i]);
      PyObject * pyitem = node_interface__msg__graphic_data_type__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "grapic_data_struct", field);
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
// #include "node_interface/srv/detail/send_client_custom_graphic_double__struct.h"
// already included above
// #include "node_interface/srv/detail/send_client_custom_graphic_double__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool node_interface__srv__send_client_custom_graphic_double__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[93];
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
    assert(strncmp("node_interface.srv._send_client_custom_graphic_double.SendClientCustomGraphicDouble_Response", full_classname_dest, 92) == 0);
  }
  node_interface__srv__SendClientCustomGraphicDouble_Response * ros_message = _ros_message;
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
PyObject * node_interface__srv__send_client_custom_graphic_double__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SendClientCustomGraphicDouble_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("node_interface.srv._send_client_custom_graphic_double");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SendClientCustomGraphicDouble_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  node_interface__srv__SendClientCustomGraphicDouble_Response * ros_message = (node_interface__srv__SendClientCustomGraphicDouble_Response *)raw_ros_message;
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
