// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__rosidl_typesupport_introspection_c.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__functions.h"
#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__struct.h"


// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unity_robotics_demo_msgs__srv__ObjectPoseService_Request__init(message_memory);
}

void ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_fini_function(void * message_memory)
{
  unity_robotics_demo_msgs__srv__ObjectPoseService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_member_array[1] = {
  {
    "object_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__srv__ObjectPoseService_Request, object_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_members = {
  "unity_robotics_demo_msgs__srv",  // message namespace
  "ObjectPoseService_Request",  // message name
  1,  // number of fields
  sizeof(unity_robotics_demo_msgs__srv__ObjectPoseService_Request),
  ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_member_array,  // message members
  ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_type_support_handle = {
  0,
  &ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Request)() {
  if (!ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_type_support_handle.typesupport_identifier) {
    ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectPoseService_Request__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "unity_robotics_demo_msgs/srv/detail/object_pose_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "unity_robotics_demo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "unity_robotics_demo_msgs/srv/detail/object_pose_service__functions.h"
// already included above
// #include "unity_robotics_demo_msgs/srv/detail/object_pose_service__struct.h"


// Include directives for member types
// Member `object_pose`
#include "geometry_msgs/msg/pose.h"
// Member `object_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unity_robotics_demo_msgs__srv__ObjectPoseService_Response__init(message_memory);
}

void ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_fini_function(void * message_memory)
{
  unity_robotics_demo_msgs__srv__ObjectPoseService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_member_array[1] = {
  {
    "object_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__srv__ObjectPoseService_Response, object_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_members = {
  "unity_robotics_demo_msgs__srv",  // message namespace
  "ObjectPoseService_Response",  // message name
  1,  // number of fields
  sizeof(unity_robotics_demo_msgs__srv__ObjectPoseService_Response),
  ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_member_array,  // message members
  ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_type_support_handle = {
  0,
  &ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Response)() {
  ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_type_support_handle.typesupport_identifier) {
    ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectPoseService_Response__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "unity_robotics_demo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "unity_robotics_demo_msgs/srv/detail/object_pose_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_service_members = {
  "unity_robotics_demo_msgs__srv",  // service namespace
  "ObjectPoseService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_Request_message_type_support_handle,
  NULL  // response message
  // unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_Response_message_type_support_handle
};

static rosidl_service_type_support_t unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_service_type_support_handle = {
  0,
  &unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unity_robotics_demo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, srv, ObjectPoseService)() {
  if (!unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_service_type_support_handle.typesupport_identifier) {
    unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, srv, ObjectPoseService_Response)()->data;
  }

  return &unity_robotics_demo_msgs__srv__detail__object_pose_service__rosidl_typesupport_introspection_c__ObjectPoseService_service_type_support_handle;
}
