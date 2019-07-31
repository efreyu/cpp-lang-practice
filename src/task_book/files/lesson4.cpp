//
// Created by efreyu on 30.07.19.
// Перегрузка операторов
#include <iostream>
#include <fstream>

#define FILENAME "file.txt"
using namespace std;

class coord {
public:
    int x, y;
    coord (int i, int j) {
        x = i;
        y = j;
    }
    friend ostream &operator<< (ostream &stream, coord ob);
    friend istream &operator>> (istream &stream, coord &ob);
};
ostream &operator<< (ostream &stream, coord ob) {
    stream << ob.x << " " << ob.y << "\n";
    return stream;
}
istream &operator>> (istream &stream, coord &ob) {
    stream >> ob.x >> ob.y;
    return stream;
}

int main() {
    // создаём 2 объекта coord с координатами
    coord o1(100, 200), o2(300, 400);
    // поток вывода в него будем записывать координаты
    ofstream out("coords.txt");

    if (!out) {
        cout << "Error, can't open file!";
        return 1;
    }

    out << o1 << o2;
    out.close();

    // Поток на чтение
    ifstream file("coords.txt");
    coord o3(0, 0), o4(0, 0);
    file >> o3 >> o4;
    cout << o3 << o4;
    file.close();

    return 0;
}

