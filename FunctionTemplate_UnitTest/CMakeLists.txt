cmake_minimum_required(VERSION 3.5)

project(FunctionTemplateTestCase LANGUAGES CXX)


find_package(Qt5Test REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()
include_directories(H:/extralearning/udemy/cpp/CppFunctionTemplates/FunctionTemplates
    H:/extralearning/udemy/cpp/MyString/MystringClass)
add_executable(FunctionTemplateTestCase tst_functiontemplatetestcase.cpp
    H:/extralearning/udemy/cpp/CppFunctionTemplates/FunctionTemplates/myfunctiontemplateclass.cpp
    H:/extralearning/udemy/cpp/MyString/MystringClass/mystring.cpp    )
add_test(NAME FunctionTemplateTestCase COMMAND FunctionTemplateTestCase)

target_link_libraries(FunctionTemplateTestCase PRIVATE Qt5::Test)

