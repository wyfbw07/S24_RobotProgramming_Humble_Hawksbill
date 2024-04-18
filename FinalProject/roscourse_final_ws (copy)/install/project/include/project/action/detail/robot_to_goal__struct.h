// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project:action/RobotToGoal.idl
// generated code does not contain a copyright notice

#ifndef PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__STRUCT_H_
#define PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_Goal
{
  geometry_msgs__msg__Pose__Sequence goal_poses;
} project__action__RobotToGoal_Goal;

// Struct for a sequence of project__action__RobotToGoal_Goal.
typedef struct project__action__RobotToGoal_Goal__Sequence
{
  project__action__RobotToGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_Result
{
  int32_t ret;
} project__action__RobotToGoal_Result;

// Struct for a sequence of project__action__RobotToGoal_Result.
typedef struct project__action__RobotToGoal_Result__Sequence
{
  project__action__RobotToGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'mid_goal_pose'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_Feedback
{
  geometry_msgs__msg__Pose mid_goal_pose;
} project__action__RobotToGoal_Feedback;

// Struct for a sequence of project__action__RobotToGoal_Feedback.
typedef struct project__action__RobotToGoal_Feedback__Sequence
{
  project__action__RobotToGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "project/action/detail/robot_to_goal__struct.h"

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  project__action__RobotToGoal_Goal goal;
} project__action__RobotToGoal_SendGoal_Request;

// Struct for a sequence of project__action__RobotToGoal_SendGoal_Request.
typedef struct project__action__RobotToGoal_SendGoal_Request__Sequence
{
  project__action__RobotToGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} project__action__RobotToGoal_SendGoal_Response;

// Struct for a sequence of project__action__RobotToGoal_SendGoal_Response.
typedef struct project__action__RobotToGoal_SendGoal_Response__Sequence
{
  project__action__RobotToGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} project__action__RobotToGoal_GetResult_Request;

// Struct for a sequence of project__action__RobotToGoal_GetResult_Request.
typedef struct project__action__RobotToGoal_GetResult_Request__Sequence
{
  project__action__RobotToGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_GetResult_Response
{
  int8_t status;
  project__action__RobotToGoal_Result result;
} project__action__RobotToGoal_GetResult_Response;

// Struct for a sequence of project__action__RobotToGoal_GetResult_Response.
typedef struct project__action__RobotToGoal_GetResult_Response__Sequence
{
  project__action__RobotToGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "project/action/detail/robot_to_goal__struct.h"

// Struct defined in action/RobotToGoal in the package project.
typedef struct project__action__RobotToGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  project__action__RobotToGoal_Feedback feedback;
} project__action__RobotToGoal_FeedbackMessage;

// Struct for a sequence of project__action__RobotToGoal_FeedbackMessage.
typedef struct project__action__RobotToGoal_FeedbackMessage__Sequence
{
  project__action__RobotToGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project__action__RobotToGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__STRUCT_H_
