#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test the factorial function")
{
	REQUIRE(factorials(3) == 6);
	REQUIRE(factorials(4) == 24);
	REQUIRE(factorials(5) == 120);
}
/*
Write a test case for function factorial with values:
factorial of 3 returns   6
factorial of 4 returns  24
factorial if 5 returns 120
*/
