#include<iostream>

std::string hexToBinary(int n, int bit) {
    std::string s = "";

    for (int i = 0; i < bit; ++i) {
        s = char((n >> i & 1) + '0') + s; 
        
        if (!((i + 1) & 3) && (i + 1) != bit) {
            s = ' ' + s;
        }
    }
    
    return s;
}

void bai16() {
    int n = 100;
    int bit = 16;

    std::cout << hexToBinary(n, bit);
}
