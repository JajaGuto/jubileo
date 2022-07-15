// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:msg/PosEyelids.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__msg__PosEyelids __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__msg__PosEyelids __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PosEyelids_
{
  using Type = PosEyelids_<ContainerAllocator>;

  explicit PosEyelids_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_up = 0.0f;
      this->pos_down = 0.0f;
    }
  }

  explicit PosEyelids_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_up = 0.0f;
      this->pos_down = 0.0f;
    }
  }

  // field types and members
  using _pos_up_type =
    float;
  _pos_up_type pos_up;
  using _pos_down_type =
    float;
  _pos_down_type pos_down;

  // setters for named parameter idiom
  Type & set__pos_up(
    const float & _arg)
  {
    this->pos_up = _arg;
    return *this;
  }
  Type & set__pos_down(
    const float & _arg)
  {
    this->pos_down = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__PosEyelids
    std::shared_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__PosEyelids
    std::shared_ptr<unity_robotics_demo_msgs::msg::PosEyelids_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PosEyelids_ & other) const
  {
    if (this->pos_up != other.pos_up) {
      return false;
    }
    if (this->pos_down != other.pos_down) {
      return false;
    }
    return true;
  }
  bool operator!=(const PosEyelids_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PosEyelids_

// alias to use template instance with default allocator
using PosEyelids =
  unity_robotics_demo_msgs::msg::PosEyelids_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__STRUCT_HPP_
