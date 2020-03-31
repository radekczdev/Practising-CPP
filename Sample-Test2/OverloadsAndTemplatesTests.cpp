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
	isGreaterThanZero<double>(number, result);
	ASSERT_EQ(expectedResult, result);
}

TEST(ShouldUseTemplates, DoubleIsNotGreaterThanZero) {
	double number = -5.2922;
	string expectedResult = "-5.3 is not greater than 0";
	string result = "";
	isGreaterThanZero(number, result);
	ASSERT_EQ(expectedResult, result);
}

TEST(ShouldUseTemplates, ShouldReturnFalseUsingFunctionTemplateArgument) {
	bool expectedResult = false;
	bool result;
	result = decide<bool, 555>();
	ASSERT_EQ(expectedResult, result);
}
TEST(ShouldUseTemplates, ShouldReturn0UsingFunctionTemplateArgument) {
	int expectedResult = 0;
	int result;
	result = decide<int, 555>();
	ASSERT_EQ(expectedResult, result);
}
TEST(ShouldUseTemplates, ShouldReturnTrueUsingFunctionTemplateArgument) {
	bool expectedResult = true;
	bool result;
	result = decide<bool, 1>();
	ASSERT_EQ(expectedResult, result);
}
TEST(ShouldUseTemplates, ShouldReturn1UsingFunctionTemplateArgument) {
	int expectedResult = 1;
	int result;
	result = decide<int, 1>();
	ASSERT_EQ(expectedResult, result);
}
