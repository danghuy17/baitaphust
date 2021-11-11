#include<iostream>


void frequenceOfStr(const char* s, int* frequenceChar, char* charector, int* n) {
	*charector = *s;
	*frequenceChar = 0;
	++* n;
	for (int i = 0; *(s + i) != '\0'; ++i) {
		for (int j = 0; j < *n; ++j) {
			if (*(charector + j) == *(s + i)) {
				++* (frequenceChar + j);
				break;
			}
			if (j == *n - 1) {
				*(frequenceChar + *n) = 0;
				*(charector + (*n)++) = *(s + i);
			}
		}
	}
}

void print(const char* charector, const int* frequenceChar, int* n) {
	for (int i = 0; i < *n; ++i) {
		std::cout << *(charector + i) << '\t' << *(frequenceChar + i) << std::endl;
	}
}

int main() {
	char s[100];
	int frequenceChar[100];
	char charector[100];
	int n = 0;

	std::cin.getline(s, 100);

	frequenceOfStr(s, frequenceChar, charector, &n);
	print(charector, frequenceChar, &n);

	return 0;
}