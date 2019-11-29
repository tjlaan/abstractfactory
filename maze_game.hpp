//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game {
public:
    maze* create_maze(maze_factory*);
};


#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
