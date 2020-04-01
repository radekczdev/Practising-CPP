#include "pch.h"
#include <iostream>
#include "..\ConsoleApplication2\Tutorial.cpp"
#include "..\WorkTesting\Functions.cpp"
#include "..\WorkTesting\Time.cpp"

using namespace std;
using namespace Tutorial;

TEST(TestingStringstream, ShouldFailWhenChangingStringToDecimal) {
	EXPECT_EQ(StringstreamsTutorial::shouldFailWhenChangingStringToDecimal(), true);
}

TEST(TestingStringstream, ShouldChangeStringToDecimal) {
	EXPECT_EQ(StringstreamsTutorial::shouldChangeStringToDecimal(), true);
}

TEST(TestingWorkFunctions, ShouldReturnTrue) {
	string inventorType = "PRT_MEM";
	EXPECT_EQ(checkIfItemIsAMember(inventorType), true);
}

TEST(TestingTime, ShouldReturnCurrentTime) {
	string expected = "";
	string result = getCurrentTime();
	EXPECT_EQ(expected, result);
}