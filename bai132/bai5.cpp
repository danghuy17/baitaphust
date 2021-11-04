#include<iostream>

double cTof(double c) {
    return c * 9 / 5 + 32;
}

double cTok(double c) {
    return c + 273;
}

void bai5() {
    double doC;
    
    std::cout << "Nhap do C: ";
    std::cin >> doC;
    
    std::cout << "Do F: " << cTof(doC) << std::endl;
    std::cout << "Do K: " << cTok(doC) << std::endl;
}
