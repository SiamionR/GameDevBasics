cmake_minimum_required(VERSION 3.2)
project (dynamic_lib)

add_library(${PROJECT_NAME} STATIC include/dynamic_lib.hpp src/dynamic_lib.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)

if(MSVC)
  set(/W4 /WX /std:c++17)
else()
  set(-Wall -Wextra -pedantic -Werror)
endif()
