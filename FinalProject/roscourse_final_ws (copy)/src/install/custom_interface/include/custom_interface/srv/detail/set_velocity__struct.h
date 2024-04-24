// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interface:srv/SetVelocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__SET_VELOCITY__STRUCT_H_
#define CUSTOM_INTERFACE__SRV__DETAIL__SET_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetVelocity in the package custom_interface.
typedef struct custom_interface__srv__SetVelocity_Request
{
  double linear_x;
} custom_interface__srv__SetVelocity_Request;

// Struct for a sequence of custom_interface__srv__SetVelocity_Request.
typedef struct custom_interface__srv__SetVelocity_Request__Sequence
{
  custom_interface__srv__SetVelocity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__SetVelocity_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetVelocity in the package custom_interface.
typedef struct custom_interface__srv__SetVelocity_Response
{
  int8_t ret;
} custom_interface__srv__SetVelocity_Response;

// Struct for a sequence of custom_interface__srv__SetVelocity_Response.
typedef struct custom_interface__srv__SetVelocity_Response__Sequence
{
  custom_interface__srv__SetVelocity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interface__srv__SetVelocity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__SET_VELOCITY__STRUCT_H_
