#include <stdexcept>
#include <cmath>

#include "Evolventa.h"

// constructor
Evolventa::Evolventa() :phi(0.0), rb(0.0){}

Evolventa::Evolventa(double valuePhi, double valueRb) :phi(0.0), rb(0.0) {
    setPhi(valuePhi);
    setRb(valueRb);
}

//setter
void Evolventa::setPhi(double valuePhi) {
    phi = valuePhi;
}

void Evolventa::setRb(double valueRb) {
    if (valueRb <= 0)
        throw std::logic_error("R <= 0");
        //std::cout << "You are wrong, repeat enter" << std::endl;
        //get_num(valueRb);
    rb = valueRb;
}

//getters
double Evolventa::getPhi() const { return phi; }
double Evolventa::getRb() const { return rb; }

//tasks
double Evolventa::returnP() const { return fabs(rb / cos(phi)); }
double Evolventa::returnS() const { return fabs(rb * phi * phi / 2); }
double Evolventa::returnK() const { return fabs(1 / sqrt(2 * rb * (rb * phi * phi / 2))); }
double Evolventa::returnX() const { return rb * (cos(phi) + phi * sin(phi)); }
double Evolventa::returnY() const { return rb * (sin(phi) - phi * cos(phi)); }
void Evolventa::returnQeq() const { std::cout << "Q = tan(" << phi << ") - " << phi << std::endl; }
void Evolventa::returnPeq() const { std::cout << "P = " << rb << " / cos(" << phi << ")" << std::endl; }