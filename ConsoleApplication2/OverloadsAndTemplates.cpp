#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Overloading functions
int operation(int a, int b) {
	return a + b;
}

double operation(double a, double b) {
	return a / b;
}

template <class U>
bool isGreaterThanZero(U number, string &result) {
	stringstream stringStream;
	stringStream.precision(2);
	stringStream << number;
	bool isGreater = number > 0 ? true : false;
	switch (isGreater) {
		case true:
			stringStream << " is greater than 0";
			break;
		case false:
			stringStream << " is not greater than 0";
	}
	result = stringStream.str();
	return isGreater;
}