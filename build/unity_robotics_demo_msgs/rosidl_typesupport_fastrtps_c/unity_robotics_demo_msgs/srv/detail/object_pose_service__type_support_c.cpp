// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__struct.h"
#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__functions.h"
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

#include "rosidl_runtime_c/string.h"  // object_name
#include "rosidl_runtime_c/string_functions.h"  // object_name

// forward declare type support functions


using _ObjectPoseService_Request__ros_msg_type = unity_robotics_demo_msgs__srv__ObjectPoseService_Request;

static bool _ObjectPoseService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectPoseService_Request__ros_msg_type * ros_message = static_cast<const _ObjectPoseService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: object_name
  {
    const rosidl_runtime_c__String * str = &ros_message->object_name;
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

static bool _ObjectPoseService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectPoseService_Request__ros_msg_type * ros_message = static_cast<_ObjectPoseService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: object_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->object_name.data) {
      rosidl_runtime_c__String__init(&ros_message->object_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->object_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'object_name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t get_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectPoseService_Request__ros_msg_type * ros_message = static_cast<const _ObjectPoseService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectPoseService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t max_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object_name
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

static size_t _ObjectPoseService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObjectPoseService_Request = {
  "unity_robotics_demo_msgs::srv",
  "ObjectPoseService_Request",
  _ObjectPoseService_Request__cdr_serialize,
  _ObjectPoseService_Request__cdr_deserialize,
  _ObjectPoseService_Request__get_serialized_size,
  _ObjectPoseService_Request__max_serialized_size
};

static rosidl_message_type_support_t _ObjectPoseService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectPoseService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Request)() {
  return &_ObjectPoseService_Request__type_support;
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
// #include "unity_robotics_demo_msgs/srv/detail/object_pose_service__struct.h"
// already included above
// #include "unity_robotics_demo_msgs/srv/detail/object_pose_service__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // object_pose

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_unity_robotics_demo_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_unity_robotics_demo_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();


using _ObjectPoseService_Response__ros_msg_type = unity_robotics_demo_msgs__srv__ObjectPoseService_Response;

static bool _ObjectPoseService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectPoseService_Response__ros_msg_type * ros_message = static_cast<const _ObjectPoseService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: object_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_pose, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ObjectPoseService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectPoseService_Response__ros_msg_type * ros_message = static_cast<_ObjectPoseService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: object_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_pose))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t get_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectPoseService_Response__ros_msg_type * ros_message = static_cast<const _ObjectPoseService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->object_pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectPoseService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t max_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ObjectPoseService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_unity_robotics_demo_msgs__srv__ObjectPoseService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObjectPoseService_Response = {
  "unity_robotics_demo_msgs::srv",
  "ObjectPoseService_Response",
  _ObjectPoseService_Response__cdr_serialize,
  _ObjectPoseService_Response__cdr_deserialize,
  _ObjectPoseService_Response__get_serialized_size,
  _ObjectPoseService_Response__max_serialized_size
};

static rosidl_message_type_support_t _ObjectPoseService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectPoseService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Response)() {
  return &_ObjectPoseService_Response__type_support;
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
#include "unity_robotics_demo_msgs/srv/object_pose_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ObjectPoseService__callbacks = {
  "unity_robotics_demo_msgs::srv",
  "ObjectPoseService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Response)(),
};

static rosidl_service_type_support_t ObjectPoseService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ObjectPoseService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, srv, ObjectPoseService)() {
  return &ObjectPoseService__handle;
}

#if defined(__cplusplus)
}
#endif
