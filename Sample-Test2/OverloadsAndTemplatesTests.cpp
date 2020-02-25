#include "pch.h"
#include <iostream>
#include "..\ConsoleApplication2\OverloadsAndTemplates.cpp"

TEST(ShouldUseOverloadForIntegers, addIntegers) {
	int x = 1, y = -5;
	EXPECT_EQ(operation(x, y), -4);
}

TEST(ShouldUseOverloadForDoubles, extractDoubles) {
	double a = 2.3, b = -2.0;
	EXPECT_EQ(operation(a, b), 2.3 / -2.0);
}

TEST(ShouldUseTemplates, IntIsGreaterThanZero) {
	int number = 1;
	string expectedResult = "1 is greater than 0";
	string result = "";
	isGreaterThanZero(number, result);
	ASSERT_EQ(expectedResult, result);
}

TEST(ShouldUseTemplates, IntIsLowerThanZero) {
	int number = -5;
	string expectedResult = "-5 is not greater than 0";
	string result = "";
	isGreaterThanZero(number, result);
	ASSERT_EQ(expectedResult, result);
}

TEST(ShouldUseTemplates, DoubleIsGreaterThanZero) {
	double number = 1.5;
	string expectedResult = "1.5 is greater than 0";
	string result = "";
	isGreaterThanZero(number, result);
	ASSERT_EQ(expectedResult, result);
}

TEST(ShouldUseTemplates, DoubleIsNotGreaterThanZero) {
	double number = -5.2922;
	string expectedResult = "-5.3 is not greater than 0";
	string result = "";
	isGreaterThanZero(number, result);
	ASSERT_EQ(expectedResult, result);
}
