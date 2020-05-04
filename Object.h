#include <iostream>
#include <vector>
#ifndef TEMA16_OBJECT_H
#define TEMA16_OBJECT_H

class Object{
    const std::string id = "Object";
public:
    Object();
    virtual ~Object();
    virtual void display();
};

#endif //TEMA16_OBJECT_H
