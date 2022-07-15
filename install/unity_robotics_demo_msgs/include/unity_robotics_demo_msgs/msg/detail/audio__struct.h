// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Audio in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__msg__Audio
{
  rosidl_runtime_c__float__Sequence data;
} unity_robotics_demo_msgs__msg__Audio;

// Struct for a sequence of unity_robotics_demo_msgs__msg__Audio.
typedef struct unity_robotics_demo_msgs__msg__Audio__Sequence
{
  unity_robotics_demo_msgs__msg__Audio * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__msg__Audio__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__STRUCT_H_
