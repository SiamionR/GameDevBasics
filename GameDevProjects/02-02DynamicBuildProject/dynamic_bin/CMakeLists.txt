cmake_minimum_required(VERSION 3.2)
project(dynamic_bin)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} LINK_PUBLIC dynamic_lib)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)

if(MSVC)
  set(/W4 /WX /std:c++17)
else()
  set(-Wall -Wextra -pedantic -Werror)
endif()
