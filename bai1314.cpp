#include<iostream>

int main() {
    long long x, arr_ngto[100], count = 1, tichNgto = 2;
    arr_ngto[0] = 2;
    std::cout << "Nhap x: ";
    std::cin >> x;
    for(int i = 3; i <= x; ++i) {
        for(int j = 0; j < count; ++j) {
            if(!(i % arr_ngto[j]))
                break;
            if(j == count - 1) {
                arr_ngto[count] = i;
                tichNgto *= i;
                ++count;
            }
        }
    }

    if(x < 2){
        std::cout << 0;
        return 0;
    }
    std::cout << tichNgto;
    return 0;
}