// Abstract maze factory alongside the concrete maze factory classes
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "maze.hpp"

class maze_factory {
public:
    virtual ~maze_factory() = default;

    virtual maze* make_maze() = 0;
    virtual wall* make_wall() = 0;
    virtual room* make_room() = 0;
    virtual door* make_door(room*, room*) = 0;
};

//A faery factory whose methods are used to create faery maze components
class faery_factory : public maze_factory {
public:
    maze* make_maze() override {
        return new faery_maze();
    }

    wall* make_wall() override {
        return new faery_wall();
    }

    room* make_room() override {
        return new faery_room();
    }

    door* make_door(room* room1, room* room2) override {
        return new faery_door(room1, room2);
    }
};

//A future factory whose methods are used to create future maze components
class future_factory : public maze_factory {
public:
    maze* make_maze() override {
        return new future_maze();
    }

    wall* make_wall() override {
        return new future_wall();
    }

    room* make_room() override {
        return new future_room();
    }

    door* make_door(room* room1, room* room2) override {
        return new future_door(room1, room2);
    }
};

#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
