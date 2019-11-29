cmake_minimum_required(VERSION 3.15)
project(abstractfactory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Werror -pedantic")

add_executable(abstractfactory main.cpp maze_factory.hpp maze.hpp wall.hpp room.hpp door.hpp maze_game.cpp maze_game.hpp faery_factory.cpp faery_factory.hpp faery_maze.cpp faery_maze.hpp faery_room.cpp faery_room.hpp faery_wall.cpp faery_wall.hpp faery_door.cpp faery_door.hpp)