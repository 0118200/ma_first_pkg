// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/srv/add_three_ints.h"


#ifndef FIRST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
#define FIRST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package first_interfaces.
typedef struct first_interfaces__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} first_interfaces__srv__AddThreeInts_Request;

// Struct for a sequence of first_interfaces__srv__AddThreeInts_Request.
typedef struct first_interfaces__srv__AddThreeInts_Request__Sequence
{
  first_interfaces__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__srv__AddThreeInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddThreeInts in the package first_interfaces.
typedef struct first_interfaces__srv__AddThreeInts_Response
{
  int64_t sum;
} first_interfaces__srv__AddThreeInts_Response;

// Struct for a sequence of first_interfaces__srv__AddThreeInts_Response.
typedef struct first_interfaces__srv__AddThreeInts_Response__Sequence
{
  first_interfaces__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__srv__AddThreeInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  first_interfaces__srv__AddThreeInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  first_interfaces__srv__AddThreeInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddThreeInts in the package first_interfaces.
typedef struct first_interfaces__srv__AddThreeInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  first_interfaces__srv__AddThreeInts_Request__Sequence request;
  first_interfaces__srv__AddThreeInts_Response__Sequence response;
} first_interfaces__srv__AddThreeInts_Event;

// Struct for a sequence of first_interfaces__srv__AddThreeInts_Event.
typedef struct first_interfaces__srv__AddThreeInts_Event__Sequence
{
  first_interfaces__srv__AddThreeInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__srv__AddThreeInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__SRV__DETAIL__ADD_THREE_INTS__STRUCT_H_
