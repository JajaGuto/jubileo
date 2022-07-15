// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/PosRot.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__BUILDER_HPP_

#include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_PosRot_rot_w
{
public:
  explicit Init_PosRot_rot_w(::unity_robotics_demo_msgs::msg::PosRot & msg)
  : msg_(msg)
  {}
  ::unity_robotics_demo_msgs::msg::PosRot rot_w(::unity_robotics_demo_msgs::msg::PosRot::_rot_w_type arg)
  {
    msg_.rot_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

class Init_PosRot_rot_z
{
public:
  explicit Init_PosRot_rot_z(::unity_robotics_demo_msgs::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_w rot_z(::unity_robotics_demo_msgs::msg::PosRot::_rot_z_type arg)
  {
    msg_.rot_z = std::move(arg);
    return Init_PosRot_rot_w(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

class Init_PosRot_rot_y
{
public:
  explicit Init_PosRot_rot_y(::unity_robotics_demo_msgs::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_z rot_y(::unity_robotics_demo_msgs::msg::PosRot::_rot_y_type arg)
  {
    msg_.rot_y = std::move(arg);
    return Init_PosRot_rot_z(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

class Init_PosRot_rot_x
{
public:
  explicit Init_PosRot_rot_x(::unity_robotics_demo_msgs::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_y rot_x(::unity_robotics_demo_msgs::msg::PosRot::_rot_x_type arg)
  {
    msg_.rot_x = std::move(arg);
    return Init_PosRot_rot_y(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

class Init_PosRot_pos_z
{
public:
  explicit Init_PosRot_pos_z(::unity_robotics_demo_msgs::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_rot_x pos_z(::unity_robotics_demo_msgs::msg::PosRot::_pos_z_type arg)
  {
    msg_.pos_z = std::move(arg);
    return Init_PosRot_rot_x(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

class Init_PosRot_pos_y
{
public:
  explicit Init_PosRot_pos_y(::unity_robotics_demo_msgs::msg::PosRot & msg)
  : msg_(msg)
  {}
  Init_PosRot_pos_z pos_y(::unity_robotics_demo_msgs::msg::PosRot::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_PosRot_pos_z(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

class Init_PosRot_pos_x
{
public:
  Init_PosRot_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosRot_pos_y pos_x(::unity_robotics_demo_msgs::msg::PosRot::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_PosRot_pos_y(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::PosRot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::PosRot>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_PosRot_pos_x();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__BUILDER_HPP_
