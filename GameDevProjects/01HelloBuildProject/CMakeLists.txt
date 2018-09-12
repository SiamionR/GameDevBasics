cmake_minimum_required(VERSION 3.5)

project(hello)

add_executable(hello 01hello.cpp)

if(MSVC)
  set(/W4 /WX)
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Werror")
endif()
