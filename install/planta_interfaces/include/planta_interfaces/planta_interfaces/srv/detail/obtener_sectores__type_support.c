// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planta_interfaces:srv/ObtenerSectores.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planta_interfaces/srv/detail/obtener_sectores__rosidl_typesupport_introspection_c.h"
#include "planta_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planta_interfaces/srv/detail/obtener_sectores__functions.h"
#include "planta_interfaces/srv/detail/obtener_sectores__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planta_interfaces__srv__ObtenerSectores_Request__init(message_memory);
}

void planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_fini_function(void * message_memory)
{
  planta_interfaces__srv__ObtenerSectores_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planta_interfaces__srv__ObtenerSectores_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_members = {
  "planta_interfaces__srv",  // message namespace
  "ObtenerSectores_Request",  // message name
  1,  // number of fields
  sizeof(planta_interfaces__srv__ObtenerSectores_Request),
  false,  // has_any_key_member_
  planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_member_array,  // message members
  planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_type_support_handle = {
  0,
  &planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_members,
  get_message_typesupport_handle_function,
  &planta_interfaces__srv__ObtenerSectores_Request__get_type_hash,
  &planta_interfaces__srv__ObtenerSectores_Request__get_type_description,
  &planta_interfaces__srv__ObtenerSectores_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planta_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Request)() {
  if (!planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_type_support_handle.typesupport_identifier) {
    planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planta_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__functions.h"
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__struct.h"


// Include directives for member types
// Member `lineas`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planta_interfaces__srv__ObtenerSectores_Response__init(message_memory);
}

void planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_fini_function(void * message_memory)
{
  planta_interfaces__srv__ObtenerSectores_Response__fini(message_memory);
}

size_t planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__size_function__ObtenerSectores_Response__lineas(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Response__lineas(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Response__lineas(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__fetch_function__ObtenerSectores_Response__lineas(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Response__lineas(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__assign_function__ObtenerSectores_Response__lineas(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Response__lineas(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__resize_function__ObtenerSectores_Response__lineas(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_member_array[2] = {
  {
    "exito",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planta_interfaces__srv__ObtenerSectores_Response, exito),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lineas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planta_interfaces__srv__ObtenerSectores_Response, lineas),  // bytes offset in struct
    NULL,  // default value
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__size_function__ObtenerSectores_Response__lineas,  // size() function pointer
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Response__lineas,  // get_const(index) function pointer
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Response__lineas,  // get(index) function pointer
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__fetch_function__ObtenerSectores_Response__lineas,  // fetch(index, &value) function pointer
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__assign_function__ObtenerSectores_Response__lineas,  // assign(index, value) function pointer
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__resize_function__ObtenerSectores_Response__lineas  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_members = {
  "planta_interfaces__srv",  // message namespace
  "ObtenerSectores_Response",  // message name
  2,  // number of fields
  sizeof(planta_interfaces__srv__ObtenerSectores_Response),
  false,  // has_any_key_member_
  planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_member_array,  // message members
  planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_type_support_handle = {
  0,
  &planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_members,
  get_message_typesupport_handle_function,
  &planta_interfaces__srv__ObtenerSectores_Response__get_type_hash,
  &planta_interfaces__srv__ObtenerSectores_Response__get_type_description,
  &planta_interfaces__srv__ObtenerSectores_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planta_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Response)() {
  if (!planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_type_support_handle.typesupport_identifier) {
    planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planta_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__functions.h"
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "planta_interfaces/srv/obtener_sectores.h"
// Member `request`
// Member `response`
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planta_interfaces__srv__ObtenerSectores_Event__init(message_memory);
}

void planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_fini_function(void * message_memory)
{
  planta_interfaces__srv__ObtenerSectores_Event__fini(message_memory);
}

size_t planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__size_function__ObtenerSectores_Event__request(
  const void * untyped_member)
{
  const planta_interfaces__srv__ObtenerSectores_Request__Sequence * member =
    (const planta_interfaces__srv__ObtenerSectores_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Event__request(
  const void * untyped_member, size_t index)
{
  const planta_interfaces__srv__ObtenerSectores_Request__Sequence * member =
    (const planta_interfaces__srv__ObtenerSectores_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Event__request(
  void * untyped_member, size_t index)
{
  planta_interfaces__srv__ObtenerSectores_Request__Sequence * member =
    (planta_interfaces__srv__ObtenerSectores_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__fetch_function__ObtenerSectores_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const planta_interfaces__srv__ObtenerSectores_Request * item =
    ((const planta_interfaces__srv__ObtenerSectores_Request *)
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Event__request(untyped_member, index));
  planta_interfaces__srv__ObtenerSectores_Request * value =
    (planta_interfaces__srv__ObtenerSectores_Request *)(untyped_value);
  *value = *item;
}

void planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__assign_function__ObtenerSectores_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  planta_interfaces__srv__ObtenerSectores_Request * item =
    ((planta_interfaces__srv__ObtenerSectores_Request *)
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Event__request(untyped_member, index));
  const planta_interfaces__srv__ObtenerSectores_Request * value =
    (const planta_interfaces__srv__ObtenerSectores_Request *)(untyped_value);
  *item = *value;
}

bool planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__resize_function__ObtenerSectores_Event__request(
  void * untyped_member, size_t size)
{
  planta_interfaces__srv__ObtenerSectores_Request__Sequence * member =
    (planta_interfaces__srv__ObtenerSectores_Request__Sequence *)(untyped_member);
  planta_interfaces__srv__ObtenerSectores_Request__Sequence__fini(member);
  return planta_interfaces__srv__ObtenerSectores_Request__Sequence__init(member, size);
}

size_t planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__size_function__ObtenerSectores_Event__response(
  const void * untyped_member)
{
  const planta_interfaces__srv__ObtenerSectores_Response__Sequence * member =
    (const planta_interfaces__srv__ObtenerSectores_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Event__response(
  const void * untyped_member, size_t index)
{
  const planta_interfaces__srv__ObtenerSectores_Response__Sequence * member =
    (const planta_interfaces__srv__ObtenerSectores_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Event__response(
  void * untyped_member, size_t index)
{
  planta_interfaces__srv__ObtenerSectores_Response__Sequence * member =
    (planta_interfaces__srv__ObtenerSectores_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__fetch_function__ObtenerSectores_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const planta_interfaces__srv__ObtenerSectores_Response * item =
    ((const planta_interfaces__srv__ObtenerSectores_Response *)
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Event__response(untyped_member, index));
  planta_interfaces__srv__ObtenerSectores_Response * value =
    (planta_interfaces__srv__ObtenerSectores_Response *)(untyped_value);
  *value = *item;
}

void planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__assign_function__ObtenerSectores_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  planta_interfaces__srv__ObtenerSectores_Response * item =
    ((planta_interfaces__srv__ObtenerSectores_Response *)
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Event__response(untyped_member, index));
  const planta_interfaces__srv__ObtenerSectores_Response * value =
    (const planta_interfaces__srv__ObtenerSectores_Response *)(untyped_value);
  *item = *value;
}

bool planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__resize_function__ObtenerSectores_Event__response(
  void * untyped_member, size_t size)
{
  planta_interfaces__srv__ObtenerSectores_Response__Sequence * member =
    (planta_interfaces__srv__ObtenerSectores_Response__Sequence *)(untyped_member);
  planta_interfaces__srv__ObtenerSectores_Response__Sequence__fini(member);
  return planta_interfaces__srv__ObtenerSectores_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planta_interfaces__srv__ObtenerSectores_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(planta_interfaces__srv__ObtenerSectores_Event, request),  // bytes offset in struct
    NULL,  // default value
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__size_function__ObtenerSectores_Event__request,  // size() function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Event__request,  // get_const(index) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Event__request,  // get(index) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__fetch_function__ObtenerSectores_Event__request,  // fetch(index, &value) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__assign_function__ObtenerSectores_Event__request,  // assign(index, value) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__resize_function__ObtenerSectores_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(planta_interfaces__srv__ObtenerSectores_Event, response),  // bytes offset in struct
    NULL,  // default value
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__size_function__ObtenerSectores_Event__response,  // size() function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_const_function__ObtenerSectores_Event__response,  // get_const(index) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__get_function__ObtenerSectores_Event__response,  // get(index) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__fetch_function__ObtenerSectores_Event__response,  // fetch(index, &value) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__assign_function__ObtenerSectores_Event__response,  // assign(index, value) function pointer
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__resize_function__ObtenerSectores_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_members = {
  "planta_interfaces__srv",  // message namespace
  "ObtenerSectores_Event",  // message name
  3,  // number of fields
  sizeof(planta_interfaces__srv__ObtenerSectores_Event),
  false,  // has_any_key_member_
  planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_member_array,  // message members
  planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_type_support_handle = {
  0,
  &planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_members,
  get_message_typesupport_handle_function,
  &planta_interfaces__srv__ObtenerSectores_Event__get_type_hash,
  &planta_interfaces__srv__ObtenerSectores_Event__get_type_description,
  &planta_interfaces__srv__ObtenerSectores_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planta_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Event)() {
  planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Request)();
  planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Response)();
  if (!planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_type_support_handle.typesupport_identifier) {
    planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "planta_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_service_members = {
  "planta_interfaces__srv",  // service namespace
  "ObtenerSectores",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_type_support_handle,
  NULL,  // response message
  // planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_type_support_handle
  NULL  // event_message
  // planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_type_support_handle
};


static rosidl_service_type_support_t planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_service_type_support_handle = {
  0,
  &planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_service_members,
  get_service_typesupport_handle_function,
  &planta_interfaces__srv__ObtenerSectores_Request__rosidl_typesupport_introspection_c__ObtenerSectores_Request_message_type_support_handle,
  &planta_interfaces__srv__ObtenerSectores_Response__rosidl_typesupport_introspection_c__ObtenerSectores_Response_message_type_support_handle,
  &planta_interfaces__srv__ObtenerSectores_Event__rosidl_typesupport_introspection_c__ObtenerSectores_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    planta_interfaces,
    srv,
    ObtenerSectores
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    planta_interfaces,
    srv,
    ObtenerSectores
  ),
  &planta_interfaces__srv__ObtenerSectores__get_type_hash,
  &planta_interfaces__srv__ObtenerSectores__get_type_description,
  &planta_interfaces__srv__ObtenerSectores__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planta_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores)(void) {
  if (!planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_service_type_support_handle.typesupport_identifier) {
    planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planta_interfaces, srv, ObtenerSectores_Event)()->data;
  }

  return &planta_interfaces__srv__detail__obtener_sectores__rosidl_typesupport_introspection_c__ObtenerSectores_service_type_support_handle;
}
