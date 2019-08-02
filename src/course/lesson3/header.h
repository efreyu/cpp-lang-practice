//
// Created by efreyu on 02.08.19.
//

#ifndef CPP_LANG_PRACTICE_HEADER_H
#define CPP_LANG_PRACTICE_HEADER_H

#include <iostream>

namespace one
{
    int x = 30;
    int y = 14;
    int getDiffOne() { return x - y; }
}

namespace two
{
    double x = 3.12;
    double y = 1.51;
    int getDiffTwo() { return x - y; }
}

enum const_enum {
    csConst1 = 0,
    csConst2 = 1,
    csConst3 = 2,
    csConst4 = 3,
    csConst5 = 4,
    csConst6 = 5,
};

void outputCase(int a) {
    std::cout << "Вы ввели " << a << " число попадает " <<  (a > 2 ? "во вторую" : "в первую") << " половиу множества." <<  std::endl;
}

#endif //CPP_LANG_PRACTICE_HEADER_H
