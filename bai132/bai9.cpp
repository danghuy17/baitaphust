#include<iostream>

double muX(int x, int n) {
    if (n < 1) {
        return 1;
    }

    return x * muX(x, n - 1);
}

double fx(const int* heso, int bac, int x) {
    double Fx = 0;

    for (int i = 0; i < bac + 1; ++i) {
        Fx += *(heso + i) * muX(x, 5 - i);
    }

    return Fx;
}

void bai9() {
    int bac = 5;
    int heso[] = { 1, 1, 1, 1, 1, 1 };
    int x = 1;

    std::cout << "F(x) = " << fx(heso, bac, x) << std::endl;
}

