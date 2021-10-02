#include<iostream>
#include<string>

void Binary(int binary[], int n) {
    for (int i = 0; i < 8; ++i) {
        binary[i] = ((n >> i) & 1);
    }
}

int main() {
    int binary[8];
    // int n = 10;
    int n;
    std::cout << "Nhap n: ";
    std::cin >> n;
    Binary(binary, n);
    for(int i = 7; i >= 0; --i) {
        std::cout << binary[i];
    }
    return 0;
}