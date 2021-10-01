#include<iostream>

bool checkEven(long edge[]) {
    if(edge[0] == edge[1] && edge[0] == edge[2])
        return 1;
    return 0;
}

bool checkIsosceles(long edge[]) {
    if(edge[0] == edge[1] || edge[0] == edge[2] || edge[1] == edge[2])
        return 1;
    return 0;
}
bool checkSquace(long edge[]) {
    if(edge[0] == (edge[1] + edge[2]))
        return 1;
    else if(edge[1] == (edge[0] + edge[2]))
        return 1;
    else if(edge[2] == (edge[1] + edge[0]))
        return 1;
    return 0;

}
int main() {
    long edge[3];
    bool check = true;
    std::cout << "Nhap lan luot 3 binh phuong canh tam giac: ";
    std::cin >> edge[0] >> edge[1] >> edge[2];
    std::cout << "Tam giac vua nhap: ";
    if(checkIsosceles(edge)) {
        if(checkEven(edge))
            std::cout << "tam giac deu ";
        else 
            std::cout << "tam giac can ";
        check = false;
    }
    if(checkSquace(edge)) {
        std::cout << "tam giac vuong";
        check = false;
    }
    if(check == true) {
        std::cout << "tam giac thuong";
    }
    return 0;
}