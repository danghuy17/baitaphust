#include<iostream>
#include<cmath>

int Binary(char binary[], int n, int count) {
    if(n - pow(2, count) >= 0) {
        n -= pow(2, count);
        binary[count] = '1';
    }
    if(count == 0)
        return 0;
    return Binary(binary, n, count - 1);
}

int main() {
    char binary[8];
    int n, count = 7;
    std::cout << "Nhap n: ";
    std::cin >> n;
    for(int i = 0; i < 8; ++i) {
        binary[i] = '0';
    }
    Binary(binary, n, count);
    for(int i = 7; i >= 0; --i) {
        std::cout << binary[i];
    }
    return 0;
}