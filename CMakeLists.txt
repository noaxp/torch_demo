cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(torch_demo)

find_package(Torch REQUIRED)

add_executable(demo demo.cc)
target_link_libraries(demo "${TORCH_LIBRARIES}")
set_property(TARGET demo PROPERTY CXX_STANDARD 14)
