//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <vector>
#include "wall.hpp"

class room {
private:
    int room_no;
    vector<wall> walls;
public:
    string virtual describe() = 0;
};


#endif //ABSTRACTFACTORY_ROOM_HPP
