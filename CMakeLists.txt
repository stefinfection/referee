cmake_minimum_required(VERSION 3.21.4)
project(referee VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

configure_file(src/ControllerConfig.h.in src/Controller.h)

add_executable(refer src/Controller.cpp)

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

target_include_directories(referee PUBLIC
        "${PROJECT_BINARY_DIR}"
        )