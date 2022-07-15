// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__FUNCTIONS_H_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "unity_robotics_demo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__struct.h"

/// Initialize srv/ObjectPoseService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request
 * )) before or use
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
bool
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__init(unity_robotics_demo_msgs__srv__ObjectPoseService_Request * msg);

/// Finalize srv/ObjectPoseService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__fini(unity_robotics_demo_msgs__srv__ObjectPoseService_Request * msg);

/// Create srv/ObjectPoseService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
unity_robotics_demo_msgs__srv__ObjectPoseService_Request *
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__create();

/// Destroy srv/ObjectPoseService message.
/**
 * It calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__destroy(unity_robotics_demo_msgs__srv__ObjectPoseService_Request * msg);


/// Initialize array of srv/ObjectPoseService messages.
/**
 * It allocates the memory for the number of elements and calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
bool
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence__init(unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence * array, size_t size);

/// Finalize array of srv/ObjectPoseService messages.
/**
 * It calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence__fini(unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence * array);

/// Create array of srv/ObjectPoseService messages.
/**
 * It allocates the memory for the array and calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence *
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence__create(size_t size);

/// Destroy array of srv/ObjectPoseService messages.
/**
 * It calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence__destroy(unity_robotics_demo_msgs__srv__ObjectPoseService_Request__Sequence * array);

/// Initialize srv/ObjectPoseService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response
 * )) before or use
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
bool
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__init(unity_robotics_demo_msgs__srv__ObjectPoseService_Response * msg);

/// Finalize srv/ObjectPoseService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__fini(unity_robotics_demo_msgs__srv__ObjectPoseService_Response * msg);

/// Create srv/ObjectPoseService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
unity_robotics_demo_msgs__srv__ObjectPoseService_Response *
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__create();

/// Destroy srv/ObjectPoseService message.
/**
 * It calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__destroy(unity_robotics_demo_msgs__srv__ObjectPoseService_Response * msg);


/// Initialize array of srv/ObjectPoseService messages.
/**
 * It allocates the memory for the number of elements and calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
bool
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence__init(unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence * array, size_t size);

/// Finalize array of srv/ObjectPoseService messages.
/**
 * It calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence__fini(unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence * array);

/// Create array of srv/ObjectPoseService messages.
/**
 * It allocates the memory for the array and calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence *
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence__create(size_t size);

/// Destroy array of srv/ObjectPoseService messages.
/**
 * It calls
 * unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence__destroy(unity_robotics_demo_msgs__srv__ObjectPoseService_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__FUNCTIONS_H_
