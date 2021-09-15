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
    double alph; // угол поворота от начала
    double rb; // начальный радиус окружности
    double Q = tan(alph) - alph; // полярный угол
    double P = rb / cos(alph); // расстояние до центра
    double S = rb * tan(alph); // длина дуги
    double K = 1 / sqrt(2 * rb * S); // нормальное уравнение кривой, зависимость кривизны от длины дуги
public:

    Evolventa(double valueAlph, double valueRb);
    void setParam(double valueAlph, double valueRb);

    double getP() {return P;}
    double getS() {return S;}
    double getK() {return K;}
    //double getQ() {return Q;}
};

#endif //LAB2_EVOLVENTA_H
