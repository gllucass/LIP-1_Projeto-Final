# CMakeLists.txt
cmake_minimum_required(VERSION 3.12)
project(SFMLExample)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(SFMLExample main.cpp)
target_link_libraries(SFMLExample sfml-graphics sfml-window sfml-system)
