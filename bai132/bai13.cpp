#include<iostream>

void addInArray(int* arr, int n) {
    *arr = 1;
    *(arr + 1) = 1;

    for (int i = 2; i < n; ++i) {
        *(arr + i) = *(arr + i - 1) + *(arr + i - 2);
    }    
}

void bai13() {
    int n = 10;
    int* arr;
    arr = new int[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Arr[" << i << "] = " << *(arr + i) << std::endl;
    }

    delete[] arr;
}
