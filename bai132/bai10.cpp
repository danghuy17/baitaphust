#include<iostream>


std::string doiXau(std::string& s) {
    std::string s1 = "";

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            s1 += s[i];
        }
    }

    return s1;
}


void bai10() {
    std::string s = "123a4bc56";

    std::cout << doiXau(s) << std::endl;
}
