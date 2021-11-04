#include<iostream>

int main() {
    int n;
    long long fibonacci[100];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    std::cout << "Nhap N: ";
    std::cin >> n;
    for(int i = 2; i < n; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    std::cout << "N so dau tien cua day fibonacci la: ";
    for(int i = 0; i < n; ++i) {
        std::cout << fibonacci[i] << " ";
    }
    return 0;
}