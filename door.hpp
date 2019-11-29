//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include <map>
#include "room.hpp"

using namespace std;

class door {
private:
    map<room, room> room_map;
public:
    string virtual describe() = 0;
};


#endif //ABSTRACTFACTORY_DOOR_HPP
