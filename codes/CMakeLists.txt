# cmake needs this line
cmake_minimum_required(VERSION 3.16.3)

# Define project name
project(GithubActionSandbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a -O2 -Wall -Wextra -Wcast-align -Wformat=2 -Winit-self -Wstrict-null-sentinel -Wswitch-default -Wno-unused-parameter")



# gtest related
find_package(Threads) # gtest needs pthread
set(GTEST_LIBS ${GTEST_LIBS} gtest_main)
set(GTEST_LIBS ${GTEST_LIBS} gtest)

# Create compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(array array.cpp)
add_executable(googletest googletest.cpp sort.cpp)

# link libraries
target_link_libraries(googletest ${GTEST_LIBS})
target_link_libraries(googletest ${CMAKE_THREAD_LIBS_INIT})
