#include<iostream>

double sumS(long long n) {
    if(n == 0) 
        return 1;
    return sumS(n - 1) + 1 / (2.0 * n);
}

int main() {
    long long n;
    std::cout << "Nhap gia tri n: ";
    std::cin >> n;
    std::cout << sumS(n);
    return 0;
}