//
// Created by efreyu on 01.08.19.
// Бинарный поиск по массиву строк
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

static int binsearch(char *str[], int max, char *value);

int main(void) {
    // Массив который будем сортировать
    char *strings[] = {
            "abstract",
            "bounty",
            "watson",
            "xray",
            "zend"
    };
    int i, asize, result;
    i = asize = result = 0;
    asize = sizeof(strings) / sizeof(strings[0]);
    cout << "В массиве " << asize << " элементов:" << endl;
    for (i = 0; i < asize; ++i) {
        cout << i << ": " << strings[i] << endl;
    }

    /*
     * Ищем строки
     */
    char *search[] = {
            "room",
            "zend",
            "watson",
            "cpp",
            "xray",
            "abstract",
            "bounty",
    };
    for (i = 0; i < (sizeof(search) / sizeof(search[0])); ++i) {
        cout << "Ищем " << search[i] << " ";
        if ((result = binsearch(strings, asize, search[i])) != 0) {
            cout << "найдено на позиции " << result << endl;
        } else {
            cout << "ненайдено" << endl;
        }
    }

    return 0;
}

static int binsearch(char *str[], int max, char *value) {
    int position;
    int begin = 0;
    int end = max - 1;
    int cond = 0;

    while (begin <= end) {
        position = (begin + end) / 2;
        if ((cond = strcmp(str[position], value)) == 0) {
            return position;
        } else if (cond < 0) {
            begin = position + 1;
        } else {
            end = position - 1;
        }
    }

    return 0;
}

