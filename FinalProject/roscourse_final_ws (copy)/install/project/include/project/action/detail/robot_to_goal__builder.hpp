// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project:action/RobotToGoal.idl
// generated code does not contain a copyright notice

#ifndef PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__BUILDER_HPP_
#define PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__BUILDER_HPP_

#include "project/action/detail/robot_to_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_Goal_goal_poses
{
public:
  Init_RobotToGoal_Goal_goal_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project::action::RobotToGoal_Goal goal_poses(::project::action::RobotToGoal_Goal::_goal_poses_type arg)
  {
    msg_.goal_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_Goal>()
{
  return project::action::builder::Init_RobotToGoal_Goal_goal_poses();
}

}  // namespace project


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_Result_ret
{
public:
  Init_RobotToGoal_Result_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project::action::RobotToGoal_Result ret(::project::action::RobotToGoal_Result::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_Result>()
{
  return project::action::builder::Init_RobotToGoal_Result_ret();
}

}  // namespace project


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_Feedback_mid_goal_pose
{
public:
  Init_RobotToGoal_Feedback_mid_goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project::action::RobotToGoal_Feedback mid_goal_pose(::project::action::RobotToGoal_Feedback::_mid_goal_pose_type arg)
  {
    msg_.mid_goal_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_Feedback>()
{
  return project::action::builder::Init_RobotToGoal_Feedback_mid_goal_pose();
}

}  // namespace project


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_SendGoal_Request_goal
{
public:
  explicit Init_RobotToGoal_SendGoal_Request_goal(::project::action::RobotToGoal_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::project::action::RobotToGoal_SendGoal_Request goal(::project::action::RobotToGoal_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_SendGoal_Request msg_;
};

class Init_RobotToGoal_SendGoal_Request_goal_id
{
public:
  Init_RobotToGoal_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotToGoal_SendGoal_Request_goal goal_id(::project::action::RobotToGoal_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotToGoal_SendGoal_Request_goal(msg_);
  }

private:
  ::project::action::RobotToGoal_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_SendGoal_Request>()
{
  return project::action::builder::Init_RobotToGoal_SendGoal_Request_goal_id();
}

}  // namespace project


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_SendGoal_Response_stamp
{
public:
  explicit Init_RobotToGoal_SendGoal_Response_stamp(::project::action::RobotToGoal_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::project::action::RobotToGoal_SendGoal_Response stamp(::project::action::RobotToGoal_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_SendGoal_Response msg_;
};

class Init_RobotToGoal_SendGoal_Response_accepted
{
public:
  Init_RobotToGoal_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotToGoal_SendGoal_Response_stamp accepted(::project::action::RobotToGoal_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RobotToGoal_SendGoal_Response_stamp(msg_);
  }

private:
  ::project::action::RobotToGoal_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_SendGoal_Response>()
{
  return project::action::builder::Init_RobotToGoal_SendGoal_Response_accepted();
}

}  // namespace project


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_GetResult_Request_goal_id
{
public:
  Init_RobotToGoal_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project::action::RobotToGoal_GetResult_Request goal_id(::project::action::RobotToGoal_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_GetResult_Request>()
{
  return project::action::builder::Init_RobotToGoal_GetResult_Request_goal_id();
}

}  // namespace project


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_GetResult_Response_result
{
public:
  explicit Init_RobotToGoal_GetResult_Response_result(::project::action::RobotToGoal_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::project::action::RobotToGoal_GetResult_Response result(::project::action::RobotToGoal_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_GetResult_Response msg_;
};

class Init_RobotToGoal_GetResult_Response_status
{
public:
  Init_RobotToGoal_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotToGoal_GetResult_Response_result status(::project::action::RobotToGoal_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotToGoal_GetResult_Response_result(msg_);
  }

private:
  ::project::action::RobotToGoal_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_GetResult_Response>()
{
  return project::action::builder::Init_RobotToGoal_GetResult_Response_status();
}

}  // namespace project


namespace project
{

namespace action
{

namespace builder
{

class Init_RobotToGoal_FeedbackMessage_feedback
{
public:
  explicit Init_RobotToGoal_FeedbackMessage_feedback(::project::action::RobotToGoal_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::project::action::RobotToGoal_FeedbackMessage feedback(::project::action::RobotToGoal_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project::action::RobotToGoal_FeedbackMessage msg_;
};

class Init_RobotToGoal_FeedbackMessage_goal_id
{
public:
  Init_RobotToGoal_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotToGoal_FeedbackMessage_feedback goal_id(::project::action::RobotToGoal_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotToGoal_FeedbackMessage_feedback(msg_);
  }

private:
  ::project::action::RobotToGoal_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project::action::RobotToGoal_FeedbackMessage>()
{
  return project::action::builder::Init_RobotToGoal_FeedbackMessage_goal_id();
}

}  // namespace project

#endif  // PROJECT__ACTION__DETAIL__ROBOT_TO_GOAL__BUILDER_HPP_
