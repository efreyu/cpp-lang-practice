//
// Created by efreyu on 01.08.19.
// bubble sort -_-

#include <iostream>
using namespace std;

void bubble_sort(int a[], int size);

int main() {
    int arr[] = {9,4,5,2,6,7,8,1,3,11,10};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    cout << "before sort\n";
    for (i = 0; i < arr_length; ++i) {
        cout << arr[i] << " ";
    }

    bubble_sort(arr,arr_length);

    cout << "after sort\n";
    for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

void bubble_sort(int a[], int size) {
    int switched = 1;
    int temp, i, j;
    temp = i = j = 0;

    size -= 1;

    for (i = 0; i < size && switched; ++i) {
        switched = 0;
        for (j = 0; j < size - i; ++j) {
            if (a[j] > a[j+1]) {
                switched = 1;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

        }
    }
}