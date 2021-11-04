#include<iostream>

int main() {
    int n, s = 2;
    long long fibonacci[100];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    std::cout << "Nhap so nguyen muon ktra: ";
    std::cin >> n;
    do{
        fibonacci[s] = fibonacci[s - 1] + fibonacci[s - 2];
        ++s;
        if(fibonacci[s - 1] == n) {
            std::cout << n << " co nam trong day fibonacci";
            return 0;
        }
    } while(fibonacci[s - 1] < n);
    std::cout << n << " khong nam trong day fibonacci";
    return 0;
}