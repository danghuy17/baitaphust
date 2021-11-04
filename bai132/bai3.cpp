#include<iostream>

int viTri(int t);

void bai3() {
    int t;

    std::cout << "Nhap t la vi tri trong day Fibonacci: ";

    std::cin >> t;

    std::cout << "Vi tri " << t << " trong day Fibonacci: " << viTri(t) << std::endl;
}

int viTri(int t) {
    
    if (t <= 2) {
        return 1;
    }

    return viTri(t - 1) + viTri(t - 2);
}