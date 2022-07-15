// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:msg/UnityColor.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/UnityColor in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__msg__UnityColor
{
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
} unity_robotics_demo_msgs__msg__UnityColor;

// Struct for a sequence of unity_robotics_demo_msgs__msg__UnityColor.
typedef struct unity_robotics_demo_msgs__msg__UnityColor__Sequence
{
  unity_robotics_demo_msgs__msg__UnityColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__msg__UnityColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__STRUCT_H_
