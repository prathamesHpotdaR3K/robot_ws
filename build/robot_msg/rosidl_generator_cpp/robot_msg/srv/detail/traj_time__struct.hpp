// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_msg:srv/TrajTime.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__STRUCT_HPP_
#define ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_msg__srv__TrajTime_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__srv__TrajTime_Request __declspec(deprecated)
#endif

namespace robot_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajTime_Request_
{
  using Type = TrajTime_Request_<ContainerAllocator>;

  explicit TrajTime_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
      this->time = 0ll;
    }
  }

  explicit TrajTime_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
      this->time = 0ll;
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filename_type filename;
  using _time_type =
    int64_t;
  _time_type time;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filename = _arg;
    return *this;
  }
  Type & set__time(
    const int64_t & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::srv::TrajTime_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::srv::TrajTime_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::TrajTime_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::TrajTime_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__srv__TrajTime_Request
    std::shared_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__srv__TrajTime_Request
    std::shared_ptr<robot_msg::srv::TrajTime_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajTime_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajTime_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajTime_Request_

// alias to use template instance with default allocator
using TrajTime_Request =
  robot_msg::srv::TrajTime_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_msg


#ifndef _WIN32
# define DEPRECATED__robot_msg__srv__TrajTime_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_msg__srv__TrajTime_Response __declspec(deprecated)
#endif

namespace robot_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TrajTime_Response_
{
  using Type = TrajTime_Response_<ContainerAllocator>;

  explicit TrajTime_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit TrajTime_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_msg::srv::TrajTime_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_msg::srv::TrajTime_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::TrajTime_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_msg::srv::TrajTime_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_msg__srv__TrajTime_Response
    std::shared_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_msg__srv__TrajTime_Response
    std::shared_ptr<robot_msg::srv::TrajTime_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajTime_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajTime_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajTime_Response_

// alias to use template instance with default allocator
using TrajTime_Response =
  robot_msg::srv::TrajTime_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_msg

namespace robot_msg
{

namespace srv
{

struct TrajTime
{
  using Request = robot_msg::srv::TrajTime_Request;
  using Response = robot_msg::srv::TrajTime_Response;
};

}  // namespace srv

}  // namespace robot_msg

#endif  // ROBOT_MSG__SRV__DETAIL__TRAJ_TIME__STRUCT_HPP_
