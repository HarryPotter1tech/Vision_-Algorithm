cmake_minimum_required(VERSION 3.10)
project(VISION)

set(CMAKE_CXX_STANDARD 11)

# 确保至少有一个存在的源文件
add_executable(${PROJECT_NAME} test/main.cpp)
