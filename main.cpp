#include <iostream>
#include "Header.h"
#include "Evolventa.h"

using namespace Lab2;

int main() {
    int res;
    double alph;
    double rb;
    get_num(res);
    while (true) {
        std::cout << "0. Quit" << "1. Change parameters" << "2. Distance to center" << "3. Get coordinates";
        switch (res) {
            case 1:
                if (!get_num(alph))
                    return 1;
                if (!get_num(rb))
                    return 1;
                Evolventa::setParam(get_num(), get_num());


        }
    return 0;
}
