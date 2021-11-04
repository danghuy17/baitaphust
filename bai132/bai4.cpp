#include<iostream>
#include<cmath>

void giaiPTBac2(double a, double b, double c);


void bai4() {
    double a, b, c;

    std::cout << "Nhap he so a, b, c cua phuong trinh ax^2 + bx + c = 0" << std::endl;

    std::cin >> a >> b >> c;

    giaiPTBac2(a, b, c);

    
}

void giaiPTBac2(double a, double b, double c) {
    int count = 0;

    if (a == 0) {
        if (b == 0 && c == 0) {
            count = -1;
        } 
        else if (b != 0 && c == 0) {
            ++count;

            std::cout << "Phuong trinh co: " << count << " nghiem" << std::endl;
            std::cout << "Phuong trinh co nghiem x: 0" << std::endl;
        }
        else if (b != 0 && c != 0) {
            ++count;
            std::cout << "Phuong trinh co " << count << " nghiem\n";
            std::cout << "Phuong nghiem thuc duy nhat: " << -c / b << std::endl;
        }
    }
    else {
        double delta = b * b - 4 * a * c;

        if (delta == 0) {
            ++count;

            std::cout << "Phuong trinh co " << count << " nghiem" << std::endl;
            std::cout << "Phuong trinh co nghiem thuc duy nhat: " << -b / (2 * a) << std::endl;
        }
        else if (delta > 0) {
            count = 2;

            std::cout << "Phuong trinh co " << count << " nghiem" << std::endl;
            std::cout << "Phuong trinh co nghiem thuc x1: " << (-b + sqrt(delta)) / (2 * a) << std::endl;
            std::cout << "Phuong trinh co nghiem thuc x2: " << (-b - sqrt(delta)) / (2 * a) << std::endl;
        }
        else {
            count = 2;
            delta = -delta;

            std::cout << "Phuong trinh co " << count << " nghiem" << std::endl;
            std::cout << "Phuong trinh co nghiem ao x1: " << (-b) / (2 * a) <<
                "i + " << sqrt(delta) / (2 * a) << std::endl;
            std::cout << "Phuong trinh co nghiem ao x2: " << (-b) / (2 * a) <<
                "i - " << sqrt(delta) / (2 * a) << std::endl;
        }
    }

    if (count == -1) {
        std::cout << "Phuong trinh vo so nghiem" << std::endl;
    }
    else if (count == 0) {
        std::cout << "Phuong trinh co so nghiem: " << count << std::endl;
        std::cout << "Phuong trinh vo nghiem" << std::endl;
    }
}