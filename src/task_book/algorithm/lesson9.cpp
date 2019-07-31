//
// Created by efreyu on 31.07.19.
// Двоичный поиск в целом (int) массиве
#include <iostream>
using namespace std;
#define TRUE 0
#define FALSE 1

const int CNT = 1024;

int main(void) {
    int array[CNT];
    int i;
    int left = 0;
    int right = CNT;
    int middle = 0;
    int number = 0;
    int bsearch = FALSE;
    int iterations = 0;

    for (i = 0; i < CNT; ++i) {
        array[i] = i;
    }
    cout << "Массив из " << CNT << " элементов инициализирован." << endl;
    cout << "Ищем число: ";
    cin >> number;
    while (bsearch == FALSE && left <= right) {
        middle = (left + right) / 2;
        iterations++;

        if (number == array[middle]) {
            bsearch = TRUE;
            cout << "Найдено за " << iterations << " итераций!\n";
        } else {
            if (number < array[middle]) right = middle - 1;
            if (number > array[middle]) left = middle + 1;
        }
    }

    if (bsearch == FALSE) {
        cout << "Не найдено\n";
    }

    return 0;

}


