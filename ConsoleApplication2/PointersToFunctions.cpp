#include <iostream>
#include <string>

using namespace std;

int substraction(int a, int b) {
	return a - b;
}

int addition(int a, int b) {
	return a + b;
}

int operation(int a, int b, int (*operationType)(int,int)) {
	int function;
	function = (*operationType)(a, b);
	return function;
}

int main() {
	cout << "Testing pointers to functions" << endl;
	int a = 9, b = 12;
	int sum, sub1, sub2;
	int (*substractionPointer)(int, int) = substraction;

	sum = operation(a, b, addition);
	sub1 = operation(a, b, substraction);
	sub2 = operation(a, b, substractionPointer);

	cout << "Result of adding: " << sum << endl;
	cout << "Result of substracting: " << sub1 << endl;
	cout << "Result of substracting: " << sub2 << endl;
	
}