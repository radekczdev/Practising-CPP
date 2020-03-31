#include "pch.h"
#include <iostream>
#include "..\ConsoleApplication2\Tutorial.cpp"
#include "..\WorkTesting\Functions.cpp"

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