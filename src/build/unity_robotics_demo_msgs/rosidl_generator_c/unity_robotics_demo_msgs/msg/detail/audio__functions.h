// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from unity_robotics_demo_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__FUNCTIONS_H_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "unity_robotics_demo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "unity_robotics_demo_msgs/msg/detail/audio__struct.h"

/// Initialize msg/Audio message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * unity_robotics_demo_msgs__msg__Audio
 * )) before or use
 * unity_robotics_demo_msgs__msg__Audio__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
bool
unity_robotics_demo_msgs__msg__Audio__init(unity_robotics_demo_msgs__msg__Audio * msg);

/// Finalize msg/Audio message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__msg__Audio__fini(unity_robotics_demo_msgs__msg__Audio * msg);

/// Create msg/Audio message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * unity_robotics_demo_msgs__msg__Audio__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
unity_robotics_demo_msgs__msg__Audio *
unity_robotics_demo_msgs__msg__Audio__create();

/// Destroy msg/Audio message.
/**
 * It calls
 * unity_robotics_demo_msgs__msg__Audio__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__msg__Audio__destroy(unity_robotics_demo_msgs__msg__Audio * msg);


/// Initialize array of msg/Audio messages.
/**
 * It allocates the memory for the number of elements and calls
 * unity_robotics_demo_msgs__msg__Audio__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
bool
unity_robotics_demo_msgs__msg__Audio__Sequence__init(unity_robotics_demo_msgs__msg__Audio__Sequence * array, size_t size);

/// Finalize array of msg/Audio messages.
/**
 * It calls
 * unity_robotics_demo_msgs__msg__Audio__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__msg__Audio__Sequence__fini(unity_robotics_demo_msgs__msg__Audio__Sequence * array);

/// Create array of msg/Audio messages.
/**
 * It allocates the memory for the array and calls
 * unity_robotics_demo_msgs__msg__Audio__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
unity_robotics_demo_msgs__msg__Audio__Sequence *
unity_robotics_demo_msgs__msg__Audio__Sequence__create(size_t size);

/// Destroy array of msg/Audio messages.
/**
 * It calls
 * unity_robotics_demo_msgs__msg__Audio__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unity_robotics_demo_msgs
void
unity_robotics_demo_msgs__msg__Audio__Sequence__destroy(unity_robotics_demo_msgs__msg__Audio__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__FUNCTIONS_H_
