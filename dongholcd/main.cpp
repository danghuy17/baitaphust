#include<iostream>

#include "./level1.cpp"
#include "./level2.cpp"


//TIME(10,10,10)
int main() {
	
	short choose;

	std::cout << "Enter program level (1 - 3): ";
	std::cin >> choose;

	if (choose == 1) {
		system("cls");

		level1();
	}
	else if (choose == 2) {
		system("cls");

		level2();
	}
	else if (choose == 3) {
		system("cls");

		level3();
	}
	
	return 0;
}


