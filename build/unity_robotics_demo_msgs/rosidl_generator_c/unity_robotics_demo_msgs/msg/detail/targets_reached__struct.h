// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:msg/TargetsReached.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TargetsReached in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__msg__TargetsReached
{
  bool reached;
  rosidl_runtime_c__String joint;
} unity_robotics_demo_msgs__msg__TargetsReached;

// Struct for a sequence of unity_robotics_demo_msgs__msg__TargetsReached.
typedef struct unity_robotics_demo_msgs__msg__TargetsReached__Sequence
{
  unity_robotics_demo_msgs__msg__TargetsReached * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__msg__TargetsReached__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__STRUCT_H_
