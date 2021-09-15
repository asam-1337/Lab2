//
// Created by chicha-man on 14.09.2021.
//

#ifndef LAB2_EVOLVENTA_H
#define LAB2_EVOLVENTA_H

#include <iostream>
#include <cmath>
#include "Header.h"


class Evolventa {
private:
    double phi; // угол поворота от начала
    double rb; // начальный радиус окружности

    double X = rb*(cos(phi) + phi * sin(phi));
    double Y = rb*(sin(phi) - phi * cos(phi));

    double Q = tan(phi) - phi; // полярный угол
    double P = rb / cos(phi); // расстояние до центра
    double S = rb * (phi * phi) / 2; // длина дуги
    double K = 1 / sqrt(2 * rb * S); // нормальное уравнение кривой, зависимость кривизны от длины дуги
public:

    Evolventa(double valueAlph, double valueRb);
    void setParam(double valueAlph, double valueRb);

    double getP() {return P;}
    double getS() {return S;}
    double getK() {return K;}
    double getX() {return X;}
    double getY() {return Y;}
};

#endif //LAB2_EVOLVENTA_H
