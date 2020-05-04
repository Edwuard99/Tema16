#include "ObArray.h"

ObArray :: ObArray() = default;
/*ObArray :: ObArray(int size,int grows, int dimens){
    this->size = size;
    this->grows = grows;
    this->dimens = dimens;
}*/
ObArray :: ~ObArray(){

}
void ObArray :: RemoveAll() {
    objects.clear();
}
int ObArray :: getSize() {
    return objects.size();
}
void ObArray :: add(Object* x) {
    objects.push_back(x);
}
void ObArray :: insertAt(int i, Object *x) {
    objects.insert(objects.cbegin() + i, x);
}
void ObArray :: removeAt(int i) {
    objects.erase(objects.cbegin() + i);
}
Object* ObArray :: getAt(int i) {
    return objects.at(i);
}
void ObArray :: display() {
    for(int i = 0; i<objects.size(); i++){
        objects[i]->display();
    }
}