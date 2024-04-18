// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project:action/RobotToGoal.idl
// generated code does not contain a copyright notice

#ifndef PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__TRAITS_HPP_
#define PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__TRAITS_HPP_

#include "project/action/detail/robot_to_goal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_Goal>()
{
  return "project::action::RobotToGoal_Goal";
}

template<>
inline const char * name<project::action::RobotToGoal_Goal>()
{
  return "project/action/RobotToGoal_Goal";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<project::action::RobotToGoal_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_Result>()
{
  return "project::action::RobotToGoal_Result";
}

template<>
inline const char * name<project::action::RobotToGoal_Result>()
{
  return "project/action/RobotToGoal_Result";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<project::action::RobotToGoal_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'mid_goal_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_Feedback>()
{
  return "project::action::RobotToGoal_Feedback";
}

template<>
inline const char * name<project::action::RobotToGoal_Feedback>()
{
  return "project/action/RobotToGoal_Feedback";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<project::action::RobotToGoal_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "project/action/detail/robot_to_goal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_SendGoal_Request>()
{
  return "project::action::RobotToGoal_SendGoal_Request";
}

template<>
inline const char * name<project::action::RobotToGoal_SendGoal_Request>()
{
  return "project/action/RobotToGoal_SendGoal_Request";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<project::action::RobotToGoal_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<project::action::RobotToGoal_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project::action::RobotToGoal_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_SendGoal_Response>()
{
  return "project::action::RobotToGoal_SendGoal_Response";
}

template<>
inline const char * name<project::action::RobotToGoal_SendGoal_Response>()
{
  return "project/action/RobotToGoal_SendGoal_Response";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<project::action::RobotToGoal_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_SendGoal>()
{
  return "project::action::RobotToGoal_SendGoal";
}

template<>
inline const char * name<project::action::RobotToGoal_SendGoal>()
{
  return "project/action/RobotToGoal_SendGoal";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<project::action::RobotToGoal_SendGoal_Request>::value &&
    has_fixed_size<project::action::RobotToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<project::action::RobotToGoal_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<project::action::RobotToGoal_SendGoal_Request>::value &&
    has_bounded_size<project::action::RobotToGoal_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<project::action::RobotToGoal_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<project::action::RobotToGoal_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project::action::RobotToGoal_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_GetResult_Request>()
{
  return "project::action::RobotToGoal_GetResult_Request";
}

template<>
inline const char * name<project::action::RobotToGoal_GetResult_Request>()
{
  return "project/action/RobotToGoal_GetResult_Request";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project::action::RobotToGoal_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "project/action/detail/robot_to_goal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_GetResult_Response>()
{
  return "project::action::RobotToGoal_GetResult_Response";
}

template<>
inline const char * name<project::action::RobotToGoal_GetResult_Response>()
{
  return "project/action/RobotToGoal_GetResult_Response";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<project::action::RobotToGoal_Result>::value> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<project::action::RobotToGoal_Result>::value> {};

template<>
struct is_message<project::action::RobotToGoal_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_GetResult>()
{
  return "project::action::RobotToGoal_GetResult";
}

template<>
inline const char * name<project::action::RobotToGoal_GetResult>()
{
  return "project/action/RobotToGoal_GetResult";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<project::action::RobotToGoal_GetResult_Request>::value &&
    has_fixed_size<project::action::RobotToGoal_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<project::action::RobotToGoal_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<project::action::RobotToGoal_GetResult_Request>::value &&
    has_bounded_size<project::action::RobotToGoal_GetResult_Response>::value
  >
{
};

template<>
struct is_service<project::action::RobotToGoal_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<project::action::RobotToGoal_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project::action::RobotToGoal_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "project/action/detail/robot_to_goal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project::action::RobotToGoal_FeedbackMessage>()
{
  return "project::action::RobotToGoal_FeedbackMessage";
}

template<>
inline const char * name<project::action::RobotToGoal_FeedbackMessage>()
{
  return "project/action/RobotToGoal_FeedbackMessage";
}

template<>
struct has_fixed_size<project::action::RobotToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<project::action::RobotToGoal_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project::action::RobotToGoal_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<project::action::RobotToGoal_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project::action::RobotToGoal_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<project::action::RobotToGoal>
  : std::true_type
{
};

template<>
struct is_action_goal<project::action::RobotToGoal_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<project::action::RobotToGoal_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<project::action::RobotToGoal_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__TRAITS_HPP_
