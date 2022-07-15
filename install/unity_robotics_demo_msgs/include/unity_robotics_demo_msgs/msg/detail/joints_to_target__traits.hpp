// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_robotics_demo_msgs:msg/JointsToTarget.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__TRAITS_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__TRAITS_HPP_

#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::msg::JointsToTarget>()
{
  return "unity_robotics_demo_msgs::msg::JointsToTarget";
}

template<>
inline const char * name<unity_robotics_demo_msgs::msg::JointsToTarget>()
{
  return "unity_robotics_demo_msgs/msg/JointsToTarget";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::msg::JointsToTarget>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::msg::JointsToTarget>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unity_robotics_demo_msgs::msg::JointsToTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__TRAITS_HPP_
