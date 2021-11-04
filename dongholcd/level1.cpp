#include<iostream>
#include<windows.h>
#include<iomanip>
#


int maxDay(int& day, int& month, int& year, int maxday) {
	++day;

	if (day == maxday) {
		day = 1;

		++month;

		if (month == 12) {
			month = 1;

			++year;
		}
	}

	return 0;
}

int settingHour(int& second, int& minutes, int& hour) {
	++second;

	if (second == 60) {
		second = 0;

		++minutes;

		if (minutes == 60) {
			minutes = 0;

			++hour;

			if (hour == 24) {
				hour = 0;
			}
		}
	}

	return 0;
}

int settingDay(int& day, int& month, int& year) {

	switch (month) {
	case 4:
	case 6:
	case 9:
	case 11:
	{
		maxDay(day, month, year, 30);
		
		break;
	}

	case 2:
	{
		if (((year & 3) == 0 && year % 100 != 0) || year % 400 == 0) {
			maxDay(day, month, year, 29);
			break;
		}

		maxDay(day, month, year, 28);
	}
	
	default: {
		maxDay(day, month, year, 31);
	}
	}
	return 0;
}



int level1() {
	int day = 1, month = 1, year = 1;
	int second = 0, minutes = 0, hour = 0;

	while (1) {

		std::cout << std::setfill('0') << std::setw(2) << day << '/';
		std::cout << std::setw(2) << month << '/';
		std::cout << std::setw(4) << year << '\t';
		std::cout << std::setw(2) << hour << ':';
		std::cout << std::setw(2) << minutes << ':';
		std::cout << std::setw(2) << second << std::endl;

		Sleep(1);

		settingHour(second, minutes, hour);

		if (hour == 0 && minutes == 0 && second == 0) {
			settingDay(day, month, year);
		}
	}

	return 0;
}