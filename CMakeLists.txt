cmake_minimum_required(VERSION 3.15)
project(abstractfactory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Werror -pedantic")

add_executable(abstractfactory driver.cpp maze_factory.hpp maze.hpp wall.hpp room.hpp door.hpp maze_game.cpp maze_game.hpp)