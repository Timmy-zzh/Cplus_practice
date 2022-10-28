# cmake版本
cmake_minimum_required(VERSION 3.14)
# 项目工程名称
project(Cplus_practice)

# 设置cmake c标准库版本为C++ 17
set(CMAKE_CXX_STANDARD 17)

# 设置的是可执行的（executable）的项目名称（Cplus_practice）和主函数入口类
add_executable(Cplus_practice main.cpp)

# 添加子项目
add_subdirectory("chapter_one")
add_subdirectory("chapter_two")
add_subdirectory("chapter_three")
add_subdirectory("chapter_four")
add_subdirectory("chapter_five")