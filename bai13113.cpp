#include<iostream>
#include<iomanip>

int main() {
    int n, m;
    long matrix[100][100], x = 1;
    std::cout << "Nhap m, n cua ma tran M x N: ";
    std::cin >> m >> n;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            matrix[i][j] = x;
            ++x;
        }
    }
    std::cout << std::setfill('0');
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            std::cout << std::setw(2) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}