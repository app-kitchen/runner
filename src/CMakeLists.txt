cmake_minimum_required(VERSION 3.16.3)
project (app-kitchen)

include_directories(../include)

file(GLOB SOURCES "Main.cpp")

set(EXECUTABLE_NAME "app-kitchen")
add_executable(${EXECUTABLE_NAME} ${SOURCES})

find_package(SFML 2.5 REQUIRED system window graphics network audio)
target_link_libraries(${EXECUTABLE_NAME} sfml-system sfml-window sfml-graphics sfml-network sfml-audio)
