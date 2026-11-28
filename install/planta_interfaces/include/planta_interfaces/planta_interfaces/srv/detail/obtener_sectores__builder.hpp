// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planta_interfaces:srv/ObtenerSectores.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planta_interfaces/srv/obtener_sectores.hpp"


#ifndef PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__BUILDER_HPP_
#define PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planta_interfaces/srv/detail/obtener_sectores__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planta_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planta_interfaces::srv::ObtenerSectores_Request>()
{
  return ::planta_interfaces::srv::ObtenerSectores_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace planta_interfaces


namespace planta_interfaces
{

namespace srv
{

namespace builder
{

class Init_ObtenerSectores_Response_lineas
{
public:
  explicit Init_ObtenerSectores_Response_lineas(::planta_interfaces::srv::ObtenerSectores_Response & msg)
  : msg_(msg)
  {}
  ::planta_interfaces::srv::ObtenerSectores_Response lineas(::planta_interfaces::srv::ObtenerSectores_Response::_lineas_type arg)
  {
    msg_.lineas = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planta_interfaces::srv::ObtenerSectores_Response msg_;
};

class Init_ObtenerSectores_Response_exito
{
public:
  Init_ObtenerSectores_Response_exito()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObtenerSectores_Response_lineas exito(::planta_interfaces::srv::ObtenerSectores_Response::_exito_type arg)
  {
    msg_.exito = std::move(arg);
    return Init_ObtenerSectores_Response_lineas(msg_);
  }

private:
  ::planta_interfaces::srv::ObtenerSectores_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planta_interfaces::srv::ObtenerSectores_Response>()
{
  return planta_interfaces::srv::builder::Init_ObtenerSectores_Response_exito();
}

}  // namespace planta_interfaces


namespace planta_interfaces
{

namespace srv
{

namespace builder
{

class Init_ObtenerSectores_Event_response
{
public:
  explicit Init_ObtenerSectores_Event_response(::planta_interfaces::srv::ObtenerSectores_Event & msg)
  : msg_(msg)
  {}
  ::planta_interfaces::srv::ObtenerSectores_Event response(::planta_interfaces::srv::ObtenerSectores_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planta_interfaces::srv::ObtenerSectores_Event msg_;
};

class Init_ObtenerSectores_Event_request
{
public:
  explicit Init_ObtenerSectores_Event_request(::planta_interfaces::srv::ObtenerSectores_Event & msg)
  : msg_(msg)
  {}
  Init_ObtenerSectores_Event_response request(::planta_interfaces::srv::ObtenerSectores_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ObtenerSectores_Event_response(msg_);
  }

private:
  ::planta_interfaces::srv::ObtenerSectores_Event msg_;
};

class Init_ObtenerSectores_Event_info
{
public:
  Init_ObtenerSectores_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObtenerSectores_Event_request info(::planta_interfaces::srv::ObtenerSectores_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ObtenerSectores_Event_request(msg_);
  }

private:
  ::planta_interfaces::srv::ObtenerSectores_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planta_interfaces::srv::ObtenerSectores_Event>()
{
  return planta_interfaces::srv::builder::Init_ObtenerSectores_Event_info();
}

}  // namespace planta_interfaces

#endif  // PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__BUILDER_HPP_
