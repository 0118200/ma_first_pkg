cmake_minimum_required(VERSION 3.8)
project(polygon_base)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(pluginlib REQUIRED)

# Interface library
add_library(polygon_base INTERFACE)
add_library(polygon_base::polygon_base ALIAS polygon_base)

target_include_directories(polygon_base INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>
)
target_compile_features(polygon_base INTERFACE c_std_99 cxx_std_17)

# Install header
install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

# Executable
add_executable(area_node src/area_node.cpp)
target_link_libraries(area_node polygon_base::polygon_base)
ament_target_dependencies(area_node pluginlib)

install(TARGETS area_node
  DESTINATION lib/${PROJECT_NAME}
)

# Export hanya include (tidak export target karena interface)
ament_export_include_directories(include/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()