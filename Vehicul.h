#include "Object.h"
#ifndef TEMA16_VEHICUL_H
#define TEMA16_VEHICUL_H


class Vehicul:public Object {
private:
    const std::string id = "Vehicul";
    std::string nume;
    std::string culoare;
    int numarRoti;

public:

    Vehicul();
    Vehicul(std::string nume, std::string culoare, int numarRoti);
    ~Vehicul() override;
    int getNumarRoti() ;

    void setNumarRoti(int numarRoti);


    std::string getCuloare() ;

    void setCuloare( std::string &culoare);

    void display() override;
};


#endif //TEMA16_VEHICUL_H
