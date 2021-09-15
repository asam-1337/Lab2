//
// Created by chicha-man on 14.09.2021.
//

#ifndef LAB2_EVOLVENTA_H
#define LAB2_EVOLVENTA_H

#include <iostream>
#include <cmath>

template <class T>
int get_num(T &a) {
    std::cin >> a;
    if (!std::cin.good())
        return 0;
    return 1;
}

class Evolventa {
private:
    double phi; // угол поворота от начала
    double rb; // начальный радиус окружности
/*
    double X = rb * (cos(phi) + phi * sin(phi));
    double Y = rb * (sin(phi) - phi * cos(phi));

    double Q = tan(phi) - phi; // полярный угол
    double P = rb / cos(phi); // расстояние до центра
    double S = rb * phi * phi / 2; // длина дуги
    double K = 1 / sqrt(2 * rb * S); // нормальное уравнение кривой, зависимость кривизны от длины дуги
    */
public:

    Evolventa(double valueAlph, double valueRb);
    void setParam(double valueAlph, double valueRb);

    double getP() {return rb / cos(phi);}
    double getS() {return rb * phi * phi / 2;}
    double getK() {return 1 / sqrt(2 * rb * (rb * phi * phi / 2));}
    double getX() {return rb * (cos(phi) + phi * sin(phi));}
    double getY() {return rb * (sin(phi) - phi * cos(phi));}
};

#endif //LAB2_EVOLVENTA_H
