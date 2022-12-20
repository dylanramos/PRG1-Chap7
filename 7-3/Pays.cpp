#include "Pays.h"

using namespace std;

Pays::Pays(const std::string &nom, unsigned long long nombreHabitants, double superficie) {
    this->nom = nom;
    this->nombreHabitants = nombreHabitants;
    this->superficie = superficie;
}

double Pays::densite() const {
    return this->obtenirNombreHabitants() / obtenirSuperficie();
}

bool Pays::operator<(const Pays &rhs) {
    return this->obtenirSuperficie() < rhs.obtenirSuperficie();
}

ostream &operator<<(ostream &os, const Pays &pays) {
    return os << pays.obtenirNom();
}

