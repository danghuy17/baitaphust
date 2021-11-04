#include<iostream>

int sumOfArray(const int* arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += *(arr + i);
    }

    return sum;
}


void bai7() {
    int n = 5;
    int arr[5] = { 1, 2, 3, 4, 5 };

    std::cout << "Tong cua mang: " << sumOfArray(arr, n) << std::endl;
}
