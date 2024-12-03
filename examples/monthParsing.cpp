#include <iostream>
#include <string>

using namespace std;

int GetMonthAsInt(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	
	string line;
	string month;
	int monthInt;
	string day;
	
	cout << "Input a date (ex. January 2, 2022), or -1 to exit: " ;
	getline(cin, line);

	while (line != "-1") {
		
		if (line.find(",") != string::npos) {
			month = line.substr(0, line.find(" "));
			line.erase(0, line.find(" ") + 1);
			monthInt = GetMonthAsInt(month);
			day = line.substr(0, line.find(","));
			line.erase(0, line.find(",") + 2);
			cout << monthInt << "-" << day << "-" << line << endl;
		}
		cout << "Input the name of a month, or -1 to exit: " ;
		getline(cin, line);
	}
}
