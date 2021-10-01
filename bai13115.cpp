#include<iostream>
#include<iomanip>
int main() {
    std::cout << "Bang chu cai in hoa" << std::endl;
    for(int i = 'A'; i <= 'Z'; ++i) {
        std::cout << char(i) << " " << std::setfill('0') << std::setw(3) << i << std::endl;
    }
    std::cout << "Bang chu cai in thuong" << std::endl;
    for(int i = 'a'; i <= 'z'; ++i) {
        std::cout << char(i) << " " << std::setfill('0') << std::setw(3) << i << std::endl;
    }
    return 0;
}
