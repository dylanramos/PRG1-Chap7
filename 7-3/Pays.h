#ifndef EXOS_CHAP_7_PAYS_H
#define EXOS_CHAP_7_PAYS_H

#include <string>
#include <ostream>

class Pays {
    std::string nom;
    unsigned long long nombreHabitants;
    double superficie;
public:
    Pays(const std::string &nom, unsigned long long nombreHabitants, double superficie);

    const std::string &obtenirNom() const { return nom; };

    unsigned long long obtenirNombreHabitants() const { return nombreHabitants; };

    double obtenirSuperficie() const { return superficie; };

    bool operator<(const Pays &rhs);

    double densite() const;
};

std::ostream &operator<<(std::ostream &os, const Pays &pays);

#endif //EXOS_CHAP_7_PAYS_H
