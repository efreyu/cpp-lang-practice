//
// Created by efreyu on 02.08.19.
//
#include "header.h"

int main() {
    /*
     * Задание 1
     */
    using one::getDiffOne;
    using two::getDiffTwo;

    std::cout << getDiffOne() << std::endl;
    std::cout << getDiffTwo() << std::endl;

    /*
     * Задание 2
     */

    int userInt = 0;
    std::cout << "Введите число от 0 до 5: ";
    std::cin >> userInt;
    if (userInt > 5) {
        std::cout << "Число больше 5, введите другое: ";
        std::cin >> userInt;
        if (userInt > 5 && userInt <= 10)
            userInt = userInt - 5;
    } else {
        userInt = 5 - userInt;
    }
    std::cout << "Ваш резкльтат - число " << userInt << ", это " << (userInt > 0 ? "положительное" : "отрицательное") << " число и оно "
            << (userInt == 0 ? "равно" : "не равно") << " нулю." << std::endl;

    /*
     * Задание 3
     */
    int a;
    std::cout << "Введите число от 0 до 5: ";
    std::cin >> a;
    switch (a) {
        case csConst1:
            outputCase(csConst1);
            break;
        case csConst2:
            outputCase(csConst2);
            break;
        case csConst3:
            outputCase(csConst3);
            break;
        case csConst4:
            outputCase(csConst4);
            break;
        case csConst5:
            outputCase(csConst5);
            break;
        case csConst6:
            outputCase(csConst6);
            break;
        default:
            std::cout << "Введёное число не корректно." << std::endl;
            break;
    }

    /*
     * Задание 4
     */
    int b;
    std::cout << "Введите челое число от 0 до 3: ";
    std::cin >> b;
    while (b <= 0 || b > 3) {
        std::cout << "Число не корректно. Введите челое число от 0 до 3: ";
        std::cin >> b;
    }
    do {
        std::cout << --b << std::endl;
    } while (b > 0);


    return 0;
};
