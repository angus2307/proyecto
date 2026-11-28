# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target planta_interfaces::planta_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${planta_interfaces_TARGETS}.
if(planta_interfaces_TARGETS AND NOT TARGET planta_interfaces::planta_interfaces)
  add_library(planta_interfaces::planta_interfaces INTERFACE IMPORTED)
  set_target_properties(planta_interfaces::planta_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${planta_interfaces_TARGETS}")
endif()
