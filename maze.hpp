//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <vector>
#include <string>
#include <iostream>
#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"

using namespace std;

class maze {
private:
    vector<room*> rooms;
    vector<wall*> walls;
    vector<door*> doors;
public:
    virtual ~maze() {
        for(room* r : rooms) {
            delete r;
        }

        for(wall* w : walls) {
            delete w;
        }

        for(door* d : doors) {
            delete d;
        }
    }

    virtual void describe() = 0;

    void describeAll() {
        this -> describe();
        for(room* r : rooms) {
            r -> describe();
        }
        for(wall* w : walls) {
            w -> describe();
        }
        for(door* d : doors) {
            d -> describe();
        }
    }

    void addRoom(room* r) {
        rooms.push_back(r);
    }

    void addWall(wall* w) {
        walls.push_back(w);
    }

    void addDoor(door* d) {
        doors.push_back(d);
    }
};

class faery_maze : public maze{
public:
    void describe() override {
        cout << "A magical faery maze that has:" << endl;
    }
};

class future_maze : public maze{
public:
    void describe() override {
        cout << "A dystopian technological maze that has:" << endl;
    }
};

#endif //ABSTRACTFACTORY_MAZE_HPP
