// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:msg/TargetsReached.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__msg__TargetsReached __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__msg__TargetsReached __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetsReached_
{
  using Type = TargetsReached_<ContainerAllocator>;

  explicit TargetsReached_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
      this->joint = "";
    }
  }

  explicit TargetsReached_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reached = false;
      this->joint = "";
    }
  }

  // field types and members
  using _reached_type =
    bool;
  _reached_type reached;
  using _joint_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _joint_type joint;

  // setters for named parameter idiom
  Type & set__reached(
    const bool & _arg)
  {
    this->reached = _arg;
    return *this;
  }
  Type & set__joint(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->joint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__TargetsReached
    std::shared_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__TargetsReached
    std::shared_ptr<unity_robotics_demo_msgs::msg::TargetsReached_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetsReached_ & other) const
  {
    if (this->reached != other.reached) {
      return false;
    }
    if (this->joint != other.joint) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetsReached_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetsReached_

// alias to use template instance with default allocator
using TargetsReached =
  unity_robotics_demo_msgs::msg::TargetsReached_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__STRUCT_HPP_
