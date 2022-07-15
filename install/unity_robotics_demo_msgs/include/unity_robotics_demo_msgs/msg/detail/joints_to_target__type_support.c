// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unity_robotics_demo_msgs:msg/JointsToTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__rosidl_typesupport_introspection_c.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__functions.h"
#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__struct.h"


// Include directives for member types
// Member `joints`
// Member `targets`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unity_robotics_demo_msgs__msg__JointsToTarget__init(message_memory);
}

void JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_fini_function(void * message_memory)
{
  unity_robotics_demo_msgs__msg__JointsToTarget__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_member_array[2] = {
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__JointsToTarget, joints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__JointsToTarget, targets),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_members = {
  "unity_robotics_demo_msgs__msg",  // message namespace
  "JointsToTarget",  // message name
  2,  // number of fields
  sizeof(unity_robotics_demo_msgs__msg__JointsToTarget),
  JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_member_array,  // message members
  JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_type_support_handle = {
  0,
  &JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, msg, JointsToTarget)() {
  if (!JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_type_support_handle.typesupport_identifier) {
    JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointsToTarget__rosidl_typesupport_introspection_c__JointsToTarget_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
