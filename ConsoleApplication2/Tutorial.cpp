#include "Tutorial.h"
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <sstream>

using namespace std;

bool Tutorial::StringstreamsTutorial::shouldFailWhenChangingStringToDecimal() {
	string inputText = "dd 1.34343";
	stringstream ss;
	double number = 0;
	bool failed = false;
	ss.str(inputText);

	while (ss >> number || !ss.eof()) {
		if (ss.fail()) {
			failed = true;
			ss.clear();
			string output;
			ss >> output;
			continue;
		}
	}

	cout << "error occured? " << ((failed == true) ? "yes" : "no") << endl;
	cout << "Conversion of string to double: " << number << endl;
	return failed;
}

bool Tutorial::StringstreamsTutorial::shouldChangeStringToDecimal() {
	string inputText = "1.07";
	double number = 0;
	stringstream(inputText) >> number;
	bool changed = (number == 1.07);
	cout << "error occured? " << (changed ? "yes" : "no") << endl;
	cout << "Conversion of string to double: " << number << endl;
	return changed;
}
