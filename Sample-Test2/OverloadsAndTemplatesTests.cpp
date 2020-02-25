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
