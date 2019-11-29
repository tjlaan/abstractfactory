//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"

class maze_factory {
public:
    virtual maze make_maze() = 0;
    virtual wall make_wall() = 0;
    virtual room make_room() = 0;
    virtual door make_door(room&, room&) = 0;

};


#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
