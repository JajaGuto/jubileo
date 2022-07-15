// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unity_robotics_demo_msgs:msg/UnityColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unity_robotics_demo_msgs/msg/detail/unity_color__rosidl_typesupport_introspection_c.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unity_robotics_demo_msgs/msg/detail/unity_color__functions.h"
#include "unity_robotics_demo_msgs/msg/detail/unity_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UnityColor__rosidl_typesupport_introspection_c__UnityColor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unity_robotics_demo_msgs__msg__UnityColor__init(message_memory);
}

void UnityColor__rosidl_typesupport_introspection_c__UnityColor_fini_function(void * message_memory)
{
  unity_robotics_demo_msgs__msg__UnityColor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_member_array[4] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__UnityColor, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__UnityColor, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__UnityColor, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__UnityColor, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_members = {
  "unity_robotics_demo_msgs__msg",  // message namespace
  "UnityColor",  // message name
  4,  // number of fields
  sizeof(unity_robotics_demo_msgs__msg__UnityColor),
  UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_member_array,  // message members
  UnityColor__rosidl_typesupport_introspection_c__UnityColor_init_function,  // function to initialize message memory (memory has to be allocated)
  UnityColor__rosidl_typesupport_introspection_c__UnityColor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_type_support_handle = {
  0,
  &UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, msg, UnityColor)() {
  if (!UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_type_support_handle.typesupport_identifier) {
    UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnityColor__rosidl_typesupport_introspection_c__UnityColor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
