// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/msg/num.h"


#ifndef FIRST_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
#define FIRST_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package first_interfaces.
typedef struct first_interfaces__msg__Num
{
  int64_t num;
} first_interfaces__msg__Num;

// Struct for a sequence of first_interfaces__msg__Num.
typedef struct first_interfaces__msg__Num__Sequence
{
  first_interfaces__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__MSG__DETAIL__NUM__STRUCT_H_
