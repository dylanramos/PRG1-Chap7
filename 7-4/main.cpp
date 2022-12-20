#include <iostream>

using namespace std;

class Robot {
    int position;
    int direction = 1; // +1 = droite, -1 = gauche
public:
    Robot(int position = 0) : position(position) {};

    int obtenirPosition() const { return position; };

    void deplacer(int position) { this->position += direction * position; };

    void faireDemiTour() { direction = -direction; };
};

int main() {
    Robot robot(5);
    cout << robot.obtenirPosition() << " ... ";
    robot.deplacer(3);
    cout << robot.obtenirPosition() << " ... ";
    robot.faireDemiTour();
    cout << robot.obtenirPosition() << " ... ";
    robot.deplacer(4);
    cout << robot.obtenirPosition();

    return 0;
}