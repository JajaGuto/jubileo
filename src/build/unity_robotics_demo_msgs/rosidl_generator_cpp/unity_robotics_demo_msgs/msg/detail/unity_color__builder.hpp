// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/UnityColor.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__BUILDER_HPP_

#include "unity_robotics_demo_msgs/msg/detail/unity_color__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_UnityColor_a
{
public:
  explicit Init_UnityColor_a(::unity_robotics_demo_msgs::msg::UnityColor & msg)
  : msg_(msg)
  {}
  ::unity_robotics_demo_msgs::msg::UnityColor a(::unity_robotics_demo_msgs::msg::UnityColor::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::UnityColor msg_;
};

class Init_UnityColor_b
{
public:
  explicit Init_UnityColor_b(::unity_robotics_demo_msgs::msg::UnityColor & msg)
  : msg_(msg)
  {}
  Init_UnityColor_a b(::unity_robotics_demo_msgs::msg::UnityColor::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_UnityColor_a(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::UnityColor msg_;
};

class Init_UnityColor_g
{
public:
  explicit Init_UnityColor_g(::unity_robotics_demo_msgs::msg::UnityColor & msg)
  : msg_(msg)
  {}
  Init_UnityColor_b g(::unity_robotics_demo_msgs::msg::UnityColor::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_UnityColor_b(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::UnityColor msg_;
};

class Init_UnityColor_r
{
public:
  Init_UnityColor_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnityColor_g r(::unity_robotics_demo_msgs::msg::UnityColor::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_UnityColor_g(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::UnityColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::UnityColor>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_UnityColor_r();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__UNITY_COLOR__BUILDER_HPP_
