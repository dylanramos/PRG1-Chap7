#include <iostream>
#include "Point.h"

int main() {
    Point p(1.f, 2.f);
    p.afficher();
    p.deplacer(3.f, 5.f);
    p.afficher();

    return 0;
}
