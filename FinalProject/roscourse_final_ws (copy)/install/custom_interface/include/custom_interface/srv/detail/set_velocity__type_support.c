// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interface:srv/SetVelocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interface/srv/detail/set_velocity__rosidl_typesupport_introspection_c.h"
#include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interface/srv/detail/set_velocity__functions.h"
#include "custom_interface/srv/detail/set_velocity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__srv__SetVelocity_Request__init(message_memory);
}

void SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_fini_function(void * message_memory)
{
  custom_interface__srv__SetVelocity_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_member_array[1] = {
  {
    "linear_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__SetVelocity_Request, linear_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_members = {
  "custom_interface__srv",  // message namespace
  "SetVelocity_Request",  // message name
  1,  // number of fields
  sizeof(custom_interface__srv__SetVelocity_Request),
  SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_member_array,  // message members
  SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_type_support_handle = {
  0,
  &SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, SetVelocity_Request)() {
  if (!SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_type_support_handle.typesupport_identifier) {
    SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetVelocity_Request__rosidl_typesupport_introspection_c__SetVelocity_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interface/srv/detail/set_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interface/srv/detail/set_velocity__functions.h"
// already included above
// #include "custom_interface/srv/detail/set_velocity__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interface__srv__SetVelocity_Response__init(message_memory);
}

void SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_fini_function(void * message_memory)
{
  custom_interface__srv__SetVelocity_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interface__srv__SetVelocity_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_members = {
  "custom_interface__srv",  // message namespace
  "SetVelocity_Response",  // message name
  1,  // number of fields
  sizeof(custom_interface__srv__SetVelocity_Response),
  SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_member_array,  // message members
  SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_type_support_handle = {
  0,
  &SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, SetVelocity_Response)() {
  if (!SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_type_support_handle.typesupport_identifier) {
    SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetVelocity_Response__rosidl_typesupport_introspection_c__SetVelocity_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interface/srv/detail/set_velocity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_service_members = {
  "custom_interface__srv",  // service namespace
  "SetVelocity",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_Request_message_type_support_handle,
  NULL  // response message
  // custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_service_type_support_handle = {
  0,
  &custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, SetVelocity_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, SetVelocity_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, SetVelocity)() {
  if (!custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_service_type_support_handle.typesupport_identifier) {
    custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, SetVelocity_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interface, srv, SetVelocity_Response)()->data;
  }

  return &custom_interface__srv__detail__set_velocity__rosidl_typesupport_introspection_c__SetVelocity_service_type_support_handle;
}
