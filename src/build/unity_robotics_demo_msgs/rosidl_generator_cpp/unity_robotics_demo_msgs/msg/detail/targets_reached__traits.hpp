// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_robotics_demo_msgs:msg/TargetsReached.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__TRAITS_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__TRAITS_HPP_

#include "unity_robotics_demo_msgs/msg/detail/targets_reached__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::msg::TargetsReached>()
{
  return "unity_robotics_demo_msgs::msg::TargetsReached";
}

template<>
inline const char * name<unity_robotics_demo_msgs::msg::TargetsReached>()
{
  return "unity_robotics_demo_msgs/msg/TargetsReached";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::msg::TargetsReached>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::msg::TargetsReached>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unity_robotics_demo_msgs::msg::TargetsReached>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__TRAITS_HPP_
