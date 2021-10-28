#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<conio.h>
#include<cstring>
#include "./console.cpp"


int day = 1, month = 1, year = 1;
int second = 0, minutes = 0, hour = 0;
int x = 0;

void screen() {
	gotoXY(20, 5);

	std::cout << char(201);

	for (int i = 0; i < 14; ++i) {
		std::cout << char(205);
	}

	std::cout << char(187);

	gotoXY(20, 6);

	std::cout << char(186);

	gotoXY(35, 6);

	std::cout << char(186);

	gotoXY(20, 7);

	std::cout << char(186);

	gotoXY(35, 7);

	std::cout << char(186);

	gotoXY(20, 8);

	std::cout << char(200);

	for (int i = 0; i < 14; ++i) {
		std::cout << char(205);
	}

	std::cout << char(188) << std::endl;


	// ESC de set lai time
	gotoXY(20, 9);

	std::cout << "PRESS ESC TO SETUP";
}

void maxDay1(int maxday) {
	++day;

	if (day > maxday) {
		day = 1;

		++month;

		if (month == 13) {
			month = 1;

			++year;
		}
	}
}

void setDay() {
	switch (month) {
	case 4:
	case 6:
	case 9:
	case 11:
	{
		maxDay1(30);
		break;
	}

	case 2:
	{
		if ((((year & 3) == 0) && (year % 100 != 0)) || year % 400 == 0) {
			maxDay1(29);
			break;
		}
		maxDay1(28);
		break;
	}

	default: {
		maxDay1(31);
		break;
	}
	}
}


void setTime() {
	++x;

	second = x % 60;

	hour = x / 3600;

	minutes = (x - 3600 * hour) / 60;

	if (hour >= 24) {
		x = 0;

		setDay();
	}
}





void printClock() {
	gotoXY(21, 6);

	std::cout << std::setfill('0') << std::setw(2) << day << '/';
	std::cout << std::setw(2) << month << '/';
	std::cout << std::setw(4) << year;

	gotoXY(21, 7);

	std::cout << std::setw(2) << hour << ':';
	std::cout << std::setw(2) << minutes << ':';
	std::cout << std::setw(2) << second;

}

void delSpace() {
	gotoXY(20, 9);

		for (int i = 0; i < 18; ++i) {
			std::cout << ' ';
		}
}

void delSpace3() {
	system("cls");

	screen();

	printClock();
}

void insteadTime2() {
	delSpace();

	gotoXY(20, 9);
	std::cout << "Day: ";
	std::cin >> day;

	delSpace();

	gotoXY(20, 9);
	std::cout << "Month: ";
	std::cin >> month;

	delSpace();

	gotoXY(20, 9);
	std::cout << "Year: ";
	std::cin >> year;

	delSpace();

	gotoXY(20, 9);
	std::cout << "Hour: ";
	std::cin >> hour;

	delSpace();

	gotoXY(20, 9);
	std::cout << "Minute: ";
	std::cin >> minutes;

	delSpace();

	gotoXY(20, 9);
	std::cout << "Second: ";
	std::cin >> second;

	gotoXY(20, 9);

	std::cout << "PRESS ESC TO SETUP";


	x = 3600 * hour + minutes * 60 + second;
}

void level2() {
	screen();

	while (1) {
		printClock();

		setTime();

		Sleep(5);

		if (_kbhit()) {
			char c;

			c = _getch();

			if (c == char(27)) {
				insteadTime2();
			}
		}
	}
}



void insteadTime3() {
	gotoXY(20, 9);

	std::cout << "Enter DATE(y,m,d) or TIME(h,m,s)";

	gotoXY(20, 10);

	char s[5];
	char date[] = "DATE";
	char time[] = "TIME";
	bool a = true, b = true;


	gotoXY(20, 10);


	std::cin.ignore(1);

	std::cin.getline(s, 5, '(');

	for (int i = 0; i < 4; ++i) {
		if (s[i] != date[i]) {
			a = false;
		}
		
		if (s[i] != time[i]) {
			b = false;
		}
	}

	//std::cin.ignore();

	if (a) {
		std::cin >> year;
		std::cin.ignore(1);

		std::cin >> month;
		std::cin.ignore(1);

		std::cin >> day;
	}

	if (b) {
		
		std::cin >> hour;
		std::cin.ignore(1);

		std::cin >> minutes;
		std::cin.ignore(1);

		std::cin >> second;

		gotoXY(0, 0);
		
	}
	
	std::cin.ignore(1);

	x = hour * 3600 + 60 * minutes + second;

	delSpace3();
}

void level3() {	
	screen();

	while (1) {
		printClock();

		setTime();

		Sleep(5);

		if (_kbhit()) {
			char c;
			
			c = _getch();

			if (c == char(27)) {
				insteadTime3();
			}
		}
	}


}
