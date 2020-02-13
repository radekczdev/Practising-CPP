#include <iostream>
#include <new>
#include <vld.h>
using namespace std;

int function1() {
	int i, n;
	int *p;

	cout << "How many numbers would you like to type?";
	cin >> i;
	p = new int[i];
	if (p == nullptr) {
		cout << "Error: Memory could not be allocated";
	} else {
		for (n = 0; n < i; n++) {
			cout << "Enter number: ";
			cin >> p[n];
		}
		cout << "You have entered: ";
		for (n = 0; n < i; n++) {
			cout << p[n] << ", ";
		}
		delete[] p;
	}
	return 0;
}