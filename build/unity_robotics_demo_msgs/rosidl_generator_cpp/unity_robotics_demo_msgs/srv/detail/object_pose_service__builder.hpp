// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:srv/ObjectPoseService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__BUILDER_HPP_

#include "unity_robotics_demo_msgs/srv/detail/object_pose_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace srv
{

namespace builder
{

class Init_ObjectPoseService_Request_object_name
{
public:
  Init_ObjectPoseService_Request_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_robotics_demo_msgs::srv::ObjectPoseService_Request object_name(::unity_robotics_demo_msgs::srv::ObjectPoseService_Request::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::srv::ObjectPoseService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::srv::ObjectPoseService_Request>()
{
  return unity_robotics_demo_msgs::srv::builder::Init_ObjectPoseService_Request_object_name();
}

}  // namespace unity_robotics_demo_msgs


namespace unity_robotics_demo_msgs
{

namespace srv
{

namespace builder
{

class Init_ObjectPoseService_Response_object_pose
{
public:
  Init_ObjectPoseService_Response_object_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_robotics_demo_msgs::srv::ObjectPoseService_Response object_pose(::unity_robotics_demo_msgs::srv::ObjectPoseService_Response::_object_pose_type arg)
  {
    msg_.object_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::srv::ObjectPoseService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::srv::ObjectPoseService_Response>()
{
  return unity_robotics_demo_msgs::srv::builder::Init_ObjectPoseService_Response_object_pose();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__OBJECT_POSE_SERVICE__BUILDER_HPP_
