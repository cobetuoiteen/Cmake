cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(recipe-01 LANGUAGES CXX)
add_library(message
  STATIC
    Message.hpp
    Message.cpp
  )
add_executable(first_step first_step.cpp)
target_link_libraries(first_step message)
