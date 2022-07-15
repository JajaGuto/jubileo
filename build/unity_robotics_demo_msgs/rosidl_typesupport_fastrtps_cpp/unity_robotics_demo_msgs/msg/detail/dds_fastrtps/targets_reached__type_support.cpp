// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_demo_msgs:msg/TargetsReached.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/targets_reached__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unity_robotics_demo_msgs/msg/detail/targets_reached__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
cdr_serialize(
  const unity_robotics_demo_msgs::msg::TargetsReached & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: reached
  cdr << (ros_message.reached ? true : false);
  // Member: joint
  cdr << ros_message.joint;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unity_robotics_demo_msgs::msg::TargetsReached & ros_message)
{
  // Member: reached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reached = tmp ? true : false;
  }

  // Member: joint
  cdr >> ros_message.joint;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
get_serialized_size(
  const unity_robotics_demo_msgs::msg::TargetsReached & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: reached
  {
    size_t item_size = sizeof(ros_message.reached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.joint.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
max_serialized_size_TargetsReached(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: reached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint
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

static bool _TargetsReached__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::TargetsReached *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TargetsReached__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unity_robotics_demo_msgs::msg::TargetsReached *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TargetsReached__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::TargetsReached *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TargetsReached__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TargetsReached(full_bounded, 0);
}

static message_type_support_callbacks_t _TargetsReached__callbacks = {
  "unity_robotics_demo_msgs::msg",
  "TargetsReached",
  _TargetsReached__cdr_serialize,
  _TargetsReached__cdr_deserialize,
  _TargetsReached__get_serialized_size,
  _TargetsReached__max_serialized_size
};

static rosidl_message_type_support_t _TargetsReached__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TargetsReached__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<unity_robotics_demo_msgs::msg::TargetsReached>()
{
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_TargetsReached__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unity_robotics_demo_msgs, msg, TargetsReached)() {
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_TargetsReached__handle;
}

#ifdef __cplusplus
}
#endif
