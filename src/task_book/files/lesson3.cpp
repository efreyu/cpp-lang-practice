//
// Created by efreyu on 30.07.19.
// Работа с файлами
#include <iostream>
#include <fstream>
#include <string>

#define FILENAME "file.txt"
using namespace std;

void writeToFile() {
    cout << FILENAME << endl;
    ofstream file; // создаём поток
    file.open(FILENAME); //попытка открыть файл

    if (!file) {
        cout << "Error, can't open the file" << endl;
    } else {
        cout << "Start writing to file " << FILENAME << endl;
        file << "Row number one" << endl;
        file << "Row number two\n";
        file.close();
    }
    cout << "Stop writing to file." << endl;
}

/*
 * Посимвольное чтение файла
 */
void readFromFile() {
    ifstream fopen; // создаём поток для вывода
    fopen.open(FILENAME); // пытаемся открыть файл
    fopen.unsetf(ios::skipws);

    if (!fopen) {
        cout << "Error, can't open the file" << endl;
    } else {
        cout << "Start reading from " << FILENAME << endl;
        char ch;
        while (!fopen.eof()) {
            fopen >> ch;
            cout << ch;
        }
        cout << endl;
        fopen.close();
    }
}

/*
 * Построчное чтение файла
 */
void readByLine() {
    string s;
    ifstream file(FILENAME);

    while (getline(file, s)) {
        cout << s << endl;
        s += "+";
        cout << s << endl;
    }
    file.close();
}
int main() {
//    writeToFile();
//    readFromFile();
    readByLine();
    return 0;
}

