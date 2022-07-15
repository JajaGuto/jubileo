// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:msg/JointsToTarget.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints'
// Member 'targets'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/JointsToTarget in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__msg__JointsToTarget
{
  rosidl_runtime_c__int32__Sequence joints;
  rosidl_runtime_c__float__Sequence targets;
} unity_robotics_demo_msgs__msg__JointsToTarget;

// Struct for a sequence of unity_robotics_demo_msgs__msg__JointsToTarget.
typedef struct unity_robotics_demo_msgs__msg__JointsToTarget__Sequence
{
  unity_robotics_demo_msgs__msg__JointsToTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__msg__JointsToTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__STRUCT_H_
