// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/TargetsReached.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__BUILDER_HPP_

#include "unity_robotics_demo_msgs/msg/detail/targets_reached__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_TargetsReached_joint
{
public:
  explicit Init_TargetsReached_joint(::unity_robotics_demo_msgs::msg::TargetsReached & msg)
  : msg_(msg)
  {}
  ::unity_robotics_demo_msgs::msg::TargetsReached joint(::unity_robotics_demo_msgs::msg::TargetsReached::_joint_type arg)
  {
    msg_.joint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::TargetsReached msg_;
};

class Init_TargetsReached_reached
{
public:
  Init_TargetsReached_reached()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TargetsReached_joint reached(::unity_robotics_demo_msgs::msg::TargetsReached::_reached_type arg)
  {
    msg_.reached = std::move(arg);
    return Init_TargetsReached_joint(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::TargetsReached msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::TargetsReached>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_TargetsReached_reached();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__TARGETS_REACHED__BUILDER_HPP_
