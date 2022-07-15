// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__msg__Audio __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__msg__Audio __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Audio_
{
  using Type = Audio_<ContainerAllocator>;

  explicit Audio_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Audio_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__Audio
    std::shared_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__Audio
    std::shared_ptr<unity_robotics_demo_msgs::msg::Audio_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Audio_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Audio_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Audio_

// alias to use template instance with default allocator
using Audio =
  unity_robotics_demo_msgs::msg::Audio_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__STRUCT_HPP_
