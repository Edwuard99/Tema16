#include <iostream>
#include <string>
#include "Vehicul.h"
#include "Casa.h"
#include "ObArray.h"

using namespace std;
int main() {
    Vehicul* vehicul1 = new Vehicul("masina", "negru", 4);
    Vehicul* vehicul2 = new Vehicul("motorisca", "rosu", 2);
    Vehicul* vehicul3 = new Vehicul("masina de politie", "alba", 4);
    Casa* casa1 = new Casa("apartament", 6, 363);
    Casa* casa2 = new Casa("vila bantuita", 8, 697);
    ObArray *obiecte = new ObArray();
    obiecte->add(vehicul1);
    obiecte->add(vehicul2);
    obiecte->add(casa1);
    obiecte->add(casa2);
    obiecte->insertAt(2, vehicul3);
    obiecte->removeAt(4);
    obiecte->display();
    cout << "obiectul de pe pozitia 2: " << endl;
    obiecte->getAt(2)->display();
    cout << "size: " << obiecte->getSize() << endl;
    obiecte->RemoveAll();
    cout << "size: " << obiecte->getSize() << endl;
    obiecte->display();
    return 0;
}
