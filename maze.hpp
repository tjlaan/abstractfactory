// Abstract maze class alongside the concrete maze classes
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <vector>
#include <iostream>
#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"

using namespace std;

//Abstract maze class that implements basic maze logic such as the destructor and describeAll method
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

    //Abstract function that provides a custom description depending on the type of maze
    virtual void describe() = 0;

    //After describing current maze type, iterates through all maze components and describes them as well
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

//Concrete maze of type faery that implements the custom description function
class faery_maze : public maze{
public:
    void describe() override {
        cout << "A magical faery maze that has:" << endl;
    }
};

//Concrete maze of type future that implements the custom description function
class future_maze : public maze{
public:
    void describe() override {
        cout << "A dystopian technological maze that has:" << endl;
    }
};

#endif //ABSTRACTFACTORY_MAZE_HPP
