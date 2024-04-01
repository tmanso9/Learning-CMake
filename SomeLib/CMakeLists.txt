cmake_minimum_required(VERSION 3.10)
project(mymath)
# add_executable(${PROJECT_NAME} main.cpp)
# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
add_library(${PROJECT_NAME} STATIC adder.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER adder.h)
install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib
		PUBLIC_HEADER DESTINATION include
)
