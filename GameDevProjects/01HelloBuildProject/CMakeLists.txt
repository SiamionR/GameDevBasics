cmake_minimum_required(VERSION 3.2)

project(hello)

add_executable(hello 01hello.cpp)

set_property(TARGET hello PROPERTY CXX_STANDARD 17)
set_property(TARGET hello PROPERTY CXX_STANDARD_REQUIRED ON)

if(MSVC)
  set(/W4 /WX)
else()
  set(-Wall -Wextra -pedantic -Werror)
endif()
