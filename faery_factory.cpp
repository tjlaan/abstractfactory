//
// Created by tlrla on 2019-11-28.
//

#include "faery_factory.hpp"
#include "faery_maze.hpp"

maze faery_factory::make_maze() {
    return faery_maze();
}

wall faery_factory::make_wall() {

}

room faery_factory::make_room() {

}

door faery_factory::make_door(room& room1, room& room2) {

}