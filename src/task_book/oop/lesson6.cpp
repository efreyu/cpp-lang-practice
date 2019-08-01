//
// Created by efreyu on 31.07.19.
// Массив объектов

#include <iostream>
using namespace std;

class demo {
    int a;
public:
    demo(int n) { a = n; }
    int get_a() { return a; };
};

int main () {
    demo ar[3] = {1, 2, 3};
    int i;

    for (i = 0; i < 3; ++i) {
        cout << ar[i].get_a() << " ";
    }
    cout << endl;

    return 0;
}

