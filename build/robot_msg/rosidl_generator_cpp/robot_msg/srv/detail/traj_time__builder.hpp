// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_msg:srv/TrajTime.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__BUILDER_HPP_
#define ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_msg/srv/detail/traj_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_TrajTime_Request_time
{
public:
  explicit Init_TrajTime_Request_time(::robot_msg::srv::TrajTime_Request & msg)
  : msg_(msg)
  {}
  ::robot_msg::srv::TrajTime_Request time(::robot_msg::srv::TrajTime_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::TrajTime_Request msg_;
};

class Init_TrajTime_Request_filename
{
public:
  Init_TrajTime_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajTime_Request_time filename(::robot_msg::srv::TrajTime_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_TrajTime_Request_time(msg_);
  }

private:
  ::robot_msg::srv::TrajTime_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::TrajTime_Request>()
{
  return robot_msg::srv::builder::Init_TrajTime_Request_filename();
}

}  // namespace robot_msg


namespace robot_msg
{

namespace srv
{

namespace builder
{

class Init_TrajTime_Response_result
{
public:
  Init_TrajTime_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_msg::srv::TrajTime_Response result(::robot_msg::srv::TrajTime_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_msg::srv::TrajTime_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_msg::srv::TrajTime_Response>()
{
  return robot_msg::srv::builder::Init_TrajTime_Response_result();
}

}  // namespace robot_msg

#endif  // ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__BUILDER_HPP_
