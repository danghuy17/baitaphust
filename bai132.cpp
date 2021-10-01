#include<iostream>

long long XmuN(long long x, long long n) {
    if(n == 0)
        return 1;
    return XmuN(x, n - 1) * x;
}

int main() {
    long long x, n;
    std::cout << "Nhap gia tri x va n: ";
    std::cin >> x >> n;

    std::cout << XmuN(x, n);
    return 0;
}