//
// Created by chicha-man on 14.09.2021.
//

#ifndef LAB2_EVOLVENTA_H
#define LAB2_EVOLVENTA_H

#include <iostream>
#include <cmath>

template <class T>
static int get_num(T& a) {
    std::cin >> a;

    while (!std::cin.good()) {
        if (std::cin.bad()) throw std::runtime_error("Fatal error");
        if (std::cin.eof()) return 1;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Invalid input. Please, try again from incorrect value" << std::endl;
        std::cin >> a;
    }

    return 0;
}

class Evolventa {
private:
    double phi; // угол поворота от начала
    double rb; // начальный радиус окружности
public:

    Evolventa(double valueAlph, double valueRb);
    void setParam(double valueAlph, double valueRb);

    double getP() {return rb / cos(phi);}
    double getS() {return rb * phi * phi / 2;}
    double getK() {return 1 / sqrt(2 * rb * (rb * phi * phi / 2));}
    double getX() {return rb * (cos(phi) + phi * sin(phi));}
    double getY() {return rb * (sin(phi) - phi * cos(phi));}
    const char *getQeq() {return "Q = tan(phi) - phi";}
    const char *getPeq() {return "P = rb / cos(phi)";}
};

#endif //LAB2_EVOLVENTA_H
