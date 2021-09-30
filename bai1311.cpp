#include<iostream>

long long giaiThua(long long n) {
    if(n == 1) 
        return 1;
    return giaiThua(n - 1) * n;
}

int main() {
    long long n;
    std::cout << "Nhap N: ";
    std::cin >> n;
    std::cout << giaiThua(n);
    return 0;
}