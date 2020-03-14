cmake_minimum_required(VERSION 3.5)

project(FunctionTemplates LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FunctionTempates main.cpp
    myfunctiontemplateclass.cpp
    myfunctiontemplateclass.h)
