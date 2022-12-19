#ifndef EXOS_CHAP_7_POINT_H
#define EXOS_CHAP_7_POINT_H

#include <array>

class Point {
    std::array<float, 2> data;
    float &x = data[0];
    float &y = data[1];
public:
    Point(float x, float y);

    void deplacer(float x, float y);

    void afficher() const;
};

#endif //EXOS_CHAP_7_POINT_H
