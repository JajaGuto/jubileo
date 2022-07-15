// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Request __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Request __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectPoseService_Request_
{
  using Type = ObjectPoseService_Request_<ContainerAllocator>;

  explicit ObjectPoseService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  explicit ObjectPoseService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  // field types and members
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _object_name_type object_name;

  // setters for named parameter idiom
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Request
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Request
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPoseService_Request_ & other) const
  {
    if (this->object_name != other.object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPoseService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPoseService_Request_

// alias to use template instance with default allocator
using ObjectPoseService_Request =
  unity_robotics_demo_msgs::srv::ObjectPoseService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace unity_robotics_demo_msgs


// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Response __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Response __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObjectPoseService_Response_
{
  using Type = ObjectPoseService_Response_<ContainerAllocator>;

  explicit ObjectPoseService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pose(_init)
  {
    (void)_init;
  }

  explicit ObjectPoseService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _object_pose_type object_pose;

  // setters for named parameter idiom
  Type & set__object_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->object_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Response
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__srv__ObjectPoseService_Response
    std::shared_ptr<unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPoseService_Response_ & other) const
  {
    if (this->object_pose != other.object_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPoseService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPoseService_Response_

// alias to use template instance with default allocator
using ObjectPoseService_Response =
  unity_robotics_demo_msgs::srv::ObjectPoseService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace unity_robotics_demo_msgs

namespace unity_robotics_demo_msgs
{

namespace srv
{

struct ObjectPoseService
{
  using Request = unity_robotics_demo_msgs::srv::ObjectPoseService_Request;
  using Response = unity_robotics_demo_msgs::srv::ObjectPoseService_Response;
};

}  // namespace srv

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__STRUCT_HPP_
