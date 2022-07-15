// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:msg/PosEyelids.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PosEyelids in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__msg__PosEyelids
{
  float pos_up;
  float pos_down;
} unity_robotics_demo_msgs__msg__PosEyelids;

// Struct for a sequence of unity_robotics_demo_msgs__msg__PosEyelids.
typedef struct unity_robotics_demo_msgs__msg__PosEyelids__Sequence
{
  unity_robotics_demo_msgs__msg__PosEyelids * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__msg__PosEyelids__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__STRUCT_H_
