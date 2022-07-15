// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unity_robotics_demo_msgs:srv/PositionService.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/srv/detail/position_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unity_robotics_demo_msgs/srv/detail/position_service__struct.h"
#include "unity_robotics_demo_msgs/srv/detail/position_service__functions.h"
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

#include "unity_robotics_demo_msgs/msg/detail/pos_rot__functions.h"  // input

// forward declare type support functions
size_t get_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, PosRot)();


using _PositionService_Request__ros_msg_type = unity_robotics_demo_msgs__srv__PositionService_Request;

static bool _PositionService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionService_Request__ros_msg_type * ros_message = static_cast<const _PositionService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, PosRot
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->input, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PositionService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionService_Request__ros_msg_type * ros_message = static_cast<_PositionService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, PosRot
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->input))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t get_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionService_Request__ros_msg_type * ros_message = static_cast<const _PositionService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input

  current_alignment += get_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
    &(ros_message->input), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PositionService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t max_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: input
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionService_Request = {
  "unity_robotics_demo_msgs::srv",
  "PositionService_Request",
  _PositionService_Request__cdr_serialize,
  _PositionService_Request__cdr_deserialize,
  _PositionService_Request__get_serialized_size,
  _PositionService_Request__max_serialized_size
};

static rosidl_message_type_support_t _PositionService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, PositionService_Request)() {
  return &_PositionService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "unity_robotics_demo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "unity_robotics_demo_msgs/srv/detail/position_service__struct.h"
// already included above
// #include "unity_robotics_demo_msgs/srv/detail/position_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "unity_robotics_demo_msgs/msg/detail/pos_rot__functions.h"  // output

// forward declare type support functions
size_t get_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, PosRot)();


using _PositionService_Response__ros_msg_type = unity_robotics_demo_msgs__srv__PositionService_Response;

static bool _PositionService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionService_Response__ros_msg_type * ros_message = static_cast<const _PositionService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, PosRot
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->output, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PositionService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionService_Response__ros_msg_type * ros_message = static_cast<_PositionService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: output
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, PosRot
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->output))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t get_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionService_Response__ros_msg_type * ros_message = static_cast<const _PositionService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name output

  current_alignment += get_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
    &(ros_message->output), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PositionService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t max_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: output
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unity_robotics_demo_msgs__msg__PosRot(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_unity_robotics_demo_msgs__srv__PositionService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionService_Response = {
  "unity_robotics_demo_msgs::srv",
  "PositionService_Response",
  _PositionService_Response__cdr_serialize,
  _PositionService_Response__cdr_deserialize,
  _PositionService_Response__get_serialized_size,
  _PositionService_Response__max_serialized_size
};

static rosidl_message_type_support_t _PositionService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, PositionService_Response)() {
  return &_PositionService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "unity_robotics_demo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unity_robotics_demo_msgs/srv/position_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PositionService__callbacks = {
  "unity_robotics_demo_msgs::srv",
  "PositionService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, PositionService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, PositionService_Response)(),
};

static rosidl_service_type_support_t PositionService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PositionService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, PositionService)() {
  return &PositionService__handle;
}

#if defined(__cplusplus)
}
#endif
