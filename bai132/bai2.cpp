#include<iostream>

long giaiThua(long n);

void bai2() {
    long n;

    std::cout << "Nhap so nguyen duong: ";

    std::cin >> n;

    std::cout << n << "! = " << giaiThua(n) << std::endl;
}

long giaiThua(long n) {
    if (n <= 1) {
        return 1;
    }

    return n * giaiThua(n - 1);
}