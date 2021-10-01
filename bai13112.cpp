#include<iostream>
#include<cmath>
#include<iomanip>
#define EPSILON 1e-08

double mySqrt(double number) {
    double result = 1.0;
    double result1;
    do{
        result1 = result;
        result = (result + number / result) / 2;
    } while(fabs(result - result1) >= EPSILON);
    return result;
}

int main() {
    unsigned int number;
    std::cout << "Nhap gia tri: ";
    std::cin >> number;
    std::cout << std::fixed << std::setprecision(8) << mySqrt(number);
    return 0;
}