// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:msg/UnityColor.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__msg__UnityColor __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__msg__UnityColor __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnityColor_
{
  using Type = UnityColor_<ContainerAllocator>;

  explicit UnityColor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0l;
      this->g = 0l;
      this->b = 0l;
      this->a = 0l;
    }
  }

  explicit UnityColor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0l;
      this->g = 0l;
      this->b = 0l;
      this->a = 0l;
    }
  }

  // field types and members
  using _r_type =
    int32_t;
  _r_type r;
  using _g_type =
    int32_t;
  _g_type g;
  using _b_type =
    int32_t;
  _b_type b;
  using _a_type =
    int32_t;
  _a_type a;

  // setters for named parameter idiom
  Type & set__r(
    const int32_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const int32_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__UnityColor
    std::shared_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__UnityColor
    std::shared_ptr<unity_robotics_demo_msgs::msg::UnityColor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnityColor_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnityColor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnityColor_

// alias to use template instance with default allocator
using UnityColor =
  unity_robotics_demo_msgs::msg::UnityColor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__STRUCT_HPP_
