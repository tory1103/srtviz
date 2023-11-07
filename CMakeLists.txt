cmake_minimum_required(VERSION 3.26)
project(srtviz)

set(CMAKE_CXX_STANDARD 17)

# Finds SFML library
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Adds the executable
add_executable(
        srtviz
        source/main.cpp
        source/algorithms/bubble.cpp
        source/algorithms/selection.cpp
        source/algorithms/insertion.cpp
        source/algorithms/mergesort.cpp
)

# Links SFML to the executable
target_link_libraries(srtviz sfml-graphics sfml-window sfml-system)
