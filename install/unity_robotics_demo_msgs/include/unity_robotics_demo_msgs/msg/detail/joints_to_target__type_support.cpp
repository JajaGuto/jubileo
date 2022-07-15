// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_demo_msgs:msg/JointsToTarget.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointsToTarget_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unity_robotics_demo_msgs::msg::JointsToTarget(_init);
}

void JointsToTarget_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unity_robotics_demo_msgs::msg::JointsToTarget *>(message_memory);
  typed_message->~JointsToTarget();
}

size_t size_function__JointsToTarget__joints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointsToTarget__joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__JointsToTarget__joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__JointsToTarget__joints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointsToTarget__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointsToTarget__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__JointsToTarget__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__JointsToTarget__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointsToTarget_message_member_array[2] = {
  {
    "joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs::msg::JointsToTarget, joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointsToTarget__joints,  // size() function pointer
    get_const_function__JointsToTarget__joints,  // get_const(index) function pointer
    get_function__JointsToTarget__joints,  // get(index) function pointer
    resize_function__JointsToTarget__joints  // resize(index) function pointer
  },
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs::msg::JointsToTarget, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointsToTarget__targets,  // size() function pointer
    get_const_function__JointsToTarget__targets,  // get_const(index) function pointer
    get_function__JointsToTarget__targets,  // get(index) function pointer
    resize_function__JointsToTarget__targets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointsToTarget_message_members = {
  "unity_robotics_demo_msgs::msg",  // message namespace
  "JointsToTarget",  // message name
  2,  // number of fields
  sizeof(unity_robotics_demo_msgs::msg::JointsToTarget),
  JointsToTarget_message_member_array,  // message members
  JointsToTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  JointsToTarget_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointsToTarget_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointsToTarget_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace unity_robotics_demo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<unity_robotics_demo_msgs::msg::JointsToTarget>()
{
  return &::unity_robotics_demo_msgs::msg::rosidl_typesupport_introspection_cpp::JointsToTarget_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unity_robotics_demo_msgs, msg, JointsToTarget)() {
  return &::unity_robotics_demo_msgs::msg::rosidl_typesupport_introspection_cpp::JointsToTarget_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
