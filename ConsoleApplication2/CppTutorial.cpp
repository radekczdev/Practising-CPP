#include <iostream>
#include <string>
#include <sstream>
#include "Tutorial.h"

using namespace std;

string shouldReturnIsSmaller() {
	int a = 2;
	int b = 7;
	return a < b ? "is Smaller" : "is Bigger";
}

void clearInputStream() {
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

void shouldPrintOneWordFromInputString() {
	string name;
	cout << "What is your forname and surname? ";
	cin >> name;
	cout << name << endl;
	clearInputStream();
}

void shouldPrintAllWordsFromInputString() {
	string name;
	cout << "What is your forname and surname? ";
	getline(cin, name);
	cout << name << endl;
}

void rangeBasedLoop() {
	string str = "Hello!";
	for (char c : str) {
		cout << "[" << c << "]";
	}
	cout << endl;
}

void rangeBasedLoopWithAuto() {
	string str = "Hello Auto Typing!";
	for (auto c : str) {
		cout << "[" << c << "]";
	}
	cout << endl;
}

void pasingByReferenceTest(int &a, int &b, int &c) {
	a *= 2;
	b *= 2;
	c *= 2;
}

string creatingNewObjectWithoutCopyingComponents(const string &text1, const string &text2) {
	return text1 + text2;
}

string defaultParameterValue(string a, string b = "default") {
	return "This function got " + a + " parameter(s). It is " + b + " value";
}

long factorial(long number) {
	if (number < 0) {
		throw invalid_argument("ERROR: Number must be >= 0");
	} else if(number < 2) {
		return number;
	}
	return number * factorial(number-1);
}

int main() {
//	//cout << shouldReturnIsSmaller() << endl;
//	//shouldPrintOneWordFromInputString();
//	//shouldPrintAllWordsFromInputString();
	//int x = 2, y = 4, z = 8;
	//pasingByReferenceTest(x, y, z);
	//cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
	//rangeBasedLoop();
	//rangeBasedLoopWithAuto();

	//cout << "result of adding two strings: " << creatingNewObjectWithoutCopyingComponents("Text1", "Text2") << endl;

	//cout << defaultParameterValue("one") << endl;
	//cout << defaultParameterValue("two", "custom") << endl;

	cout << "Testing recurrency. Result for factorial of: " << endl;
	try {
		for (int i = 9; i > -2; i--) {
			cout << i << ": " << factorial(i) << endl;
		}
	} catch (exception& e) {
		cout << e.what() << endl;
	};
	return 0;
}
