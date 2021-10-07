#ifndef LAB2_EVOLVENTA_H
#define LAB2_EVOLVENTA_H

#include <iostream>
#include <limits>

template <class T>
    int get_num(T& a) {
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
    //constructor
    Evolventa();
    Evolventa(double valuePhi, double valueRb);

    //setters
    void setPhi(double valuePhi);
    void setRb(double valueRb);
    //getters
    double getPhi() const;
    double getRb() const;

    //tasks
    double returnP() const;
    double returnS() const;
    double returnK() const;
    double returnX() const;
    double returnY() const;
    void returnQeq() const;
    void returnPeq() const;
};

#endif //LAB2_EVOLVENTA_H
