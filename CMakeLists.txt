cmake_minimum_required(VERSION 3.13)
project(Prog)
add_subdirectory(Adder)
add_subdirectory(external/glfw)
add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} 
PUBLIC Adder
PUBLIC external/glfw/include
)

target_link_directories(${PROJECT_NAME}
PRIVATE Adder
PRIVATE external/glfw/src
)

target_link_libraries(${PROJECT_NAME} mymath glfw)