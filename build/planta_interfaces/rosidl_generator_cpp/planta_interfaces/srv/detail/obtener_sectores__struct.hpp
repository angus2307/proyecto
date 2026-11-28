// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planta_interfaces:srv/ObtenerSectores.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planta_interfaces/srv/obtener_sectores.hpp"


#ifndef PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__STRUCT_HPP_
#define PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__planta_interfaces__srv__ObtenerSectores_Request __attribute__((deprecated))
#else
# define DEPRECATED__planta_interfaces__srv__ObtenerSectores_Request __declspec(deprecated)
#endif

namespace planta_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObtenerSectores_Request_
{
  using Type = ObtenerSectores_Request_<ContainerAllocator>;

  explicit ObtenerSectores_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ObtenerSectores_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planta_interfaces__srv__ObtenerSectores_Request
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planta_interfaces__srv__ObtenerSectores_Request
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObtenerSectores_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObtenerSectores_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObtenerSectores_Request_

// alias to use template instance with default allocator
using ObtenerSectores_Request =
  planta_interfaces::srv::ObtenerSectores_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planta_interfaces


#ifndef _WIN32
# define DEPRECATED__planta_interfaces__srv__ObtenerSectores_Response __attribute__((deprecated))
#else
# define DEPRECATED__planta_interfaces__srv__ObtenerSectores_Response __declspec(deprecated)
#endif

namespace planta_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObtenerSectores_Response_
{
  using Type = ObtenerSectores_Response_<ContainerAllocator>;

  explicit ObtenerSectores_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exito = false;
    }
  }

  explicit ObtenerSectores_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exito = false;
    }
  }

  // field types and members
  using _exito_type =
    bool;
  _exito_type exito;
  using _lineas_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _lineas_type lineas;

  // setters for named parameter idiom
  Type & set__exito(
    const bool & _arg)
  {
    this->exito = _arg;
    return *this;
  }
  Type & set__lineas(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->lineas = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planta_interfaces__srv__ObtenerSectores_Response
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planta_interfaces__srv__ObtenerSectores_Response
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObtenerSectores_Response_ & other) const
  {
    if (this->exito != other.exito) {
      return false;
    }
    if (this->lineas != other.lineas) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObtenerSectores_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObtenerSectores_Response_

// alias to use template instance with default allocator
using ObtenerSectores_Response =
  planta_interfaces::srv::ObtenerSectores_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planta_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planta_interfaces__srv__ObtenerSectores_Event __attribute__((deprecated))
#else
# define DEPRECATED__planta_interfaces__srv__ObtenerSectores_Event __declspec(deprecated)
#endif

namespace planta_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ObtenerSectores_Event_
{
  using Type = ObtenerSectores_Event_<ContainerAllocator>;

  explicit ObtenerSectores_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ObtenerSectores_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planta_interfaces::srv::ObtenerSectores_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planta_interfaces::srv::ObtenerSectores_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planta_interfaces__srv__ObtenerSectores_Event
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planta_interfaces__srv__ObtenerSectores_Event
    std::shared_ptr<planta_interfaces::srv::ObtenerSectores_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObtenerSectores_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObtenerSectores_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObtenerSectores_Event_

// alias to use template instance with default allocator
using ObtenerSectores_Event =
  planta_interfaces::srv::ObtenerSectores_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planta_interfaces

namespace planta_interfaces
{

namespace srv
{

struct ObtenerSectores
{
  using Request = planta_interfaces::srv::ObtenerSectores_Request;
  using Response = planta_interfaces::srv::ObtenerSectores_Response;
  using Event = planta_interfaces::srv::ObtenerSectores_Event;
};

}  // namespace srv

}  // namespace planta_interfaces

#endif  // PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__STRUCT_HPP_
