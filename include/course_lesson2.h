#include <iostream>
#include <bits/stdc++.h>

float quotient(int a, int b) {
    return a / b;
}

float remainder(int a, int b) {
    std::cout << "USED!" << std::endl;
    return a % b;
}

void printArrayOne(char *array) {
    std::cout << array << std::endl;
}

void printArrayTwo(char array[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << array[i];
    }
    std::cout << std::endl;
}