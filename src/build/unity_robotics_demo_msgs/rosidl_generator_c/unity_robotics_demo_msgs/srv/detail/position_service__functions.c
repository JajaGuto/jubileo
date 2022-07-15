// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_robotics_demo_msgs:srv/PositionService.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/srv/detail/position_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `input`
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__functions.h"

bool
unity_robotics_demo_msgs__srv__PositionService_Request__init(unity_robotics_demo_msgs__srv__PositionService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!unity_robotics_demo_msgs__msg__PosRot__init(&msg->input)) {
    unity_robotics_demo_msgs__srv__PositionService_Request__fini(msg);
    return false;
  }
  return true;
}

void
unity_robotics_demo_msgs__srv__PositionService_Request__fini(unity_robotics_demo_msgs__srv__PositionService_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
  unity_robotics_demo_msgs__msg__PosRot__fini(&msg->input);
}

unity_robotics_demo_msgs__srv__PositionService_Request *
unity_robotics_demo_msgs__srv__PositionService_Request__create()
{
  unity_robotics_demo_msgs__srv__PositionService_Request * msg = (unity_robotics_demo_msgs__srv__PositionService_Request *)malloc(sizeof(unity_robotics_demo_msgs__srv__PositionService_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_demo_msgs__srv__PositionService_Request));
  bool success = unity_robotics_demo_msgs__srv__PositionService_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unity_robotics_demo_msgs__srv__PositionService_Request__destroy(unity_robotics_demo_msgs__srv__PositionService_Request * msg)
{
  if (msg) {
    unity_robotics_demo_msgs__srv__PositionService_Request__fini(msg);
  }
  free(msg);
}


bool
unity_robotics_demo_msgs__srv__PositionService_Request__Sequence__init(unity_robotics_demo_msgs__srv__PositionService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unity_robotics_demo_msgs__srv__PositionService_Request * data = NULL;
  if (size) {
    data = (unity_robotics_demo_msgs__srv__PositionService_Request *)calloc(size, sizeof(unity_robotics_demo_msgs__srv__PositionService_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_demo_msgs__srv__PositionService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_demo_msgs__srv__PositionService_Request__fini(&data[i - 1]);
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
unity_robotics_demo_msgs__srv__PositionService_Request__Sequence__fini(unity_robotics_demo_msgs__srv__PositionService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unity_robotics_demo_msgs__srv__PositionService_Request__fini(&array->data[i]);
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

unity_robotics_demo_msgs__srv__PositionService_Request__Sequence *
unity_robotics_demo_msgs__srv__PositionService_Request__Sequence__create(size_t size)
{
  unity_robotics_demo_msgs__srv__PositionService_Request__Sequence * array = (unity_robotics_demo_msgs__srv__PositionService_Request__Sequence *)malloc(sizeof(unity_robotics_demo_msgs__srv__PositionService_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_demo_msgs__srv__PositionService_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unity_robotics_demo_msgs__srv__PositionService_Request__Sequence__destroy(unity_robotics_demo_msgs__srv__PositionService_Request__Sequence * array)
{
  if (array) {
    unity_robotics_demo_msgs__srv__PositionService_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `output`
// already included above
// #include "unity_robotics_demo_msgs/msg/detail/pos_rot__functions.h"

bool
unity_robotics_demo_msgs__srv__PositionService_Response__init(unity_robotics_demo_msgs__srv__PositionService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output
  if (!unity_robotics_demo_msgs__msg__PosRot__init(&msg->output)) {
    unity_robotics_demo_msgs__srv__PositionService_Response__fini(msg);
    return false;
  }
  return true;
}

void
unity_robotics_demo_msgs__srv__PositionService_Response__fini(unity_robotics_demo_msgs__srv__PositionService_Response * msg)
{
  if (!msg) {
    return;
  }
  // output
  unity_robotics_demo_msgs__msg__PosRot__fini(&msg->output);
}

unity_robotics_demo_msgs__srv__PositionService_Response *
unity_robotics_demo_msgs__srv__PositionService_Response__create()
{
  unity_robotics_demo_msgs__srv__PositionService_Response * msg = (unity_robotics_demo_msgs__srv__PositionService_Response *)malloc(sizeof(unity_robotics_demo_msgs__srv__PositionService_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_demo_msgs__srv__PositionService_Response));
  bool success = unity_robotics_demo_msgs__srv__PositionService_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unity_robotics_demo_msgs__srv__PositionService_Response__destroy(unity_robotics_demo_msgs__srv__PositionService_Response * msg)
{
  if (msg) {
    unity_robotics_demo_msgs__srv__PositionService_Response__fini(msg);
  }
  free(msg);
}


bool
unity_robotics_demo_msgs__srv__PositionService_Response__Sequence__init(unity_robotics_demo_msgs__srv__PositionService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unity_robotics_demo_msgs__srv__PositionService_Response * data = NULL;
  if (size) {
    data = (unity_robotics_demo_msgs__srv__PositionService_Response *)calloc(size, sizeof(unity_robotics_demo_msgs__srv__PositionService_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_demo_msgs__srv__PositionService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_demo_msgs__srv__PositionService_Response__fini(&data[i - 1]);
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
unity_robotics_demo_msgs__srv__PositionService_Response__Sequence__fini(unity_robotics_demo_msgs__srv__PositionService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unity_robotics_demo_msgs__srv__PositionService_Response__fini(&array->data[i]);
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

unity_robotics_demo_msgs__srv__PositionService_Response__Sequence *
unity_robotics_demo_msgs__srv__PositionService_Response__Sequence__create(size_t size)
{
  unity_robotics_demo_msgs__srv__PositionService_Response__Sequence * array = (unity_robotics_demo_msgs__srv__PositionService_Response__Sequence *)malloc(sizeof(unity_robotics_demo_msgs__srv__PositionService_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_demo_msgs__srv__PositionService_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unity_robotics_demo_msgs__srv__PositionService_Response__Sequence__destroy(unity_robotics_demo_msgs__srv__PositionService_Response__Sequence * array)
{
  if (array) {
    unity_robotics_demo_msgs__srv__PositionService_Response__Sequence__fini(array);
  }
  free(array);
}
