cmake_minimum_required(VERSION 3.0.0)
project(code_clinic VERSION 0.1.0)

option(BUILD_00 "Enalbe building 00 - Hello" ON)
option(BUILD_01 "Enalbe building 01 - Weather" ON)

# include(CTest)
# enable_testing()

if(BUILD_00)
    add_subdirectory(00_env/cpp)
endif()
if(BUILD_01)
    add_subdirectory(01_weather/cpp)
endif()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
