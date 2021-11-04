#include<iostream>

double XmuN(long long x, long long n) {
    if(n == 0)
        return 1;
    return XmuN(x, n - 1) * x;
}

int main() {
    long long n;
    double x;
    bool check = true;

    std::cout << "Nhap gia tri x va n: ";
    std::cin >> x >> n;

    if (n < 0)
        check = false;

    n = (n > 0) ? n : -n;

    if (check == true)
        std::cout << XmuN(x, n);
    else
        std::cout << 1 / XmuN(x, n);

    return 0;
}