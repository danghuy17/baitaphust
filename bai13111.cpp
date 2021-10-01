#include<iostream>
#include<cmath>
#include<iomanip>
#define EPSILON 1e-08

double mySqrt(int number) {
    double result = 1.0;
    double result1;
    do {
        result1 = result;
        result = (result + number / result) / 2;
    } while(fabs(result - result1) >= EPSILON);
    return result;
    
}

int main() {
    unsigned int number;
    std::cout << "Nhap number: ";
    std::cin >> number;
    std::cout << std::fixed << std::setprecision(8) << "Can bac 2 cua " << number << " la: " << mySqrt(number);
    return 0;
}