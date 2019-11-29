// Abstract room class alongside the concrete room classes
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <vector>
#include <iostream>

using namespace std;

//Abstract room class with pure virtual describe function
class room {
public:
    virtual ~room() = default;
    virtual void describe() = 0;
};

//Concrete room class of type faery that implements the custom describe function
class faery_room : public room {
public:
    void describe() override {
        cout << "A sparkly room." << endl;
    }
};

//Concrete room class of type future that implements the custom describe function
class future_room : public room {
public:
    void describe() override {
        cout << "A whirring room." << endl;
    }
};

#endif //ABSTRACTFACTORY_ROOM_HPP
