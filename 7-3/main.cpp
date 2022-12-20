#include <iostream>
#include <vector>
#include "Pays.h"

using namespace std;

const Pays& plusGrand(const std::vector<Pays>& pays) {
    return *max_element(pays.begin(), pays.end(), compa);
}

const Pays& plusPeuple(const std::vector<Pays>& pays) {
    return *max
}

const Pays& plusDense(const std::vector<Pays>& pays) {

}

int main() {
    vector<Pays> pays = {Pays("Suisse", 8698000, 41285.),
                         Pays("Belgique", 11590000, 30688.),
                         Pays("Luxembourg", 639000, 2586.)};

    cout << "Pays le plus grand : " << plusGrand(pays).nom() << endl;
    cout << "Pays le plus peuplé : " << plusPeuple(pays).nom() << endl;
    cout << "Pays le plus dense : " << plusDense(pays).nom() << endl;

    return 0;
}

