#include<iostream>


int main() {
    int a, b, c;
    int vuong; 
    int can;
    int flag;

    std::cout << "Nhap 3 canh tam giac: ";

    std::cin >> a >> b >> c;

    vuong = (a == b + c) * 4 + (b == c + a) * 2 + (c == b + a);
    can = (b == c) * 4 +  (a == c) * 2 + (a == b);
    flag = vuong | can;

    std::cout << "Tam giac";

    switch(vuong + can) {
        case 0: std::cout << " thuong";
        case 7: std::cout << " deu";
        default:{
            if (vuong) {
                std::cout << " vuong";
            }

            if (can) {
                std::cout << " can";
            }

            std::cout << " tai " << char(67 - flag / 2); 
        }
    }


    return 0;
}