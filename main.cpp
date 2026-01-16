#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
    
	//age in years
    int age;
	cout << "Enter your age: ";
	cin >> age;
	
	//height in meters
	double height;
	cout << "Enter your height";
	cin >> height;


	// ride requirements

	// minimum age
	const int minAge = 8;

	// minimum height in cm
	const double minHeight = 1.25;



	//check if user meets requirements to ride

	if (age >= minAge && (height * 100) >= minHeight) 
		std::cout << "Your are old enough and tall enough to ride" << endl;

	else if (age < minAge && (height * 100) < minHeight) 
		std::cout << "Sorry, you are neither old enough nor tall enough to ride." << endl;

	// age is the only condition not met
	else if (age < minAge)
		std::cout << "You are too young to ride." << endl;

	// height is the only condition not met
	else if ((height * 100) < minHeight)
		std::cout << "You are not tall enough to ride." << endl;

    return 0;
}