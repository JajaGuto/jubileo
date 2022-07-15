// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_robotics_demo_msgs:msg/Audio.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/audio__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
unity_robotics_demo_msgs__msg__Audio__init(unity_robotics_demo_msgs__msg__Audio * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    unity_robotics_demo_msgs__msg__Audio__fini(msg);
    return false;
  }
  return true;
}

void
unity_robotics_demo_msgs__msg__Audio__fini(unity_robotics_demo_msgs__msg__Audio * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
}

unity_robotics_demo_msgs__msg__Audio *
unity_robotics_demo_msgs__msg__Audio__create()
{
  unity_robotics_demo_msgs__msg__Audio * msg = (unity_robotics_demo_msgs__msg__Audio *)malloc(sizeof(unity_robotics_demo_msgs__msg__Audio));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_demo_msgs__msg__Audio));
  bool success = unity_robotics_demo_msgs__msg__Audio__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unity_robotics_demo_msgs__msg__Audio__destroy(unity_robotics_demo_msgs__msg__Audio * msg)
{
  if (msg) {
    unity_robotics_demo_msgs__msg__Audio__fini(msg);
  }
  free(msg);
}


bool
unity_robotics_demo_msgs__msg__Audio__Sequence__init(unity_robotics_demo_msgs__msg__Audio__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unity_robotics_demo_msgs__msg__Audio * data = NULL;
  if (size) {
    data = (unity_robotics_demo_msgs__msg__Audio *)calloc(size, sizeof(unity_robotics_demo_msgs__msg__Audio));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_demo_msgs__msg__Audio__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_demo_msgs__msg__Audio__fini(&data[i - 1]);
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
unity_robotics_demo_msgs__msg__Audio__Sequence__fini(unity_robotics_demo_msgs__msg__Audio__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unity_robotics_demo_msgs__msg__Audio__fini(&array->data[i]);
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

unity_robotics_demo_msgs__msg__Audio__Sequence *
unity_robotics_demo_msgs__msg__Audio__Sequence__create(size_t size)
{
  unity_robotics_demo_msgs__msg__Audio__Sequence * array = (unity_robotics_demo_msgs__msg__Audio__Sequence *)malloc(sizeof(unity_robotics_demo_msgs__msg__Audio__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_demo_msgs__msg__Audio__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unity_robotics_demo_msgs__msg__Audio__Sequence__destroy(unity_robotics_demo_msgs__msg__Audio__Sequence * array)
{
  if (array) {
    unity_robotics_demo_msgs__msg__Audio__Sequence__fini(array);
  }
  free(array);
}
