#include<iostream>

int main() {
    long long max, min;
    long long n;
    int i = 0;
    std::cin >> n;
    max = n;
    std::cin >> n;
    min = n;
    if(n > max) {
        min = max;
        max = n;
    }
    while(std::cin >> n && n) {
        if(n > max) 
            max = n;
        if(n < min)
            min = n;
    }
    std::cout << max << std::endl << min;
    return 0;
}