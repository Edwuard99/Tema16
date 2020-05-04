#include "Object.h"

Object :: Object() {

}
Object :: ~Object() {

}

void Object :: display() {
    std::cout << this->id;
}