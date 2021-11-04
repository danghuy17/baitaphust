#include<iostream>

double my_sqr(double x, long n);

void bai1() {
    double x;
    long n;

    std::cout << "Nhap lan luot x va n: ";

    std::cin >> x >> n;

    std::cout << "x mu n: " << my_sqr(x, n) << std::endl;
}


double my_sqr(double x, long n) {
    if (n == 0) {
        return 1;
    }

    if (n > 0) {
        return x * my_sqr(x, n - 1);
    }
    else if (n < 0) {
        return 1 / x * my_sqr(x, n + 1);
    }
}