#include <iostream>
#include <string>

// Homework 3 - Andy Munoz
// CIS 5 Week 03 - Types and Variables

int main() {
	const int CURRENT_YEAR = 2026;
	std::string name = "Andy Munoz";
	int age = 19;
	double height = 1.72;
	char initial = 'A';
	bool student = true;
	int credits = 14;
	double gpa = 3.22;


	std::cout << "Name: " << name << "\nAge: " << age << "\nHeight(m) : " << height << "\nInitial : " << initial << "\nStudent : " << student << "\nYear : "
		<< CURRENT_YEAR << "\nCredits: " << credits << "\nGPA: " << gpa;

	// Changed height from 1.75 to 1.72, cout adjusted accordingly because the value for height is pulled from that defined integer.
	// age = 19.2 would not compile because int only accepts whole integers, it would ignore the decimal.
	// char = "A" would not compile because char requires single quotation marks. "" is for a string type.
	return 0;
}
