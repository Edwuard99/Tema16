#include "Casa.h"

Casa::Casa() = default;
Casa::Casa(std::string nume, int numarCamere, int suprafata) {
    this->nume = nume;
    this->numarCamere = numarCamere;
    this->suprafata = suprafata;
}
Casa::~Casa(){

}

std::string Casa::getId(){
    return id;
}

std::string Casa::getNume(){
    return nume;
}

void Casa::setNume(std::string nume) {
    Casa::nume = nume;
}

int Casa::getNumarCamere(){
    return numarCamere;
}

void Casa::setNumarCamere(int numarCamere) {
    Casa::numarCamere = numarCamere;
}

int Casa::getSuprafata(){
    return suprafata;
}

void Casa::setSuprafata(int suprafata) {
    Casa::suprafata = suprafata;
}

void Casa::display() {
    std::cout << "ID: ";
    std::cout << this->id << std::endl;
    std::cout << "Nume: ";
    std::cout << this->nume << std::endl;
    std::cout << "numarCamere: ";
    std::cout << this->numarCamere << std::endl;
    std::cout << "suprafata: ";
    std::cout << this->suprafata << std::endl << std::endl;
}