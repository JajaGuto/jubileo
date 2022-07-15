// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from unity_robotics_demo_msgs:msg/TargetsReached.idl
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
#include "unity_robotics_demo_msgs/msg/detail/targets_reached__struct.h"
#include "unity_robotics_demo_msgs/msg/detail/targets_reached__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool unity_robotics_demo_msgs__msg__targets_reached__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("unity_robotics_demo_msgs.msg._targets_reached.TargetsReached", full_classname_dest, 60) == 0);
  }
  unity_robotics_demo_msgs__msg__TargetsReached * ros_message = _ros_message;
  {  // reached
    PyObject * field = PyObject_GetAttrString(_pymsg, "reached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reached = (Py_True == field);
    Py_DECREF(field);
  }
  {  // joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->joint, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * unity_robotics_demo_msgs__msg__targets_reached__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TargetsReached */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("unity_robotics_demo_msgs.msg._targets_reached");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TargetsReached");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  unity_robotics_demo_msgs__msg__TargetsReached * ros_message = (unity_robotics_demo_msgs__msg__TargetsReached *)raw_ros_message;
  {  // reached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->joint.data,
      strlen(ros_message->joint.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
