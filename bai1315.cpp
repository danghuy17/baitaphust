#include<iostream>
#include<iomanip>

char kytu(int x) {
    switch(x) {
        case 10: {
            return 'A';
        }
        case 11: {
            return 'B';
        }
        case 12: {
            return 'C';
        }
        case 13: {
            return 'D';
        }
        case 14: {
            return 'E';
        }
        case 15: {
            return 'F';
        }
        default: {
            return char(x + 48);
        }
    }
}

std::string he16(int x) {
    std::string s = "0x";

    int a = (x & 240) >> 4;

    int b = x & 15;

    s = s + kytu(a);

    s = s + kytu(b);

    return s;
}


int main() {
    std::cout << "Bang chu cai in hoa" << std::endl;

    for(int i = 'A'; i <= 'Z'; ++i) {
        std::cout << char(i) << " " << std::setfill('0') << std::setw(3) << i << " " << he16(i) << std::endl;
    }

    std::cout << "Bang chu cai in thuong" << std::endl;

    for(int i = 'a'; i <= 'z'; ++i) {
        std::cout << char(i) << " " << std::setfill('0') << std::setw(3) << i << " " << he16(i) << std::endl;
    }

    for (int i = '0'; i <= '9'; ++i) {
        std::cout << char(i) << " " << std::setw(3) << i << " " << he16(i) << std::endl;
    }
    return 0;
}
