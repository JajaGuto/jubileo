// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:srv/PositionService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__BUILDER_HPP_

#include "unity_robotics_demo_msgs/srv/detail/position_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace srv
{

namespace builder
{

class Init_PositionService_Request_input
{
public:
  Init_PositionService_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_robotics_demo_msgs::srv::PositionService_Request input(::unity_robotics_demo_msgs::srv::PositionService_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::srv::PositionService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::srv::PositionService_Request>()
{
  return unity_robotics_demo_msgs::srv::builder::Init_PositionService_Request_input();
}

}  // namespace unity_robotics_demo_msgs


namespace unity_robotics_demo_msgs
{

namespace srv
{

namespace builder
{

class Init_PositionService_Response_output
{
public:
  Init_PositionService_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_robotics_demo_msgs::srv::PositionService_Response output(::unity_robotics_demo_msgs::srv::PositionService_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::srv::PositionService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::srv::PositionService_Response>()
{
  return unity_robotics_demo_msgs::srv::builder::Init_PositionService_Response_output();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__SRV__DETAIL__POSITION_SERVICE__BUILDER_HPP_
