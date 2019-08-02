CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
PROJECT(cpp-lang-practice)

set(CMAKE_CXX_STANDARD 17)

set(SFML_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Libraries/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Libraries/SFML-2.5.1/lib")
set(SFML_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Libraries/SFML-2.5.1/SFML-2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
else()
    message(STATUS "SFML not found!")
endif()

#add_executable(cpp-lang-practice src/task_book/algorithm/lesson11.cpp)
add_executable(cpp-lang-practice src/task_book/games/game1.cpp)
target_include_directories(cpp-lang-practice PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries (cpp-lang-practice sfml-graphics sfml-window sfml-system)