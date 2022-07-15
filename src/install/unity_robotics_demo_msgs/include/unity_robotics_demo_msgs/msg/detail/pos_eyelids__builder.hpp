// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/PosEyelids.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__BUILDER_HPP_

#include "unity_robotics_demo_msgs/msg/detail/pos_eyelids__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_PosEyelids_pos_down
{
public:
  explicit Init_PosEyelids_pos_down(::unity_robotics_demo_msgs::msg::PosEyelids & msg)
  : msg_(msg)
  {}
  ::unity_robotics_demo_msgs::msg::PosEyelids pos_down(::unity_robotics_demo_msgs::msg::PosEyelids::_pos_down_type arg)
  {
    msg_.pos_down = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosEyelids msg_;
};

class Init_PosEyelids_pos_up
{
public:
  Init_PosEyelids_pos_up()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosEyelids_pos_down pos_up(::unity_robotics_demo_msgs::msg::PosEyelids::_pos_up_type arg)
  {
    msg_.pos_up = std::move(arg);
    return Init_PosEyelids_pos_down(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosEyelids msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::PosEyelids>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_PosEyelids_pos_up();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_EYELIDS__BUILDER_HPP_
