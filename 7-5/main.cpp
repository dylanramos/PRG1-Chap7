#include <iostream>
#include "Point.h"

using namespace std;

void afficher(Point const& p) {
    cout << '(' << p.abscisse() << ',' << p.ordonnee() << ')' << endl;
}

int main() {
    Point p(1.f, 2.f);
    afficher(p);
    p.deplacer(3.f, 5.f);
    afficher(p);

    Point q(-1.f, 3.f);

    afficher(p + q);

    return 0;
}
