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
}

void rangeBasedLoopWithAuto() {
	string str = "Hello Auto Typing!";
	for (auto c : str) {
		cout << "[" << c << "]";
	}
}

int main() {
//	//cout << shouldReturnIsSmaller() << endl;
//	//shouldPrintOneWordFromInputString();
//	//shouldPrintAllWordsFromInputString();
	rangeBasedLoop();
	rangeBasedLoopWithAuto();
	return 0;
}
