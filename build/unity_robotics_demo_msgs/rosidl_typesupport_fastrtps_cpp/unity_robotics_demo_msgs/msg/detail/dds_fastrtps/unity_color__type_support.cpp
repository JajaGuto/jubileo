// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_demo_msgs:msg/UnityColor.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/unity_color__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unity_robotics_demo_msgs/msg/detail/unity_color__struct.hpp"

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
  const unity_robotics_demo_msgs::msg::UnityColor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: r
  cdr << ros_message.r;
  // Member: g
  cdr << ros_message.g;
  // Member: b
  cdr << ros_message.b;
  // Member: a
  cdr << ros_message.a;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unity_robotics_demo_msgs::msg::UnityColor & ros_message)
{
  // Member: r
  cdr >> ros_message.r;

  // Member: g
  cdr >> ros_message.g;

  // Member: b
  cdr >> ros_message.b;

  // Member: a
  cdr >> ros_message.a;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
get_serialized_size(
  const unity_robotics_demo_msgs::msg::UnityColor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: r
  {
    size_t item_size = sizeof(ros_message.r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: g
  {
    size_t item_size = sizeof(ros_message.g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
max_serialized_size_UnityColor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: g
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _UnityColor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::UnityColor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UnityColor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unity_robotics_demo_msgs::msg::UnityColor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UnityColor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::UnityColor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UnityColor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_UnityColor(full_bounded, 0);
}

static message_type_support_callbacks_t _UnityColor__callbacks = {
  "unity_robotics_demo_msgs::msg",
  "UnityColor",
  _UnityColor__cdr_serialize,
  _UnityColor__cdr_deserialize,
  _UnityColor__get_serialized_size,
  _UnityColor__max_serialized_size
};

static rosidl_message_type_support_t _UnityColor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UnityColor__callbacks,
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
get_message_type_support_handle<unity_robotics_demo_msgs::msg::UnityColor>()
{
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_UnityColor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unity_robotics_demo_msgs, msg, UnityColor)() {
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_UnityColor__handle;
}

#ifdef __cplusplus
}
#endif
