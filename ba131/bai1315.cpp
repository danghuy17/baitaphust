#include<iostream>
#include<iomanip>

std::string he16(int x) {
    std::string s = "0x";

    int a = x / 16;

    s = s + char((a < 10) ? (a + 48) : (65 - 10 + a));

    s = s + char((x % 16) < 10 ? (x % 16) + 48 : (x % 16) + 55);

    return s;
}

int main() {
    std::cout << "Bang chu cai in hoa" << std::endl;

    for(int i = 'A'; i <= 'Z'; ++i) {
        std::cout << char(i) << '\t' << std::setfill('0') << std::setw(3) << i << '\t' << he16(i) << std::endl;
    }

    std::cout << "Bang chu cai in thuong" << std::endl;

    for(int i = 'a'; i <= 'z'; ++i) {
        std::cout << char(i) << '\t' << std::setfill('0') << std::setw(3) << i << '\t' << he16(i) << std::endl;
    }

    for (int i = '0'; i <= '9'; ++i) {
        std::cout << char(i) << '\t' << std::setw(3) << i << '\t' << he16(i) << std::endl;
    }
    return 0;
}
