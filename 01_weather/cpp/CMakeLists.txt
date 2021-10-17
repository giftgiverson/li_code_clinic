cmake_minimum_required(VERSION 3.0.0)
project(code_clinic VERSION 0.1.0)

# include(CTest)
# enable_testing()

set (SRC_FILES weather.cpp date_range.cpp)

add_executable(weather.o ${SRC_FILES})
