//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_FAERY_FACTORY_HPP
#define ABSTRACTFACTORY_FAERY_FACTORY_HPP

#include "maze_factory.hpp"

class faery_factory : public maze_factory {
public:
    maze make_maze() override;
    wall make_wall() override;
    room make_room() override;
    door make_door(room&, room&) override;
};


#endif //ABSTRACTFACTORY_FAERY_FACTORY_HPP
