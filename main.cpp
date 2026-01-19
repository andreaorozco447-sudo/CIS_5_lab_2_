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

	// minimum height in meters
	const double minHeight = 1.25;



	//check if user meets requirements to ride

	if (age >= minAge && height >= minHeight)
		cout << "You are old enough and tall enough to ride." << endl;

	else if (age < minAge && height < minHeight)
		cout << "Sorry, you are neither old enough nor tall enough to ride." << endl;

	else if (age < minAge)
		cout << "You are too young to ride." << endl;

	else
		cout << "You are not tall enough to ride." << endl;


    return 0;
}