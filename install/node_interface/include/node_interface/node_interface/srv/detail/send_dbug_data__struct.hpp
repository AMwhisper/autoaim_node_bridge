// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from node_interface:srv/SendDbugData.idl
// generated code does not contain a copyright notice

#ifndef NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__STRUCT_HPP_
#define NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendDbugData_Request __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendDbugData_Request __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendDbugData_Request_
{
  using Type = SendDbugData_Request_<ContainerAllocator>;

  explicit SendDbugData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 18>::iterator, uint8_t>(this->dbus_buffer.begin(), this->dbus_buffer.end(), 0);
    }
  }

  explicit SendDbugData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dbus_buffer(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 18>::iterator, uint8_t>(this->dbus_buffer.begin(), this->dbus_buffer.end(), 0);
    }
  }

  // field types and members
  using _dbus_buffer_type =
    std::array<uint8_t, 18>;
  _dbus_buffer_type dbus_buffer;

  // setters for named parameter idiom
  Type & set__dbus_buffer(
    const std::array<uint8_t, 18> & _arg)
  {
    this->dbus_buffer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    node_interface::srv::SendDbugData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendDbugData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendDbugData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendDbugData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendDbugData_Request
    std::shared_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendDbugData_Request
    std::shared_ptr<node_interface::srv::SendDbugData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendDbugData_Request_ & other) const
  {
    if (this->dbus_buffer != other.dbus_buffer) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendDbugData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendDbugData_Request_

// alias to use template instance with default allocator
using SendDbugData_Request =
  node_interface::srv::SendDbugData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface


#ifndef _WIN32
# define DEPRECATED__node_interface__srv__SendDbugData_Response __attribute__((deprecated))
#else
# define DEPRECATED__node_interface__srv__SendDbugData_Response __declspec(deprecated)
#endif

namespace node_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendDbugData_Response_
{
  using Type = SendDbugData_Response_<ContainerAllocator>;

  explicit SendDbugData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit SendDbugData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    node_interface::srv::SendDbugData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const node_interface::srv::SendDbugData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendDbugData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      node_interface::srv::SendDbugData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__node_interface__srv__SendDbugData_Response
    std::shared_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__node_interface__srv__SendDbugData_Response
    std::shared_ptr<node_interface::srv::SendDbugData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendDbugData_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendDbugData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendDbugData_Response_

// alias to use template instance with default allocator
using SendDbugData_Response =
  node_interface::srv::SendDbugData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace node_interface

namespace node_interface
{

namespace srv
{

struct SendDbugData
{
  using Request = node_interface::srv::SendDbugData_Request;
  using Response = node_interface::srv::SendDbugData_Response;
};

}  // namespace srv

}  // namespace node_interface

#endif  // NODE_INTERFACE__SRV__DETAIL__SEND_DBUG_DATA__STRUCT_HPP_
