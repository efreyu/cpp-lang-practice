//
// Created by efreyu on 31.07.19.
// Наследование

#include <iostream>
using namespace std;

class demo {
    int x;
public:
    void setx(int n) { x = n; }
    void printx() { cout << x << endl; }
};

class test: public demo {
    int y;
public:
    void sety(int n) { y = n; }
    void printy() { cout << y << endl; }
};

int main() {
    test obj;
    obj.setx(100);
    obj.sety(200);

    obj.printx();
    obj.printy();

    return 0;
}