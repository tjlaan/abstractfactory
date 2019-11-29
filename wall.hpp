//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <vector>
#include "door.hpp"

using namespace std;

class wall {
private:
    vector<door> doors;
public:
    string virtual describe() = 0;
};


#endif //ABSTRACTFACTORY_WALL_HPP
