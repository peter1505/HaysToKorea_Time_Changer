// HaysToKorea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {	
	char userInput;
	do {
		int day, time, month, minute;
		cout << "Please type your date, month, time (in 24 hour scale), and minute in Hays" << endl;
		cin >> day >> month >> time >> minute;
		time += 14;
		if (time > 24) {
			time = time - 24;
			day++;
		}
		if (day > 31) {
			month++;
			if (month > 12) {
				month = month - 12;
			}
		}
		cout << "The time in Korea is " << month << " (month) " << day << " (day) " << time << " (time) " << minute <<  " (minute) "<< endl;
		cout << "Do you want to try another time set? (Y or N)" << endl;
		cin >> userInput;
	} while ((userInput == 'Y') || (userInput == 'y')); 



	system("pause");
    return 0;
}

