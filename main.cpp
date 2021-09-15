#include <iostream>
#include "Header.h"
#include "Evolventa.cpp"

using namespace Lab2;

int main() {
    int res;
    double alph;
    double rb;

    get_num(res);
    if (!get_num(alph))
        return 1;
    if (!get_num(rb))
        return  1;
    Evolventa line(alph, rb);

    while (true) {
        std::cout
        << "0. Quit\n"
        << "1. Change parameters\n"
        << "2. Distance to center\n"
        << "3. Get coordinates\n"
        << "4. Get arc length\n"
        << "5. Get radius of curvature"
        << std::endl;

        switch (res) {
            case 1:
                if (!get_num(alph))
                    return 1;
                if (!get_num(rb))
                    return 1;
                line.setParam(alph, rb);
            case 2:
                std::cout << line.getP() << std::endl;
            case 3:
                std::cout << "X: " << line.getX() << "Y: " << line.getY() << std::endl;
            case 4:
                std::cout << line.getS() << std::endl;
            case 5:
                std::cout << line.getK() << std::endl;

        }
        return 0;
    }
}
