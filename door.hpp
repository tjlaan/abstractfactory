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
    room* room1;
    room* room2;
public:
    door(room* room1, room* room2) : room1(room1), room2(room2) {}
    virtual ~door() = default;

    void describe_rooms() {
        room1 -> describe();
        cout << "and" << endl;
        room2 -> describe();
    }

    virtual void describe() = 0;
};

class faery_door : public door{
public:
    faery_door(room* room1, room* room2) : door(room1, room2) {}

    void describe() override {
        cout << "A door made of vines connecting: " << endl;
        describe_rooms();
    }
};

class future_door : public door{
public:
    future_door(room* room1, room* room2) : door(room1, room2) {}

    void describe() override {
        cout << "A door made of wires connecting: " << endl;
        describe_rooms();
    }
};

#endif //ABSTRACTFACTORY_DOOR_HPP
