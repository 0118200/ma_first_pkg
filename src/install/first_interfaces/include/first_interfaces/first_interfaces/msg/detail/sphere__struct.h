// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/sphere.h"


#ifndef FIRST_INTERFACES__MSG__DETAIL__SPHERE__STRUCT_H_
#define FIRST_INTERFACES__MSG__DETAIL__SPHERE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Sphere in the package first_interfaces.
typedef struct first_interfaces__msg__Sphere
{
  double radius;
  geometry_msgs__msg__Point center;
} first_interfaces__msg__Sphere;

// Struct for a sequence of first_interfaces__msg__Sphere.
typedef struct first_interfaces__msg__Sphere__Sequence
{
  first_interfaces__msg__Sphere * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__msg__Sphere__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__SPHERE__STRUCT_H_
