//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_FAERY_MAZE_HPP
#define ABSTRACTFACTORY_FAERY_MAZE_HPP

#include "maze.hpp"

class faery_maze : public maze{
public:
    string describe() override;
};


#endif //ABSTRACTFACTORY_FAERY_MAZE_HPP
