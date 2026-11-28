// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planta_interfaces:srv/ObtenerSectores.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planta_interfaces/srv/obtener_sectores.hpp"


#ifndef PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__TRAITS_HPP_
#define PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planta_interfaces/srv/detail/obtener_sectores__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace planta_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObtenerSectores_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObtenerSectores_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObtenerSectores_Request & msg, bool use_flow_style = false)
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

}  // namespace planta_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use planta_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planta_interfaces::srv::ObtenerSectores_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  planta_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planta_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const planta_interfaces::srv::ObtenerSectores_Request & msg)
{
  return planta_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<planta_interfaces::srv::ObtenerSectores_Request>()
{
  return "planta_interfaces::srv::ObtenerSectores_Request";
}

template<>
inline const char * name<planta_interfaces::srv::ObtenerSectores_Request>()
{
  return "planta_interfaces/srv/ObtenerSectores_Request";
}

template<>
struct has_fixed_size<planta_interfaces::srv::ObtenerSectores_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<planta_interfaces::srv::ObtenerSectores_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<planta_interfaces::srv::ObtenerSectores_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace planta_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObtenerSectores_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: exito
  {
    out << "exito: ";
    rosidl_generator_traits::value_to_yaml(msg.exito, out);
    out << ", ";
  }

  // member: lineas
  {
    if (msg.lineas.size() == 0) {
      out << "lineas: []";
    } else {
      out << "lineas: [";
      size_t pending_items = msg.lineas.size();
      for (auto item : msg.lineas) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObtenerSectores_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exito
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exito: ";
    rosidl_generator_traits::value_to_yaml(msg.exito, out);
    out << "\n";
  }

  // member: lineas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lineas.size() == 0) {
      out << "lineas: []\n";
    } else {
      out << "lineas:\n";
      for (auto item : msg.lineas) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObtenerSectores_Response & msg, bool use_flow_style = false)
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

}  // namespace planta_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use planta_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planta_interfaces::srv::ObtenerSectores_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  planta_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planta_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const planta_interfaces::srv::ObtenerSectores_Response & msg)
{
  return planta_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<planta_interfaces::srv::ObtenerSectores_Response>()
{
  return "planta_interfaces::srv::ObtenerSectores_Response";
}

template<>
inline const char * name<planta_interfaces::srv::ObtenerSectores_Response>()
{
  return "planta_interfaces/srv/ObtenerSectores_Response";
}

template<>
struct has_fixed_size<planta_interfaces::srv::ObtenerSectores_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planta_interfaces::srv::ObtenerSectores_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planta_interfaces::srv::ObtenerSectores_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace planta_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ObtenerSectores_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObtenerSectores_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObtenerSectores_Event & msg, bool use_flow_style = false)
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

}  // namespace planta_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use planta_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planta_interfaces::srv::ObtenerSectores_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  planta_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planta_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const planta_interfaces::srv::ObtenerSectores_Event & msg)
{
  return planta_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<planta_interfaces::srv::ObtenerSectores_Event>()
{
  return "planta_interfaces::srv::ObtenerSectores_Event";
}

template<>
inline const char * name<planta_interfaces::srv::ObtenerSectores_Event>()
{
  return "planta_interfaces/srv/ObtenerSectores_Event";
}

template<>
struct has_fixed_size<planta_interfaces::srv::ObtenerSectores_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planta_interfaces::srv::ObtenerSectores_Event>
  : std::integral_constant<bool, has_bounded_size<planta_interfaces::srv::ObtenerSectores_Request>::value && has_bounded_size<planta_interfaces::srv::ObtenerSectores_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<planta_interfaces::srv::ObtenerSectores_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planta_interfaces::srv::ObtenerSectores>()
{
  return "planta_interfaces::srv::ObtenerSectores";
}

template<>
inline const char * name<planta_interfaces::srv::ObtenerSectores>()
{
  return "planta_interfaces/srv/ObtenerSectores";
}

template<>
struct has_fixed_size<planta_interfaces::srv::ObtenerSectores>
  : std::integral_constant<
    bool,
    has_fixed_size<planta_interfaces::srv::ObtenerSectores_Request>::value &&
    has_fixed_size<planta_interfaces::srv::ObtenerSectores_Response>::value
  >
{
};

template<>
struct has_bounded_size<planta_interfaces::srv::ObtenerSectores>
  : std::integral_constant<
    bool,
    has_bounded_size<planta_interfaces::srv::ObtenerSectores_Request>::value &&
    has_bounded_size<planta_interfaces::srv::ObtenerSectores_Response>::value
  >
{
};

template<>
struct is_service<planta_interfaces::srv::ObtenerSectores>
  : std::true_type
{
};

template<>
struct is_service_request<planta_interfaces::srv::ObtenerSectores_Request>
  : std::true_type
{
};

template<>
struct is_service_response<planta_interfaces::srv::ObtenerSectores_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__TRAITS_HPP_
