// Abstract door class alongside the concrete door classes
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include <map>
#include "room.hpp"

using namespace std;

//Abstract door class with pure virtual describe function and basic door function used to describe the connected rooms
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

//Concrete door class of type faery that implements the custom describe function
class faery_door : public door{
public:
    faery_door(room* room1, room* room2) : door(room1, room2) {}

    void describe() override {
        cout << "A door made of vines connecting: " << endl;
        describe_rooms();
    }
};

//Concrete door class of type future that implements the custom describe function
class future_door : public door{
public:
    future_door(room* room1, room* room2) : door(room1, room2) {}

    void describe() override {
        cout << "A door made of wires connecting: " << endl;
        describe_rooms();
    }
};

#endif //ABSTRACTFACTORY_DOOR_HPP
