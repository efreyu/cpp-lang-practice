/*
 * Задание 1:
 * 1. Создать в программе две переменные типов short и unsigned char.
 * 2. Записать в первую переменную значение 45000, во вторую — 1400.
 * 3. Вывести значения созданных переменных на экран через cout.
 * 4. Запустить трансляцию программы, проверить сообщения транслятора на экране.
 * 5. Запустить программу, сравнить полученные в выводе значения с записанными в исходном тексте.
 * Задание 2:
 * 1. Объявить в файле-заголовке программы прототип функции, вычисляющей остаток от деления одного целого числа на другое (операция ‘%’)/
 * 2. Реализовать объявленную функцию в основном файле программы.
 * 3. В основном файле программы создать функцию, выводящую на печать целое число.
 * 4. Вызвать функцию печати. В качестве аргумента использовать возвращаемое значение функции определения остатка.
 * 5. Избежать при решении создания дополнительной переменной.
 * Задание 3:
 * 1. Составить массив из 4 элементов типа char и задать его неименованным блоком/
 * 2. Составить функцию, выводящую созданный массив на экран.
 * 3. Проверить обработку массива при заполнении всех элементов и оставлении части элементов свободными.
 */
#include "course_lesson2.h"

float quotient(int a, int b);
float remainder(int a, int b);

void printArrayOne(char *array);
void printArrayTwo(char array[], int n);

int main() {
    /*
     * Задание 1
     */
    short short_var = 45000;
    unsigned char char_var = 1400;
    std::cout << "1Переменная short_var: " << short_var <<  std::endl; /*warning: unsigned conversion, output short_var: -20536*/
    std::cout << "1Переменная char_var: " << char_var <<  std::endl; /*warning: unsigned conversion, output char_var: x*/

    /*
     * Задание 2
     */
    int a = 25, b = 6;
    std::cout << "Первое число " << a << std::endl;
    std::cout << "Второе число " << b << std::endl;
    std::cout << "Результат деления " << quotient(a, b) << std::endl;
    std::cout << "Остаток от деления " << remainder(a, b) << std::endl;

    /*
     * Задание 3
     */
    char charArrayOne[] = { 'w', 'o', 'r', 'd', '\0' };
    printArrayOne(charArrayOne);
    std::string s = "word two";
    int n = s.length();
    char charArrayTwo[n + 1];
    strcpy(charArrayTwo, s.c_str());

    printArrayTwo(charArrayTwo, n);

    return 0;
}