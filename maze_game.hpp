//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game {
private:
    maze* game_maze;
    maze* create_maze(maze_factory);
public:
    maze_game();
};


#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
