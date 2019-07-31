//
// Created by efreyu on 31.07.19.
// Перегрузка операторов
#include <iostream>
using namespace std;

class coord {
    int x, y;
public:
    coord() { x = y = 0; }
    coord(int i, int j) { x = i; y = j; }
    void print_xy() { cout << "X: " << x << " Y: " << y << endl; }
    coord operator+ (coord ob2);
    coord operator- (coord ob2);
};

coord coord::operator+(coord ob2) {
    coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;
}

coord coord::operator-(coord ob2) {
    coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}

int main() {
    coord a(100,200), b(57,74), c, d;
    c = a + b;
    d = a - b;
    c.print_xy();
    d.print_xy();

    return 0;
}