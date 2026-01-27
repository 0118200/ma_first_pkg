// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/num.hpp"


#ifndef FIRST_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_interfaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_interfaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_interfaces::msg::Num num(::first_interfaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_interfaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_interfaces::msg::Num>()
{
  return first_interfaces::msg::builder::Init_Num_num();
}

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__NUM__BUILDER_HPP_
