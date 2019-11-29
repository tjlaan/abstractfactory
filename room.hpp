//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <vector>
#include <iostream>

using namespace std;

class room {
public:
    virtual ~room() = default;
    virtual void describe() = 0;
};

class faery_room : public room {
public:
    void describe() override {
        cout << "A sparkly room." << endl;
    }
};

class future_room : public room {
public:
    void describe() override {
        cout << "A whirring room." << endl;
    }
};

#endif //ABSTRACTFACTORY_ROOM_HPP
