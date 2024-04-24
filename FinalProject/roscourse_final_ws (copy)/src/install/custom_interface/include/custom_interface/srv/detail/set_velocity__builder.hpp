// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interface:srv/SetVelocity.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACE__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_
#define CUSTOM_INTERFACE__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_

#include "custom_interface/srv/detail/set_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Request_linear_x
{
public:
  Init_SetVelocity_Request_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::SetVelocity_Request linear_x(::custom_interface::srv::SetVelocity_Request::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::SetVelocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::SetVelocity_Request>()
{
  return custom_interface::srv::builder::Init_SetVelocity_Request_linear_x();
}

}  // namespace custom_interface


namespace custom_interface
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Response_ret
{
public:
  Init_SetVelocity_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interface::srv::SetVelocity_Response ret(::custom_interface::srv::SetVelocity_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interface::srv::SetVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interface::srv::SetVelocity_Response>()
{
  return custom_interface::srv::builder::Init_SetVelocity_Response_ret();
}

}  // namespace custom_interface

#endif  // CUSTOM_INTERFACE__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_
