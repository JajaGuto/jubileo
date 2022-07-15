// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_robotics_demo_msgs:msg/UnityColor.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/unity_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
unity_robotics_demo_msgs__msg__UnityColor__init(unity_robotics_demo_msgs__msg__UnityColor * msg)
{
  if (!msg) {
    return false;
  }
  // r
  // g
  // b
  // a
  return true;
}

void
unity_robotics_demo_msgs__msg__UnityColor__fini(unity_robotics_demo_msgs__msg__UnityColor * msg)
{
  if (!msg) {
    return;
  }
  // r
  // g
  // b
  // a
}

unity_robotics_demo_msgs__msg__UnityColor *
unity_robotics_demo_msgs__msg__UnityColor__create()
{
  unity_robotics_demo_msgs__msg__UnityColor * msg = (unity_robotics_demo_msgs__msg__UnityColor *)malloc(sizeof(unity_robotics_demo_msgs__msg__UnityColor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_demo_msgs__msg__UnityColor));
  bool success = unity_robotics_demo_msgs__msg__UnityColor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unity_robotics_demo_msgs__msg__UnityColor__destroy(unity_robotics_demo_msgs__msg__UnityColor * msg)
{
  if (msg) {
    unity_robotics_demo_msgs__msg__UnityColor__fini(msg);
  }
  free(msg);
}


bool
unity_robotics_demo_msgs__msg__UnityColor__Sequence__init(unity_robotics_demo_msgs__msg__UnityColor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unity_robotics_demo_msgs__msg__UnityColor * data = NULL;
  if (size) {
    data = (unity_robotics_demo_msgs__msg__UnityColor *)calloc(size, sizeof(unity_robotics_demo_msgs__msg__UnityColor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_demo_msgs__msg__UnityColor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_demo_msgs__msg__UnityColor__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
unity_robotics_demo_msgs__msg__UnityColor__Sequence__fini(unity_robotics_demo_msgs__msg__UnityColor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unity_robotics_demo_msgs__msg__UnityColor__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

unity_robotics_demo_msgs__msg__UnityColor__Sequence *
unity_robotics_demo_msgs__msg__UnityColor__Sequence__create(size_t size)
{
  unity_robotics_demo_msgs__msg__UnityColor__Sequence * array = (unity_robotics_demo_msgs__msg__UnityColor__Sequence *)malloc(sizeof(unity_robotics_demo_msgs__msg__UnityColor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_demo_msgs__msg__UnityColor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unity_robotics_demo_msgs__msg__UnityColor__Sequence__destroy(unity_robotics_demo_msgs__msg__UnityColor__Sequence * array)
{
  if (array) {
    unity_robotics_demo_msgs__msg__UnityColor__Sequence__fini(array);
  }
  free(array);
}
