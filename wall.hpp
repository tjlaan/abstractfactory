//
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <vector>
#include <iostream>

using namespace std;

class wall {
public:
    virtual ~wall() = default;
    virtual void describe() = 0;
};

class faery_wall : public wall {
public:
    void describe() override {
        cout << "A wall covered with flowers." << endl;
    }
};

class future_wall : public wall {
public:
    void describe() override {
        cout << "A wall covered with blinking lights." << endl;
    }
};

#endif //ABSTRACTFACTORY_WALL_HPP
