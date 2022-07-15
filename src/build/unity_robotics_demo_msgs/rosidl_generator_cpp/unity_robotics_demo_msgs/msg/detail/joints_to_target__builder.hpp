// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/JointsToTarget.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__BUILDER_HPP_

#include "unity_robotics_demo_msgs/msg/detail/joints_to_target__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_JointsToTarget_targets
{
public:
  explicit Init_JointsToTarget_targets(::unity_robotics_demo_msgs::msg::JointsToTarget & msg)
  : msg_(msg)
  {}
  ::unity_robotics_demo_msgs::msg::JointsToTarget targets(::unity_robotics_demo_msgs::msg::JointsToTarget::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::JointsToTarget msg_;
};

class Init_JointsToTarget_joints
{
public:
  Init_JointsToTarget_joints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointsToTarget_targets joints(::unity_robotics_demo_msgs::msg::JointsToTarget::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_JointsToTarget_targets(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::JointsToTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::JointsToTarget>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_JointsToTarget_joints();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__JOINTS_TO_TARGET__BUILDER_HPP_
