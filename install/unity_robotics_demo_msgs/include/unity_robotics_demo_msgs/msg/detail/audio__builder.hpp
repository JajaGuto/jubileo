// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/Audio.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__BUILDER_HPP_

#include "unity_robotics_demo_msgs/msg/detail/audio__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_Audio_data
{
public:
  Init_Audio_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unity_robotics_demo_msgs::msg::Audio data(::unity_robotics_demo_msgs::msg::Audio::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::Audio msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::Audio>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_Audio_data();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__AUDIO__BUILDER_HPP_
