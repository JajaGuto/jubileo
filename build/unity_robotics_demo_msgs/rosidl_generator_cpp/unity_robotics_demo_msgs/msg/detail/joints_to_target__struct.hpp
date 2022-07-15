// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:msg/JointsToTarget.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__msg__JointsToTarget __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__msg__JointsToTarget __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointsToTarget_
{
  using Type = JointsToTarget_<ContainerAllocator>;

  explicit JointsToTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointsToTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joints_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _joints_type joints;
  using _targets_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__joints(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->joints = _arg;
    return *this;
  }
  Type & set__targets(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__JointsToTarget
    std::shared_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__JointsToTarget
    std::shared_ptr<unity_robotics_demo_msgs::msg::JointsToTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointsToTarget_ & other) const
  {
    if (this->joints != other.joints) {
      return false;
    }
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointsToTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointsToTarget_

// alias to use template instance with default allocator
using JointsToTarget =
  unity_robotics_demo_msgs::msg::JointsToTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__STRUCT_HPP_
