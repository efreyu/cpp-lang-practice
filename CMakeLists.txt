CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
PROJECT(cpp-lang-practice)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp-lang-practice src/task_book/oop/lesson8.cpp)

target_include_directories(cpp-lang-practice PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)