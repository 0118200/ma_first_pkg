// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/sphere.hpp"


#ifndef FIRST_INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define FIRST_INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_interfaces/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_interfaces
{

namespace msg
{

namespace builder
{

class Init_Sphere_center
{
public:
  explicit Init_Sphere_center(::first_interfaces::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::first_interfaces::msg::Sphere center(::first_interfaces::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_interfaces::msg::Sphere msg_;
};

class Init_Sphere_radius
{
public:
  Init_Sphere_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_center radius(::first_interfaces::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_Sphere_center(msg_);
  }

private:
  ::first_interfaces::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_interfaces::msg::Sphere>()
{
  return first_interfaces::msg::builder::Init_Sphere_radius();
}

}  // namespace first_interfaces

#endif  // FIRST_INTERFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
