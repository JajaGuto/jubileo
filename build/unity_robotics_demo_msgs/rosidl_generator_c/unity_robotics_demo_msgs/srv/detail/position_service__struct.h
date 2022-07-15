// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:srv/PositionService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.h"

// Struct defined in srv/PositionService in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__srv__PositionService_Request
{
  unity_robotics_demo_msgs__msg__PosRot input;
} unity_robotics_demo_msgs__srv__PositionService_Request;

// Struct for a sequence of unity_robotics_demo_msgs__srv__PositionService_Request.
typedef struct unity_robotics_demo_msgs__srv__PositionService_Request__Sequence
{
  unity_robotics_demo_msgs__srv__PositionService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__srv__PositionService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.h"

// Struct defined in srv/PositionService in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__srv__PositionService_Response
{
  unity_robotics_demo_msgs__msg__PosRot output;
} unity_robotics_demo_msgs__srv__PositionService_Response;

// Struct for a sequence of unity_robotics_demo_msgs__srv__PositionService_Response.
typedef struct unity_robotics_demo_msgs__srv__PositionService_Response__Sequence
{
  unity_robotics_demo_msgs__srv__PositionService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__srv__PositionService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__STRUCT_H_
