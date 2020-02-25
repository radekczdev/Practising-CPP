#include <iostream>
#include <string>
using namespace std;

// Overloading functions
int operation(int a, int b) {
	return a + b;
}

double operation(double a, double b) {
	return a / b;
}


// Templates
//template <class U>
//bool isGreaterThanZero(U number, string &result) {
//	bool isGreater = number > 0;// ? true : false;
//	switch (isGreater) {
//		result += number;
//	case true:
//		result += " is greater than 0";
//		break;
//	case false:
//		result = number + " is not greater than 0";
//	}
//	return isGreater;
//}

//int main() {

	

	//cout << "result of operation on ints: " << operation(x, y) << endl;
	//cout << "result of operation on doubles: " << operation(a, b) << endl;

	//string result = "";

	//cout << "testing template 1: " << isGreaterThanZero(y, result) << endl;
	//cout << "testing template 2: " << isGreaterThanZero(b, result) << endl;
	//cout << "testing template 3: " << isGreaterThanZero(x, result) << endl;
	//cout << "testing template 4: " << isGreaterThanZero(a, result) << endl;

//	return 0;
//}