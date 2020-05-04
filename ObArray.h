#include "Object.h"

#ifndef TEMA16_OBARRAY_H
#define TEMA16_OBARRAY_H

class ObArray : public Object {
    std::vector<Object*> objects; // vector de pointeri
    int size; // numar de elemente la un moment dat
    int grows; // increment de creştere a dimensiunii
    int dimens; // dimensiune vector
public:
    ObArray();
    //ObArray(int size=0,int grows = 1, int dimens = 1);//Constructor
    ~ObArray();//Destructor
    void RemoveAll();//Elimina toate obiectele din vector
    int getSize(); // Intoarce numarul de elemente din vector.
    void add(Object* x); //Adauga un element la vector.
    void insertAt(int i, Object *x);//Insereaza un element pe // o pozitie data
    void removeAt(int i); //Elimina elementul de pe pozitia i
    Object* getAt(int i); //Intoarce elementul de la pozitia i
    void display();// Afisare elementelor din tablou.
};

#endif //TEMA16_OBARRAY_H
