﻿# CMakeList.txt : CMake project for RayTracer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


# Add source to this project's executable.
add_executable (RayTracer "RayTracer.cpp" "RayTracer.h" "Utils.h" "Color.h" "ray.h")

find_package(glm CONFIG REQUIRED)
target_link_libraries(RayTracer PRIVATE glm)

# TODO: Add tests and install targets if needed.
