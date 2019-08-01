//
// Created by efreyu on 31.07.19.
// Пример стека

#include <iostream>
using namespace std;

const int SIZE = 25;

class stack {
    char stck[SIZE];
    int tos;
    void init();
public:
    stack();
    ~stack();
    void push(char ch);
    char pop();
};

stack::stack() {
//    cout << "Inited!"<< endl;
    stack::init();
}

stack::~stack() {
//    cout << "Destroyed!"<< endl;
}

void stack::init() {
    tos = 0;
}

void stack::push(char ch) {
    if (tos == SIZE) {
        cout << "Stack overflow!" << endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop() {
    if (tos == 0) {
        cout << "Stack is empty!" << endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main() {
    stack s1, s2;
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('d');
    s2.push('e');
    s2.push('f');

    for (i = 0; i < 3; i++) {
        cout << s1.pop() << " ";
    }
    cout << endl;

    for (i = 0; i < 3; i++) {
        cout << s2.pop() << " ";
    }
    cout << endl;

    return 0;
}

