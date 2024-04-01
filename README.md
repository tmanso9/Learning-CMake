# Prog

This is a simple C++ project that demonstrates the use of CMake with a custom math library and the GLFW library for creating a window.

## Dependencies

- A C++ compiler that supports C++11
- CMake version 3.13 or higher

## Building the Project

1. Clone the repository.
2. Navigate to the project directory.
4. Configure and build with ``` ./config.sh ; ./build.sh ```

## Running the Program

After building the project, you can run the program with `./run.sh`.

## What the Program Does

The program performs the following tasks:

1. It uses a function from the custom `mymath` library to add two floating point numbers, and prints the result.
2. It opens a window using the `GLFW` library. The window stays open until the user closes it.