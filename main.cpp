#include <iostream>

#include "Evolventa.h"

int main() {
    int res;
    double alph;
    double rb;

    std::cout << "Enter angle" << std::endl;
    if (get_num(alph))
        return 1;

    std::cout << "Enter radius" << std::endl;
    if (get_num(rb))
        return  1;

    Evolventa line(alph, rb);

    while (true) {
        std::cout
        << "0. Quit\n"
        << "1. Change parameters\n"
        << "2. Distance to center\n"
        << "3. Get coordinates\n"
        << "4. Get arc length\n"
        << "5. Get radius of curvature\n"
        << "6. Get equations in polar system"
        << std::endl;

        if (get_num(res))
            return 1;

        switch (res) {
            case 0:
                return 0;
            case 1:
                std::cout << "Enter angle" << std::endl;
                if (get_num(alph))
                    return 1;
                std::cout << "Enter radius" << std::endl;
                if (get_num(rb))
                    return 1;
                line.setParam(alph, rb);
                std::cout << "Coordinates set" << std::endl;
                break;
            case 2:
                std::cout << "Distance to center P = " << line.returnP() << std::endl;
                break;
            case 3:
                std::cout << "Coordinates:\n" << "X: " << line.returnX() << "\nY: " << line.returnY() << std::endl;
                break;
            case 4:
                std::cout << "Arc length S = " << line.returnS() << std::endl;
                break;
            case 5:
                std::cout << "Radius of curvature k = " << line.returnK() << std::endl;
                break;
            case 6:
                line.returnQeq();
                line.returnPeq();
                break;
            default:
                std::cout << "No such option" << std::endl;
                break;
        }
    }
}
