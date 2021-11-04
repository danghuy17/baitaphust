#include<iostream>
#include<cmath>
#include<iomanip>
#define EPSILON 1e-08

double mySqrt(long number) {
    double result = 1.0f;
    double result1;
    do{
        result1 = result;
        result = (result + number / result) / 2;
    } while(fabs(result - result1) >= EPSILON);
    return result;
}

long Number(char number[]) {
    long result = 0;
    for(int i = 0; i < 4; ++i) {
        result += pow(10, i) * (number[3 - i] - 48);
    }
    return result;
}
int main() {
    char number[4];
    std::cout << "Nhap vao tung so nguyen" << std::endl;
    for(int i = 0; i < 4; ++i) {
        std::cout << "So thu " << i + 1 << ": ";
        std::cin >> number[i];
    }
    std::cout << std::fixed << std::setprecision(8) << "Can bac hai: " << mySqrt(Number(number));
    return 0;
}
