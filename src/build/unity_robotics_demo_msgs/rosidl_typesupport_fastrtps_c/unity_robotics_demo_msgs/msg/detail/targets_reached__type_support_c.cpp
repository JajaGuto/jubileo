// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unity_robotics_demo_msgs:msg/TargetsReached.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/targets_reached__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unity_robotics_demo_msgs/msg/detail/targets_reached__struct.h"
#include "unity_robotics_demo_msgs/msg/detail/targets_reached__functions.h"
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

#include "rosidl_runtime_c/string.h"  // joint
#include "rosidl_runtime_c/string_functions.h"  // joint

// forward declare type support functions


using _TargetsReached__ros_msg_type = unity_robotics_demo_msgs__msg__TargetsReached;

static bool _TargetsReached__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TargetsReached__ros_msg_type * ros_message = static_cast<const _TargetsReached__ros_msg_type *>(untyped_ros_message);
  // Field name: reached
  {
    cdr << (ros_message->reached ? true : false);
  }

  // Field name: joint
  {
    const rosidl_runtime_c__String * str = &ros_message->joint;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TargetsReached__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TargetsReached__ros_msg_type * ros_message = static_cast<_TargetsReached__ros_msg_type *>(untyped_ros_message);
  // Field name: reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reached = tmp ? true : false;
  }

  // Field name: joint
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint.data) {
      rosidl_runtime_c__String__init(&ros_message->joint);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joint,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t get_serialized_size_unity_robotics_demo_msgs__msg__TargetsReached(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetsReached__ros_msg_type * ros_message = static_cast<const _TargetsReached__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reached
  {
    size_t item_size = sizeof(ros_message->reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TargetsReached__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unity_robotics_demo_msgs__msg__TargetsReached(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t max_serialized_size_unity_robotics_demo_msgs__msg__TargetsReached(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: reached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TargetsReached__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_unity_robotics_demo_msgs__msg__TargetsReached(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TargetsReached = {
  "unity_robotics_demo_msgs::msg",
  "TargetsReached",
  _TargetsReached__cdr_serialize,
  _TargetsReached__cdr_deserialize,
  _TargetsReached__get_serialized_size,
  _TargetsReached__max_serialized_size
};

static rosidl_message_type_support_t _TargetsReached__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TargetsReached,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, TargetsReached)() {
  return &_TargetsReached__type_support;
}

#if defined(__cplusplus)
}
#endif
