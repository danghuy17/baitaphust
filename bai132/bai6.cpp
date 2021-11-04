#include<iostream>

void printArray(const int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "Arr[" << i << "] = " << *(arr + i) << std::endl;
    }
}


void bai6() {
    int n = 5;
    int arr[5] = { 0 , 1, 2, 3, 4 };

    printArray(arr, n);
}

