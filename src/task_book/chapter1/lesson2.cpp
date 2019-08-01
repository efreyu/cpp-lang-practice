//
// Created by efreyu on 30.07.19.
// Определение високосного года.

#include <iostream>
using namespace std;

bool isLeap(int year) {
    bool result = false;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                result = true;
        } else {
            result = true;
        }
    }

    return result;
}

int main() {
    int year;

    cout << "Введите год: ";
    cin >> year;

    cout << year << (isLeap(year) ? " - високосный" : " - невисокосный") << endl;

    return 0;
}