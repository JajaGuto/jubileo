// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_robotics_demo_msgs:msg/PosEyelids.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__TRAITS_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__TRAITS_HPP_

#include "unity_robotics_demo_msgs/msg/detail/pos_eyelids__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unity_robotics_demo_msgs::msg::PosEyelids>()
{
  return "unity_robotics_demo_msgs::msg::PosEyelids";
}

template<>
inline const char * name<unity_robotics_demo_msgs::msg::PosEyelids>()
{
  return "unity_robotics_demo_msgs/msg/PosEyelids";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::msg::PosEyelids>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::msg::PosEyelids>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unity_robotics_demo_msgs::msg::PosEyelids>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__TRAITS_HPP_
