#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "destructor.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function reference parameter") {
	int number = 10;
	int* numberPtr = &number;
	ref(number, numberPtr);
	REQUIRE(number == 1000);
}

TEST_CASE("Test class copy") {
	Destructor a(10);
	Destructor b = a;

	REQUIRE(a.get_value() == 10);
	REQUIRE(b.get_value() == 10);
	
	a.set_value(5);

	REQUIRE(a.get_value() == 5);
	REQUIRE(b.get_value() == 10);
}

TEST_CASE("Test class copy dyanamic private data") {
	Destructor a(10);
	Destructor b = a;
	int * ptr1 = a.get_ptr_num();
	int * ptr2 = b.get_ptr_num();
	REQUIRE(*ptr1 == 10);
	REQUIRE(*ptr2 == 10);

	a.set_ptr_num(100);

	REQUIRE(*ptr1 == 100);
	REQUIRE(*ptr2 == 100);
}