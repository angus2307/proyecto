// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planta_interfaces:srv/ObtenerSectores.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planta_interfaces/srv/obtener_sectores.h"


#ifndef PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__STRUCT_H_
#define PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ObtenerSectores in the package planta_interfaces.
typedef struct planta_interfaces__srv__ObtenerSectores_Request
{
  uint8_t structure_needs_at_least_one_member;
} planta_interfaces__srv__ObtenerSectores_Request;

// Struct for a sequence of planta_interfaces__srv__ObtenerSectores_Request.
typedef struct planta_interfaces__srv__ObtenerSectores_Request__Sequence
{
  planta_interfaces__srv__ObtenerSectores_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planta_interfaces__srv__ObtenerSectores_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'lineas'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ObtenerSectores in the package planta_interfaces.
typedef struct planta_interfaces__srv__ObtenerSectores_Response
{
  bool exito;
  rosidl_runtime_c__String__Sequence lineas;
} planta_interfaces__srv__ObtenerSectores_Response;

// Struct for a sequence of planta_interfaces__srv__ObtenerSectores_Response.
typedef struct planta_interfaces__srv__ObtenerSectores_Response__Sequence
{
  planta_interfaces__srv__ObtenerSectores_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planta_interfaces__srv__ObtenerSectores_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  planta_interfaces__srv__ObtenerSectores_Event__request__MAX_SIZE = 1
};
// response
enum
{
  planta_interfaces__srv__ObtenerSectores_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ObtenerSectores in the package planta_interfaces.
typedef struct planta_interfaces__srv__ObtenerSectores_Event
{
  service_msgs__msg__ServiceEventInfo info;
  planta_interfaces__srv__ObtenerSectores_Request__Sequence request;
  planta_interfaces__srv__ObtenerSectores_Response__Sequence response;
} planta_interfaces__srv__ObtenerSectores_Event;

// Struct for a sequence of planta_interfaces__srv__ObtenerSectores_Event.
typedef struct planta_interfaces__srv__ObtenerSectores_Event__Sequence
{
  planta_interfaces__srv__ObtenerSectores_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planta_interfaces__srv__ObtenerSectores_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANTA_INTERFACES__SRV__DETAIL__OBTENER_SECTORES__STRUCT_H_
