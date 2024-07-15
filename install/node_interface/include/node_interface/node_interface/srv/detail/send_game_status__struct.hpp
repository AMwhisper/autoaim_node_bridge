// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendGameStatus.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_GAME_STATUS__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_GAME_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendGameStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendGameStatus_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendGameStatus_Request_
{
  using Type = SendGameStatus_Request_<ContainerAllocator>;

  explicit SendGameStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->sync_time_stamp = 0ull;
    }
  }

  explicit SendGameStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_type = 0;
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->sync_time_stamp = 0ull;
    }
  }

  // field types and members
  using _game_type_type =
    uint8_t;
  _game_type_type game_type;
  using _game_progress_type =
    uint8_t;
  _game_progress_type game_progress;
  using _stage_remain_time_type =
    uint16_t;
  _stage_remain_time_type stage_remain_time;
  using _sync_time_stamp_type =
    uint64_t;
  _sync_time_stamp_type sync_time_stamp;

  // setters for named parameter idiom
  Type & set__game_type(
    const uint8_t & _arg)
  {
    this->game_type = _arg;
    return *this;
  }
  Type & set__game_progress(
    const uint8_t & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const uint16_t & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }
  Type & set__sync_time_stamp(
    const uint64_t & _arg)
  {
    this->sync_time_stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendGameStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendGameStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGameStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGameStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendGameStatus_Request
    std::shared_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendGameStatus_Request
    std::shared_ptr<node_interface::srv::SendGameStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendGameStatus_Request_ & other) const
  {
    if (this->game_type != other.game_type) {
      return false;
    }
    if (this->game_progress != other.game_progress) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    if (this->sync_time_stamp != other.sync_time_stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendGameStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendGameStatus_Request_

// alias to use template instance with default allocator
using SendGameStatus_Request =
  node_interface::srv::SendGameStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendGameStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendGameStatus_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendGameStatus_Response_
{
  using Type = SendGameStatus_Response_<ContainerAllocator>;

  explicit SendGameStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendGameStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendGameStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendGameStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGameStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendGameStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendGameStatus_Response
    std::shared_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendGameStatus_Response
    std::shared_ptr<node_interface::srv::SendGameStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendGameStatus_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendGameStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendGameStatus_Response_

// alias to use template instance with default allocator
using SendGameStatus_Response =
  node_interface::srv::SendGameStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendGameStatus
{
  using Request = node_interface::srv::SendGameStatus_Request;
  using Response = node_interface::srv::SendGameStatus_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_GAME_STATUS__STRUCT_HPP_
