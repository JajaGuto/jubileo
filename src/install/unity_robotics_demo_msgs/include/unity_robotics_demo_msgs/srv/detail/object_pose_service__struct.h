// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ObjectPoseService in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__srv__ObjectPoseService_Request
{
  rosidl_runtime_c__String object_name;
} unity_robotics_demo_msgs__srv__ObjectPoseService_Request;

// Struct for a sequence of unity_robotics_demo_msgs__srv__ObjectPoseService_Request.
typedef struct unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence
{
  unity_robotics_demo_msgs__srv__ObjectPoseService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/ObjectPoseService in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__srv__ObjectPoseService_Response
{
  geometry_msgs__msg__Pose object_pose;
} unity_robotics_demo_msgs__srv__ObjectPoseService_Response;

// Struct for a sequence of unity_robotics_demo_msgs__srv__ObjectPoseService_Response.
typedef struct unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence
{
  unity_robotics_demo_msgs__srv__ObjectPoseService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__STRUCT_H_
