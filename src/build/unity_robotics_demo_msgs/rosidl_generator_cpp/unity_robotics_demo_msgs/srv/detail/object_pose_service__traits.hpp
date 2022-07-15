// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__TRAITS_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__TRAITS_HPP_

#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>()
{
  return "unity_robotics_demo_msgs::srv::ObjectPoseService_Request";
}

template<>
inline const char * name<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>()
{
  return "unity_robotics_demo_msgs/srv/ObjectPoseService_Request";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'object_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>()
{
  return "unity_robotics_demo_msgs::srv::ObjectPoseService_Response";
}

template<>
inline const char * name<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>()
{
  return "unity_robotics_demo_msgs/srv/ObjectPoseService_Response";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::srv::ObjectPoseService>()
{
  return "unity_robotics_demo_msgs::srv::ObjectPoseService";
}

template<>
inline const char * name<unity_robotics_demo_msgs::srv::ObjectPoseService>()
{
  return "unity_robotics_demo_msgs/srv/ObjectPoseService";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::srv::ObjectPoseService>
  : std::integral_constant<
    bool,
    has_fixed_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>::value &&
    has_fixed_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>::value
  >
{
};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::srv::ObjectPoseService>
  : std::integral_constant<
    bool,
    has_bounded_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>::value &&
    has_bounded_size<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>::value
  >
{
};

template<>
struct is_service<unity_robotics_demo_msgs::srv::ObjectPoseService>
  : std::true_type
{
};

template<>
struct is_service_request<unity_robotics_demo_msgs::srv::ObjectPoseService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<unity_robotics_demo_msgs::srv::ObjectPoseService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__TRAITS_HPP_
