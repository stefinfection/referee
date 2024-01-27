cmake_minimum_required(VERSION 3.21.4)
project(referee VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

configure_file(src/ControllerConfig.h.in src/Controller.h)

add_executable(referee main.cpp src/Controller.cpp)

target_include_directories(referee PUBLIC
        "${PROJECT_BINARY_DIR}"
        )