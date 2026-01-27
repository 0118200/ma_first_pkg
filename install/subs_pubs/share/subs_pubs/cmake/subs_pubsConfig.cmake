# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_subs_pubs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED subs_pubs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(subs_pubs_FOUND FALSE)
  elseif(NOT subs_pubs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(subs_pubs_FOUND FALSE)
  endif()
  return()
endif()
set(_subs_pubs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT subs_pubs_FIND_QUIETLY)
  message(STATUS "Found subs_pubs: 0.0.0 (${subs_pubs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'subs_pubs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT subs_pubs_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(subs_pubs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${subs_pubs_DIR}/${_extra}")
endforeach()
