//
// Created by chicha-man on 15.09.2021.
//

#ifndef LAB2_HEADER_H
#define LAB2_HEADER_H
namespace Lab2{
    template <class T>
    int get_num(T &a) {
        std::cin >> a;
        if (!std::cin.good())
            return 0;
        return 1;
    }
}
#endif //LAB2_HEADER_H
