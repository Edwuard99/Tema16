#include "Vehicul.h"


Vehicul::Vehicul() = default;

Vehicul::Vehicul(std::string nume, std::string culoare, int numarRoti) {
    this->nume = nume;
    this->culoare = culoare;
    this->numarRoti = numarRoti;

}

Vehicul::~Vehicul() {

}

int Vehicul::getNumarRoti(){
    return this->numarRoti;
}

void Vehicul::setNumarRoti(int numarRoti) {
    this->numarRoti = numarRoti;
}

std::string Vehicul::getCuloare()  {
    return this->culoare;
}

void Vehicul::setCuloare(std::string &culoare) {
    this->culoare = culoare;
}

void Vehicul::display() {
    std::cout << "ID: ";
    std::cout << this->id << std::endl;
    std::cout << "Nume: ";
    std::cout << this->nume << std::endl;
    std::cout << "numarRoti: ";
    std::cout << this->numarRoti << std::endl;
    std::cout << "culoare: ";
    std::cout << this->culoare << std::endl << std::endl;

}


