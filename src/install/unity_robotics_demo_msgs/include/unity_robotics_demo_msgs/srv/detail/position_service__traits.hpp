// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_robotics_demo_msgs:srv/PositionService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__TRAITS_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__TRAITS_HPP_

#include "unity_robotics_demo_msgs/srv/detail/position_service__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'input'
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::srv::PositionService_Request>()
{
  return "unity_robotics_demo_msgs::srv::PositionService_Request";
}

template<>
inline const char * name<unity_robotics_demo_msgs::srv::PositionService_Request>()
{
  return "unity_robotics_demo_msgs/srv/PositionService_Request";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::srv::PositionService_Request>
  : std::integral_constant<bool, has_fixed_size<unity_robotics_demo_msgs::msg::PosRot>::value> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::srv::PositionService_Request>
  : std::integral_constant<bool, has_bounded_size<unity_robotics_demo_msgs::msg::PosRot>::value> {};

template<>
struct is_message<unity_robotics_demo_msgs::srv::PositionService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'output'
// already included above
// #include "unity_robotics_demo_msgs/msg/detail/pos_rot__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::srv::PositionService_Response>()
{
  return "unity_robotics_demo_msgs::srv::PositionService_Response";
}

template<>
inline const char * name<unity_robotics_demo_msgs::srv::PositionService_Response>()
{
  return "unity_robotics_demo_msgs/srv/PositionService_Response";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::srv::PositionService_Response>
  : std::integral_constant<bool, has_fixed_size<unity_robotics_demo_msgs::msg::PosRot>::value> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::srv::PositionService_Response>
  : std::integral_constant<bool, has_bounded_size<unity_robotics_demo_msgs::msg::PosRot>::value> {};

template<>
struct is_message<unity_robotics_demo_msgs::srv::PositionService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::srv::PositionService>()
{
  return "unity_robotics_demo_msgs::srv::PositionService";
}

template<>
inline const char * name<unity_robotics_demo_msgs::srv::PositionService>()
{
  return "unity_robotics_demo_msgs/srv/PositionService";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::srv::PositionService>
  : std::integral_constant<
    bool,
    has_fixed_size<unity_robotics_demo_msgs::srv::PositionService_Request>::value &&
    has_fixed_size<unity_robotics_demo_msgs::srv::PositionService_Response>::value
  >
{
};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::srv::PositionService>
  : std::integral_constant<
    bool,
    has_bounded_size<unity_robotics_demo_msgs::srv::PositionService_Request>::value &&
    has_bounded_size<unity_robotics_demo_msgs::srv::PositionService_Response>::value
  >
{
};

template<>
struct is_service<unity_robotics_demo_msgs::srv::PositionService>
  : std::true_type
{
};

template<>
struct is_service_request<unity_robotics_demo_msgs::srv::PositionService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<unity_robotics_demo_msgs::srv::PositionService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__TRAITS_HPP_
