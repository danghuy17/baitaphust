#include<iostream>

long long giaiThua(long long x) {
    if (x <= 1)
        return 1;
    return giaiThua(x - 1) * x;
}

int main() {
    long long k, n;
    std::cout << "Nhap n va k: ";
    std::cin >> n >> k;
    std::cout << 1.0 * (giaiThua(n)) / (giaiThua(k) * giaiThua(n - k));
    return 0;
}