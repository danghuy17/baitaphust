#include<iostream>

double arrangeOfArray(const int* arr, int n) {
    double sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += *(arr + i);
    }

    return sum / n;
}

void bai8() {
    int n = 5;
    int arr[] = { 1, 2, 3, 4, 5 };

    std::cout << "Trung binh cong cua mang: " << arrangeOfArray(arr, n) << std::endl;
}
