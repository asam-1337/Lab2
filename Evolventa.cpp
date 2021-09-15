//
// Created by chicha-man on 14.09.2021.
//

#include "Evolventa.h"

// конструктор
Evolventa::Evolventa(double valueAlph, double valueRb) {
    setParam(valueAlph, valueRb);
}

void Evolventa::setParam(double valueAlph, double valueRb) {
    phi = valueAlph;
    rb = valueRb;
}