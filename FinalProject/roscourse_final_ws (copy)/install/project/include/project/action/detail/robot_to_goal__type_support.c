// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from project:action/RobotToGoal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
#include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "project/action/detail/robot_to_goal__functions.h"
#include "project/action/detail/robot_to_goal__struct.h"


// Include directives for member types
// Member `goal_poses`
#include "geometry_msgs/msg/pose.h"
// Member `goal_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_Goal__init(message_memory);
}

void RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_fini_function(void * message_memory)
{
  project__action__RobotToGoal_Goal__fini(message_memory);
}

size_t RobotToGoal_Goal__rosidl_typesupport_introspection_c__size_function__Pose__goal_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * RobotToGoal_Goal__rosidl_typesupport_introspection_c__get_const_function__Pose__goal_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RobotToGoal_Goal__rosidl_typesupport_introspection_c__get_function__Pose__goal_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RobotToGoal_Goal__rosidl_typesupport_introspection_c__resize_function__Pose__goal_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_member_array[1] = {
  {
    "goal_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_Goal, goal_poses),  // bytes offset in struct
    NULL,  // default value
    RobotToGoal_Goal__rosidl_typesupport_introspection_c__size_function__Pose__goal_poses,  // size() function pointer
    RobotToGoal_Goal__rosidl_typesupport_introspection_c__get_const_function__Pose__goal_poses,  // get_const(index) function pointer
    RobotToGoal_Goal__rosidl_typesupport_introspection_c__get_function__Pose__goal_poses,  // get(index) function pointer
    RobotToGoal_Goal__rosidl_typesupport_introspection_c__resize_function__Pose__goal_poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_Goal",  // message name
  1,  // number of fields
  sizeof(project__action__RobotToGoal_Goal),
  RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_member_array,  // message members
  RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_type_support_handle = {
  0,
  &RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_Goal)() {
  RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_Goal__rosidl_typesupport_introspection_c__RobotToGoal_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_Result__init(message_memory);
}

void RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_fini_function(void * message_memory)
{
  project__action__RobotToGoal_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_Result, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_Result",  // message name
  1,  // number of fields
  sizeof(project__action__RobotToGoal_Result),
  RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_member_array,  // message members
  RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_type_support_handle = {
  0,
  &RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_Result)() {
  if (!RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_Result__rosidl_typesupport_introspection_c__RobotToGoal_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"


// Include directives for member types
// Member `mid_goal_pose`
// already included above
// #include "geometry_msgs/msg/pose.h"
// Member `mid_goal_pose`
// already included above
// #include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_Feedback__init(message_memory);
}

void RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_fini_function(void * message_memory)
{
  project__action__RobotToGoal_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_member_array[1] = {
  {
    "mid_goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_Feedback, mid_goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_Feedback",  // message name
  1,  // number of fields
  sizeof(project__action__RobotToGoal_Feedback),
  RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_member_array,  // message members
  RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_type_support_handle = {
  0,
  &RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_Feedback)() {
  RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_Feedback__rosidl_typesupport_introspection_c__RobotToGoal_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "project/action/robot_to_goal.h"
// Member `goal`
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_SendGoal_Request__init(message_memory);
}

void RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_fini_function(void * message_memory)
{
  project__action__RobotToGoal_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(project__action__RobotToGoal_SendGoal_Request),
  RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_member_array,  // message members
  RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_type_support_handle = {
  0,
  &RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_SendGoal_Request)() {
  RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_Goal)();
  if (!RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_SendGoal_Request__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_SendGoal_Response__init(message_memory);
}

void RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_fini_function(void * message_memory)
{
  project__action__RobotToGoal_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(project__action__RobotToGoal_SendGoal_Response),
  RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_member_array,  // message members
  RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_type_support_handle = {
  0,
  &RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_SendGoal_Response)() {
  RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_SendGoal_Response__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_service_members = {
  "project__action",  // service namespace
  "RobotToGoal_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_service_type_support_handle = {
  0,
  &project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_SendGoal)() {
  if (!project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_service_type_support_handle.typesupport_identifier) {
    project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_SendGoal_Response)()->data;
  }

  return &project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_GetResult_Request__init(message_memory);
}

void RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_fini_function(void * message_memory)
{
  project__action__RobotToGoal_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(project__action__RobotToGoal_GetResult_Request),
  RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_member_array,  // message members
  RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_type_support_handle = {
  0,
  &RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_GetResult_Request)() {
  RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_GetResult_Request__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "project/action/robot_to_goal.h"
// Member `result`
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_GetResult_Response__init(message_memory);
}

void RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_fini_function(void * message_memory)
{
  project__action__RobotToGoal_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(project__action__RobotToGoal_GetResult_Response),
  RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_member_array,  // message members
  RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_type_support_handle = {
  0,
  &RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_GetResult_Response)() {
  RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_Result)();
  if (!RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_GetResult_Response__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_service_members = {
  "project__action",  // service namespace
  "RobotToGoal_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_service_type_support_handle = {
  0,
  &project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_GetResult)() {
  if (!project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_service_type_support_handle.typesupport_identifier) {
    project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_GetResult_Response)()->data;
  }

  return &project__action__detail__robot_to_goal__rosidl_typesupport_introspection_c__RobotToGoal_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "project/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "project/action/detail/robot_to_goal__functions.h"
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "project/action/robot_to_goal.h"
// Member `feedback`
// already included above
// #include "project/action/detail/robot_to_goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  project__action__RobotToGoal_FeedbackMessage__init(message_memory);
}

void RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_fini_function(void * message_memory)
{
  project__action__RobotToGoal_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(project__action__RobotToGoal_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_members = {
  "project__action",  // message namespace
  "RobotToGoal_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(project__action__RobotToGoal_FeedbackMessage),
  RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_member_array,  // message members
  RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_type_support_handle = {
  0,
  &RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_project
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_FeedbackMessage)() {
  RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, project, action, RobotToGoal_Feedback)();
  if (!RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotToGoal_FeedbackMessage__rosidl_typesupport_introspection_c__RobotToGoal_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
