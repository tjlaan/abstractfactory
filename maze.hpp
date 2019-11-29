//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <vector>
#include <string>
#include <iostream>
#include "room.hpp"

using namespace std;

class maze {
private:
    vector<room*> rooms;
    vector<wall*> walls;
    vector<door*> doors;
public:
    void virtual describe() = 0;
};

class faery_maze : public maze{
public:
    void describe() override {
        cout << "A magical faery maze" << endl;
        for(room* r : rooms) {

        }
    }
};

class future_maze : public maze{
public:
    void describe() override {
        cout << "A dystopian technological maze" << endl;
        for(room* r : rooms) {

        }
    }
};

#endif //ABSTRACTFACTORY_MAZE_HPP
