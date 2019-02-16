#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
#include <vector>

using std::vector;
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Write a test case for get_max_from_vector with values:
vector values 3,8,1,99,1000 returns 1000
vector values 15,12,11,99,88 returns 99
vector values 150,120,11,990,88888 returns 88888
*/
TEST_CASE("Testing for get_max_from_vector")
{
	vector<int> test1 = {3, 8, 1, 99, 1000 };
	vector<int> test2 = {15, 12, 11, 99, 88 };
	vector<int> test3 = {150, 120, 11, 990, 88888 };
	REQUIRE(get_max_from_vector(test1) == 1000);
	REQUIRE(get_max_from_vector(test2) == 99);
	REQUIRE(get_max_from_vector(test3) == 88888);
}

/*
Write a test case for is_prime with values:
2 returns true
4 returns false
43 returns true
44 returns false
*/
TEST_CASE("Testing for is_prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(42) == false);
}

/*
Write test case for vector_of_primes here with
argument 10 return vector should have the following items:
2 3 5 7
argument 50 return vector should have the following items:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*/
TEST_CASE("Testing for vector_of_primes")
{
	vector<int> test1 = {2, 3, 5, 7 };
	vector<int> test2 = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	vector<int> vec1 = vector_of_primes(10);
	for (int i = 0; i < vec1.size(); ++i)
		REQUIRE(vec1[1] == test1[1]);

	vector<int> vec2 = vector_of_primes(50);
	for (int i = 0; i < vec2.size(); ++i)
		REQUIRE(vec2[i] == test2[i]);
}