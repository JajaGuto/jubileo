// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_demo_msgs:msg/PosEyelids.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unity_robotics_demo_msgs/msg/detail/pos_eyelids__struct.hpp"
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

void PosEyelids_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unity_robotics_demo_msgs::msg::PosEyelids(_init);
}

void PosEyelids_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unity_robotics_demo_msgs::msg::PosEyelids *>(message_memory);
  typed_message->~PosEyelids();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PosEyelids_message_member_array[2] = {
  {
    "pos_up",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs::msg::PosEyelids, pos_up),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos_down",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs::msg::PosEyelids, pos_down),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PosEyelids_message_members = {
  "unity_robotics_demo_msgs::msg",  // message namespace
  "PosEyelids",  // message name
  2,  // number of fields
  sizeof(unity_robotics_demo_msgs::msg::PosEyelids),
  PosEyelids_message_member_array,  // message members
  PosEyelids_init_function,  // function to initialize message memory (memory has to be allocated)
  PosEyelids_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PosEyelids_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PosEyelids_message_members,
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
get_message_type_support_handle<unity_robotics_demo_msgs::msg::PosEyelids>()
{
  return &::unity_robotics_demo_msgs::msg::rosidl_typesupport_introspection_cpp::PosEyelids_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unity_robotics_demo_msgs, msg, PosEyelids)() {
  return &::unity_robotics_demo_msgs::msg::rosidl_typesupport_introspection_cpp::PosEyelids_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
