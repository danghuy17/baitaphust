#include<iostream>


int viTri(std::string s, char c) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == c) {
            return i;
        }
    }
}

bool checkInChar(char c, std::string s) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == c) {
            return false;
        }
    }

    return true;
}

std::string Charector(int* tanSuat, int& n, std::string s) {
    std::string char_in_s = "";

    for (int i = 0; s[i] != '\0'; ++i) {
        if (checkInChar(s[i], char_in_s)) {
            char_in_s += s[i];
            *(tanSuat + n) = 1;
            ++n;
        }
        else {
            *(tanSuat + viTri(char_in_s, s[i])) += 1;
        }
        
    }

    return char_in_s;
}

void bai17() {
    std::string s = "aaabbbcccc13224234213";
    int tanSuat[100];
    int n = 0;

    std::string s1 = Charector(tanSuat, n, s);

    for (int i = 0; i < n; ++i) {
        std::cout << s1[i] << '\t' << tanSuat[i] << std::endl;
    }
}
