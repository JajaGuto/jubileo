// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unity_robotics_demo_msgs:msg/JointsToTarget.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__struct.h"
#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // joints, targets
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joints, targets

// forward declare type support functions


using _JointsToTarget__ros_msg_type = unity_robotics_demo_msgs__msg__JointsToTarget;

static bool _JointsToTarget__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointsToTarget__ros_msg_type * ros_message = static_cast<const _JointsToTarget__ros_msg_type *>(untyped_ros_message);
  // Field name: joints
  {
    size_t size = ros_message->joints.size;
    auto array_ptr = ros_message->joints.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: targets
  {
    size_t size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _JointsToTarget__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointsToTarget__ros_msg_type * ros_message = static_cast<_JointsToTarget__ros_msg_type *>(untyped_ros_message);
  // Field name: joints
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joints.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->joints);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->joints, size)) {
      return "failed to create array for field 'joints'";
    }
    auto array_ptr = ros_message->joints.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: targets
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->targets.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->targets);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->targets, size)) {
      return "failed to create array for field 'targets'";
    }
    auto array_ptr = ros_message->targets.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t get_serialized_size_unity_robotics_demo_msgs__msg__JointsToTarget(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointsToTarget__ros_msg_type * ros_message = static_cast<const _JointsToTarget__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joints
  {
    size_t array_size = ros_message->joints.size;
    auto array_ptr = ros_message->joints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name targets
  {
    size_t array_size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointsToTarget__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unity_robotics_demo_msgs__msg__JointsToTarget(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t max_serialized_size_unity_robotics_demo_msgs__msg__JointsToTarget(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: joints
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: targets
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _JointsToTarget__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_unity_robotics_demo_msgs__msg__JointsToTarget(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JointsToTarget = {
  "unity_robotics_demo_msgs::msg",
  "JointsToTarget",
  _JointsToTarget__cdr_serialize,
  _JointsToTarget__cdr_deserialize,
  _JointsToTarget__get_serialized_size,
  _JointsToTarget__max_serialized_size
};

static rosidl_message_type_support_t _JointsToTarget__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointsToTarget,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, JointsToTarget)() {
  return &_JointsToTarget__type_support;
}

#if defined(__cplusplus)
}
#endif
