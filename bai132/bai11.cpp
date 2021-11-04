#include<iostream>
#include<cctype>

std::string chuanHoa(std::string fullName) {
    std::string new_name = fullName;
    bool firstChar = true;

    for (int i = 0; fullName[i] != '\0'; ++i) {
        new_name[i] = tolower(new_name[i]);

        if (firstChar == true) {
            new_name[i] = new_name[i] - ' ';
            firstChar = false;
        }
        if (new_name[i] == ' ' ) {
            firstChar = true;
        }
    }

    return new_name;
}

void bai11() {
    std::string fullName = "bui dang huy";

    std::cout << "Ten da chuan Hoa: " << chuanHoa(fullName) << std:: endl;
}
