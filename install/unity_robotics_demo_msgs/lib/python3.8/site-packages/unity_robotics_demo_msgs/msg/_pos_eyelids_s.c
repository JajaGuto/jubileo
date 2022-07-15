// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from unity_robotics_demo_msgs:msg/PosEyelids.idl
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
#include "unity_robotics_demo_msgs/msg/detail/pos_eyelids__struct.h"
#include "unity_robotics_demo_msgs/msg/detail/pos_eyelids__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool unity_robotics_demo_msgs__msg__pos_eyelids__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("unity_robotics_demo_msgs.msg._pos_eyelids.PosEyelids", full_classname_dest, 52) == 0);
  }
  unity_robotics_demo_msgs__msg__PosEyelids * ros_message = _ros_message;
  {  // pos_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_up");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_up = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_down");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_down = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * unity_robotics_demo_msgs__msg__pos_eyelids__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PosEyelids */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("unity_robotics_demo_msgs.msg._pos_eyelids");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PosEyelids");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  unity_robotics_demo_msgs__msg__PosEyelids * ros_message = (unity_robotics_demo_msgs__msg__PosEyelids *)raw_ros_message;
  {  // pos_up
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_down
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
