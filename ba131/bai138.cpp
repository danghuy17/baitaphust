#include<iostream>

int main() {
    long long odd_number[100], even_number[100], chia8[100];
    int odd = 0, even = 0, chia = 0;
    long long n;
    while(std::cin >> n && n) {
        if(n % 2) {
            odd_number[odd] = n;
            ++odd;
        }
        else {
            even_number[even] = n;
            ++even;
        }
        if(!(n & 7)) {
            chia8[chia] = n;
            ++chia;
        }
    }
    std::cout << "Cac so chan: ";
    for(int i = 0; i < even; ++i) {
        std::cout << even_number[i] << " ";
    }
    std::cout << std::endl << "Cac so le: ";
    for(int i = 0; i < odd; ++i) {
        std::cout << odd_number[i] << " ";
    }
    std::cout << std::endl << "Cac so chia het cho 8: ";
    for(int i = 0; i < chia; ++i) {
        std::cout << chia8[i] << " ";
    }
    return 0;
}