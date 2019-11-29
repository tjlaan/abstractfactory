// Abstract wall class alongside the concrete wall classes
// Created by tlrla on 2019-11-28.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <vector>
#include <iostream>

using namespace std;

//Abstract wall class with pure virtual describe function
class wall {
public:
    virtual ~wall() = default;
    virtual void describe() = 0;
};

//Concrete wall class of type faery that implements the custom describe function
class faery_wall : public wall {
public:
    void describe() override {
        cout << "A wall covered with flowers." << endl;
    }
};

//Concrete wall class of type future that implements the custom describe function
class future_wall : public wall {
public:
    void describe() override {
        cout << "A wall covered with blinking lights." << endl;
    }
};

#endif //ABSTRACTFACTORY_WALL_HPP
