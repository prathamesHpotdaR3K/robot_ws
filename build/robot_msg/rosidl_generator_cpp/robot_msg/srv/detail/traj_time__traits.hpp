// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_msg:srv/TrajTime.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__TRAITS_HPP_
#define ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_msg/srv/detail/traj_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajTime_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filename
  {
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajTime_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajTime_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_msg

namespace rosidl_generator_traits
{

[[deprecated("use robot_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msg::srv::TrajTime_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::srv::TrajTime_Request & msg)
{
  return robot_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::srv::TrajTime_Request>()
{
  return "robot_msg::srv::TrajTime_Request";
}

template<>
inline const char * name<robot_msg::srv::TrajTime_Request>()
{
  return "robot_msg/srv/TrajTime_Request";
}

template<>
struct has_fixed_size<robot_msg::srv::TrajTime_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_msg::srv::TrajTime_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_msg::srv::TrajTime_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const TrajTime_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajTime_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajTime_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_msg

namespace rosidl_generator_traits
{

[[deprecated("use robot_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_msg::srv::TrajTime_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_msg::srv::TrajTime_Response & msg)
{
  return robot_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_msg::srv::TrajTime_Response>()
{
  return "robot_msg::srv::TrajTime_Response";
}

template<>
inline const char * name<robot_msg::srv::TrajTime_Response>()
{
  return "robot_msg/srv/TrajTime_Response";
}

template<>
struct has_fixed_size<robot_msg::srv::TrajTime_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_msg::srv::TrajTime_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_msg::srv::TrajTime_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_msg::srv::TrajTime>()
{
  return "robot_msg::srv::TrajTime";
}

template<>
inline const char * name<robot_msg::srv::TrajTime>()
{
  return "robot_msg/srv/TrajTime";
}

template<>
struct has_fixed_size<robot_msg::srv::TrajTime>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_msg::srv::TrajTime_Request>::value &&
    has_fixed_size<robot_msg::srv::TrajTime_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_msg::srv::TrajTime>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_msg::srv::TrajTime_Request>::value &&
    has_bounded_size<robot_msg::srv::TrajTime_Response>::value
  >
{
};

template<>
struct is_service<robot_msg::srv::TrajTime>
  : std::true_type
{
};

template<>
struct is_service_request<robot_msg::srv::TrajTime_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_msg::srv::TrajTime_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__TRAITS_HPP_
