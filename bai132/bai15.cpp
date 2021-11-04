#include<iostream>

std::string lowerToUpper(std::string s) {
    std::string upper = "";

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            upper += s[i] - ' ';
            continue;
        }
        upper += s[i];
    }

    return upper;
}

void bai15() {
    std::string s = "bui dang huy";
    std::cout << "IN HOA: " << lowerToUpper(s) << std::endl;
}
