#include "Object.h"
#ifndef TEMA16_CASA_H
#define TEMA16_CASA_H


class Casa:public Object {
private:
    const std::string id = "Casa";
    std::string nume;
    int numarCamere;
    int suprafata;
public:
    Casa();
    Casa(std::string nume, int numarCamere, int suprafata);
    ~Casa() override;
    std::string getId();

    std::string getNume();
    void setNume(std::string nume);

    int getNumarCamere();
    void setNumarCamere(int numarCamere);

    int getSuprafata();
    void setSuprafata(int suprafata);

    void display() override;
};


#endif //TEMA16_CASA_H
