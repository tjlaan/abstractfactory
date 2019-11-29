//
// Created by tlrla on 2019-11-28.
//

#include "maze_game.hpp"

maze* maze_game::create_maze(maze_factory* factory) {
    maze* new_maze = factory -> make_maze();
    room* room1 = factory -> make_room();
    room* room2 = factory -> make_room();

    for(int i = 0;i < 4;i++) {
        new_maze -> addWall(factory -> make_wall());
    }

    door* door = factory -> make_door(room1, room2);
    new_maze -> addRoom(room1);
    new_maze -> addRoom(room2);
    new_maze -> addDoor(door);

    return new_maze;
}