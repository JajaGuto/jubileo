// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:srv/PositionService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'input'
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Request __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Request __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionService_Request_
{
  using Type = PositionService_Request_<ContainerAllocator>;

  explicit PositionService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init)
  {
    (void)_init;
  }

  explicit PositionService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_type =
    unity_robotics_demo_msgs::msg::PosRot_<ContainerAllocator>;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const unity_robotics_demo_msgs::msg::PosRot_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Request
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Request
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionService_Request_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionService_Request_

// alias to use template instance with default allocator
using PositionService_Request =
  unity_robotics_demo_msgs::srv::PositionService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace unity_robotics_demo_msgs


// Include directives for member types
// Member 'output'
// already included above
// #include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Response __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Response __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PositionService_Response_
{
  using Type = PositionService_Response_<ContainerAllocator>;

  explicit PositionService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output(_init)
  {
    (void)_init;
  }

  explicit PositionService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _output_type =
    unity_robotics_demo_msgs::msg::PosRot_<ContainerAllocator>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__output(
    const unity_robotics_demo_msgs::msg::PosRot_<ContainerAllocator> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Response
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__PositionService_Response
    std::shared_ptr<unity_robotics_demo_msgs::srv::PositionService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionService_Response_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionService_Response_

// alias to use template instance with default allocator
using PositionService_Response =
  unity_robotics_demo_msgs::srv::PositionService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace unity_robotics_demo_msgs

namespace unity_robotics_demo_msgs
{

namespace srv
{

struct PositionService
{
  using Request = unity_robotics_demo_msgs::srv::PositionService_Request;
  using Response = unity_robotics_demo_msgs::srv::PositionService_Response;
};

}  // namespace srv

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__STRUCT_HPP_
