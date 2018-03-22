cmake_minimum_required(VERSION 2.8)

project(1labaRaspberry)
set(SRC MyClass.h MyClass.cpp)
add_executable(${PROJECT_NAME} "main.cpp" ${SRC})
