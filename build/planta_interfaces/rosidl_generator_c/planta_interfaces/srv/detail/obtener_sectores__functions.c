// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planta_interfaces:srv/ObtenerSectores.idl
// generated code does not contain a copyright notice
#include "planta_interfaces/srv/detail/obtener_sectores__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
planta_interfaces__srv__ObtenerSectores_Request__init(planta_interfaces__srv__ObtenerSectores_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
planta_interfaces__srv__ObtenerSectores_Request__fini(planta_interfaces__srv__ObtenerSectores_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
planta_interfaces__srv__ObtenerSectores_Request__are_equal(const planta_interfaces__srv__ObtenerSectores_Request * lhs, const planta_interfaces__srv__ObtenerSectores_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
planta_interfaces__srv__ObtenerSectores_Request__copy(
  const planta_interfaces__srv__ObtenerSectores_Request * input,
  planta_interfaces__srv__ObtenerSectores_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

planta_interfaces__srv__ObtenerSectores_Request *
planta_interfaces__srv__ObtenerSectores_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Request * msg = (planta_interfaces__srv__ObtenerSectores_Request *)allocator.allocate(sizeof(planta_interfaces__srv__ObtenerSectores_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planta_interfaces__srv__ObtenerSectores_Request));
  bool success = planta_interfaces__srv__ObtenerSectores_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planta_interfaces__srv__ObtenerSectores_Request__destroy(planta_interfaces__srv__ObtenerSectores_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planta_interfaces__srv__ObtenerSectores_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planta_interfaces__srv__ObtenerSectores_Request__Sequence__init(planta_interfaces__srv__ObtenerSectores_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(planta_interfaces__srv__ObtenerSectores_Request)) {
      return false;
    }
    data = (planta_interfaces__srv__ObtenerSectores_Request *)allocator.zero_allocate(size, sizeof(planta_interfaces__srv__ObtenerSectores_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planta_interfaces__srv__ObtenerSectores_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planta_interfaces__srv__ObtenerSectores_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
planta_interfaces__srv__ObtenerSectores_Request__Sequence__fini(planta_interfaces__srv__ObtenerSectores_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planta_interfaces__srv__ObtenerSectores_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

planta_interfaces__srv__ObtenerSectores_Request__Sequence *
planta_interfaces__srv__ObtenerSectores_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Request__Sequence * array = (planta_interfaces__srv__ObtenerSectores_Request__Sequence *)allocator.allocate(sizeof(planta_interfaces__srv__ObtenerSectores_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planta_interfaces__srv__ObtenerSectores_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planta_interfaces__srv__ObtenerSectores_Request__Sequence__destroy(planta_interfaces__srv__ObtenerSectores_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planta_interfaces__srv__ObtenerSectores_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planta_interfaces__srv__ObtenerSectores_Request__Sequence__are_equal(const planta_interfaces__srv__ObtenerSectores_Request__Sequence * lhs, const planta_interfaces__srv__ObtenerSectores_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planta_interfaces__srv__ObtenerSectores_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planta_interfaces__srv__ObtenerSectores_Request__Sequence__copy(
  const planta_interfaces__srv__ObtenerSectores_Request__Sequence * input,
  planta_interfaces__srv__ObtenerSectores_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(planta_interfaces__srv__ObtenerSectores_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(planta_interfaces__srv__ObtenerSectores_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planta_interfaces__srv__ObtenerSectores_Request * data =
      (planta_interfaces__srv__ObtenerSectores_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planta_interfaces__srv__ObtenerSectores_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planta_interfaces__srv__ObtenerSectores_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planta_interfaces__srv__ObtenerSectores_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `lineas`
#include "rosidl_runtime_c/string_functions.h"

bool
planta_interfaces__srv__ObtenerSectores_Response__init(planta_interfaces__srv__ObtenerSectores_Response * msg)
{
  if (!msg) {
    return false;
  }
  // exito
  // lineas
  if (!rosidl_runtime_c__String__Sequence__init(&msg->lineas, 0)) {
    planta_interfaces__srv__ObtenerSectores_Response__fini(msg);
    return false;
  }
  return true;
}

void
planta_interfaces__srv__ObtenerSectores_Response__fini(planta_interfaces__srv__ObtenerSectores_Response * msg)
{
  if (!msg) {
    return;
  }
  // exito
  // lineas
  rosidl_runtime_c__String__Sequence__fini(&msg->lineas);
}

bool
planta_interfaces__srv__ObtenerSectores_Response__are_equal(const planta_interfaces__srv__ObtenerSectores_Response * lhs, const planta_interfaces__srv__ObtenerSectores_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // exito
  if (lhs->exito != rhs->exito) {
    return false;
  }
  // lineas
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->lineas), &(rhs->lineas)))
  {
    return false;
  }
  return true;
}

bool
planta_interfaces__srv__ObtenerSectores_Response__copy(
  const planta_interfaces__srv__ObtenerSectores_Response * input,
  planta_interfaces__srv__ObtenerSectores_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // exito
  output->exito = input->exito;
  // lineas
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->lineas), &(output->lineas)))
  {
    return false;
  }
  return true;
}

planta_interfaces__srv__ObtenerSectores_Response *
planta_interfaces__srv__ObtenerSectores_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Response * msg = (planta_interfaces__srv__ObtenerSectores_Response *)allocator.allocate(sizeof(planta_interfaces__srv__ObtenerSectores_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planta_interfaces__srv__ObtenerSectores_Response));
  bool success = planta_interfaces__srv__ObtenerSectores_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planta_interfaces__srv__ObtenerSectores_Response__destroy(planta_interfaces__srv__ObtenerSectores_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planta_interfaces__srv__ObtenerSectores_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planta_interfaces__srv__ObtenerSectores_Response__Sequence__init(planta_interfaces__srv__ObtenerSectores_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(planta_interfaces__srv__ObtenerSectores_Response)) {
      return false;
    }
    data = (planta_interfaces__srv__ObtenerSectores_Response *)allocator.zero_allocate(size, sizeof(planta_interfaces__srv__ObtenerSectores_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planta_interfaces__srv__ObtenerSectores_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planta_interfaces__srv__ObtenerSectores_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
planta_interfaces__srv__ObtenerSectores_Response__Sequence__fini(planta_interfaces__srv__ObtenerSectores_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planta_interfaces__srv__ObtenerSectores_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

planta_interfaces__srv__ObtenerSectores_Response__Sequence *
planta_interfaces__srv__ObtenerSectores_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Response__Sequence * array = (planta_interfaces__srv__ObtenerSectores_Response__Sequence *)allocator.allocate(sizeof(planta_interfaces__srv__ObtenerSectores_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planta_interfaces__srv__ObtenerSectores_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planta_interfaces__srv__ObtenerSectores_Response__Sequence__destroy(planta_interfaces__srv__ObtenerSectores_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planta_interfaces__srv__ObtenerSectores_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planta_interfaces__srv__ObtenerSectores_Response__Sequence__are_equal(const planta_interfaces__srv__ObtenerSectores_Response__Sequence * lhs, const planta_interfaces__srv__ObtenerSectores_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planta_interfaces__srv__ObtenerSectores_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planta_interfaces__srv__ObtenerSectores_Response__Sequence__copy(
  const planta_interfaces__srv__ObtenerSectores_Response__Sequence * input,
  planta_interfaces__srv__ObtenerSectores_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(planta_interfaces__srv__ObtenerSectores_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(planta_interfaces__srv__ObtenerSectores_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planta_interfaces__srv__ObtenerSectores_Response * data =
      (planta_interfaces__srv__ObtenerSectores_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planta_interfaces__srv__ObtenerSectores_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planta_interfaces__srv__ObtenerSectores_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planta_interfaces__srv__ObtenerSectores_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "planta_interfaces/srv/detail/obtener_sectores__functions.h"

bool
planta_interfaces__srv__ObtenerSectores_Event__init(planta_interfaces__srv__ObtenerSectores_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    planta_interfaces__srv__ObtenerSectores_Event__fini(msg);
    return false;
  }
  // request
  if (!planta_interfaces__srv__ObtenerSectores_Request__Sequence__init(&msg->request, 0)) {
    planta_interfaces__srv__ObtenerSectores_Event__fini(msg);
    return false;
  }
  // response
  if (!planta_interfaces__srv__ObtenerSectores_Response__Sequence__init(&msg->response, 0)) {
    planta_interfaces__srv__ObtenerSectores_Event__fini(msg);
    return false;
  }
  return true;
}

void
planta_interfaces__srv__ObtenerSectores_Event__fini(planta_interfaces__srv__ObtenerSectores_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  planta_interfaces__srv__ObtenerSectores_Request__Sequence__fini(&msg->request);
  // response
  planta_interfaces__srv__ObtenerSectores_Response__Sequence__fini(&msg->response);
}

bool
planta_interfaces__srv__ObtenerSectores_Event__are_equal(const planta_interfaces__srv__ObtenerSectores_Event * lhs, const planta_interfaces__srv__ObtenerSectores_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!planta_interfaces__srv__ObtenerSectores_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!planta_interfaces__srv__ObtenerSectores_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
planta_interfaces__srv__ObtenerSectores_Event__copy(
  const planta_interfaces__srv__ObtenerSectores_Event * input,
  planta_interfaces__srv__ObtenerSectores_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!planta_interfaces__srv__ObtenerSectores_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!planta_interfaces__srv__ObtenerSectores_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

planta_interfaces__srv__ObtenerSectores_Event *
planta_interfaces__srv__ObtenerSectores_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Event * msg = (planta_interfaces__srv__ObtenerSectores_Event *)allocator.allocate(sizeof(planta_interfaces__srv__ObtenerSectores_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planta_interfaces__srv__ObtenerSectores_Event));
  bool success = planta_interfaces__srv__ObtenerSectores_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planta_interfaces__srv__ObtenerSectores_Event__destroy(planta_interfaces__srv__ObtenerSectores_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planta_interfaces__srv__ObtenerSectores_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planta_interfaces__srv__ObtenerSectores_Event__Sequence__init(planta_interfaces__srv__ObtenerSectores_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(planta_interfaces__srv__ObtenerSectores_Event)) {
      return false;
    }
    data = (planta_interfaces__srv__ObtenerSectores_Event *)allocator.zero_allocate(size, sizeof(planta_interfaces__srv__ObtenerSectores_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planta_interfaces__srv__ObtenerSectores_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planta_interfaces__srv__ObtenerSectores_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
planta_interfaces__srv__ObtenerSectores_Event__Sequence__fini(planta_interfaces__srv__ObtenerSectores_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planta_interfaces__srv__ObtenerSectores_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

planta_interfaces__srv__ObtenerSectores_Event__Sequence *
planta_interfaces__srv__ObtenerSectores_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planta_interfaces__srv__ObtenerSectores_Event__Sequence * array = (planta_interfaces__srv__ObtenerSectores_Event__Sequence *)allocator.allocate(sizeof(planta_interfaces__srv__ObtenerSectores_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planta_interfaces__srv__ObtenerSectores_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planta_interfaces__srv__ObtenerSectores_Event__Sequence__destroy(planta_interfaces__srv__ObtenerSectores_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planta_interfaces__srv__ObtenerSectores_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planta_interfaces__srv__ObtenerSectores_Event__Sequence__are_equal(const planta_interfaces__srv__ObtenerSectores_Event__Sequence * lhs, const planta_interfaces__srv__ObtenerSectores_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planta_interfaces__srv__ObtenerSectores_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planta_interfaces__srv__ObtenerSectores_Event__Sequence__copy(
  const planta_interfaces__srv__ObtenerSectores_Event__Sequence * input,
  planta_interfaces__srv__ObtenerSectores_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(planta_interfaces__srv__ObtenerSectores_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(planta_interfaces__srv__ObtenerSectores_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planta_interfaces__srv__ObtenerSectores_Event * data =
      (planta_interfaces__srv__ObtenerSectores_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planta_interfaces__srv__ObtenerSectores_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planta_interfaces__srv__ObtenerSectores_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planta_interfaces__srv__ObtenerSectores_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
