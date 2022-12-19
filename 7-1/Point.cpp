#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(float x, float y) : data{x, y} {}

void Point::deplacer(float x, float y) {
    this->x += x;
    this->y += y;
}

void Point::afficher() const {
    cout << '(' << x << ',' << y << ')' << endl;
}
