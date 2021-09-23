//#include <strstream>
#include <stdexcept>
#include <cmath>

#include "Evolventa.h"

// constructor
Evolventa::Evolventa(double valuePhi, double valueRb) :phi(0.), rb(0.) {
    setParam(valuePhi, valueRb);
}

//setter
void Evolventa::setParam(double valuePhi, double valueRb) {
    phi = valuePhi;
    if (valueRb <= 0)
        throw std::logic_error("R <= 0");
    rb = valueRb;
}
//tasks
double Evolventa::returnP() const { return rb / cos(phi); }
double Evolventa::returnS() const { return rb * phi * phi / 2; }
double Evolventa::returnK() const { return 1 / sqrt(2 * rb * (rb * phi * phi / 2)); }
double Evolventa::returnX() const { return rb * (cos(phi) + phi * sin(phi)); }
double Evolventa::returnY() const { return rb * (sin(phi) - phi * cos(phi)); }
void Evolventa::returnQeq() const { std::cout << "Q = tan(" << phi << ") - " << phi << std::endl; }
void Evolventa::returnPeq() const { std::cout << "P = " << rb << " / cos(" << phi << ")" << std::endl; }