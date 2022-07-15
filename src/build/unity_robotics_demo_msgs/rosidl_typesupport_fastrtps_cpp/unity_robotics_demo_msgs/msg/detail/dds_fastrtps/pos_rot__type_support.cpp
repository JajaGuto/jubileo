// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_demo_msgs:msg/PosRot.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.hpp"

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
  const unity_robotics_demo_msgs::msg::PosRot & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos_x
  cdr << ros_message.pos_x;
  // Member: pos_y
  cdr << ros_message.pos_y;
  // Member: pos_z
  cdr << ros_message.pos_z;
  // Member: rot_x
  cdr << ros_message.rot_x;
  // Member: rot_y
  cdr << ros_message.rot_y;
  // Member: rot_z
  cdr << ros_message.rot_z;
  // Member: rot_w
  cdr << ros_message.rot_w;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unity_robotics_demo_msgs::msg::PosRot & ros_message)
{
  // Member: pos_x
  cdr >> ros_message.pos_x;

  // Member: pos_y
  cdr >> ros_message.pos_y;

  // Member: pos_z
  cdr >> ros_message.pos_z;

  // Member: rot_x
  cdr >> ros_message.rot_x;

  // Member: rot_y
  cdr >> ros_message.rot_y;

  // Member: rot_z
  cdr >> ros_message.rot_z;

  // Member: rot_w
  cdr >> ros_message.rot_w;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
get_serialized_size(
  const unity_robotics_demo_msgs::msg::PosRot & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos_x
  {
    size_t item_size = sizeof(ros_message.pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_y
  {
    size_t item_size = sizeof(ros_message.pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_z
  {
    size_t item_size = sizeof(ros_message.pos_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rot_x
  {
    size_t item_size = sizeof(ros_message.rot_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rot_y
  {
    size_t item_size = sizeof(ros_message.rot_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rot_z
  {
    size_t item_size = sizeof(ros_message.rot_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rot_w
  {
    size_t item_size = sizeof(ros_message.rot_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
max_serialized_size_PosRot(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rot_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rot_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rot_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rot_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PosRot__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::PosRot *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PosRot__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unity_robotics_demo_msgs::msg::PosRot *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PosRot__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::PosRot *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PosRot__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PosRot(full_bounded, 0);
}

static message_type_support_callbacks_t _PosRot__callbacks = {
  "unity_robotics_demo_msgs::msg",
  "PosRot",
  _PosRot__cdr_serialize,
  _PosRot__cdr_deserialize,
  _PosRot__get_serialized_size,
  _PosRot__max_serialized_size
};

static rosidl_message_type_support_t _PosRot__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PosRot__callbacks,
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
get_message_type_support_handle<unity_robotics_demo_msgs::msg::PosRot>()
{
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_PosRot__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unity_robotics_demo_msgs, msg, PosRot)() {
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_PosRot__handle;
}

#ifdef __cplusplus
}
#endif
