set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${MakeAPerson_SOURCE_DIR}/build)
include_directories(${MakeAPerson_SOURCE_DIR}/inc)
add_executable(${PROJECT_NAME} main.cpp Person.cpp)