// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from first_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#include "first_interfaces/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
const rosidl_type_hash_t *
first_interfaces__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x2a, 0x8d, 0xb4, 0xa2, 0x5e, 0xd2, 0x43,
      0x43, 0x56, 0x5c, 0x42, 0x66, 0xd1, 0x29, 0xbe,
      0x5a, 0xb8, 0xad, 0xe8, 0x54, 0xb1, 0x76, 0xf6,
      0x80, 0x13, 0xe7, 0x20, 0xcf, 0x9d, 0x5d, 0x6b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char first_interfaces__msg__Num__TYPE_NAME[] = "first_interfaces/msg/Num";

// Define type names, field names, and default values
static char first_interfaces__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field first_interfaces__msg__Num__FIELDS[] = {
  {
    {first_interfaces__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
first_interfaces__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {first_interfaces__msg__Num__TYPE_NAME, 24, 24},
      {first_interfaces__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
first_interfaces__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {first_interfaces__msg__Num__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 9, 9},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
first_interfaces__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *first_interfaces__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
