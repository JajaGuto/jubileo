// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_demo_msgs:msg/PosEyelids.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/pos_eyelids__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unity_robotics_demo_msgs/msg/detail/pos_eyelids__struct.hpp"

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
  const unity_robotics_demo_msgs::msg::PosEyelids & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos_up
  cdr << ros_message.pos_up;
  // Member: pos_down
  cdr << ros_message.pos_down;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unity_robotics_demo_msgs::msg::PosEyelids & ros_message)
{
  // Member: pos_up
  cdr >> ros_message.pos_up;

  // Member: pos_down
  cdr >> ros_message.pos_down;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
get_serialized_size(
  const unity_robotics_demo_msgs::msg::PosEyelids & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos_up
  {
    size_t item_size = sizeof(ros_message.pos_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_down
  {
    size_t item_size = sizeof(ros_message.pos_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
max_serialized_size_PosEyelids(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pos_up
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_down
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PosEyelids__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::PosEyelids *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PosEyelids__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unity_robotics_demo_msgs::msg::PosEyelids *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PosEyelids__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::PosEyelids *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PosEyelids__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PosEyelids(full_bounded, 0);
}

static message_type_support_callbacks_t _PosEyelids__callbacks = {
  "unity_robotics_demo_msgs::msg",
  "PosEyelids",
  _PosEyelids__cdr_serialize,
  _PosEyelids__cdr_deserialize,
  _PosEyelids__get_serialized_size,
  _PosEyelids__max_serialized_size
};

static rosidl_message_type_support_t _PosEyelids__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PosEyelids__callbacks,
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
get_message_type_support_handle<unity_robotics_demo_msgs::msg::PosEyelids>()
{
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_PosEyelids__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unity_robotics_demo_msgs, msg, PosEyelids)() {
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_PosEyelids__handle;
}

#ifdef __cplusplus
}
#endif
