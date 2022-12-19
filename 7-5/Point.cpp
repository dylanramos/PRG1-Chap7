#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(float x, float y) : data{x, y} {}

void Point::deplacer(float x, float y) {
    this->x += x;
    this->y += y;
}

Point &Point::operator+=(const Point &rhs) {
    x += rhs.x;
    y += rhs.y;

    return *this;
}

Point operator+(Point lhs, const Point &rhs) {
    return lhs += rhs;
}