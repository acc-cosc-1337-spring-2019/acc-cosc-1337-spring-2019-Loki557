#include "loops.h"
/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int factorials(int num)
{
	int solution = 1;
	for (int i = 1; i <= num; ++i)
	{
		solution *= i;
	}
	return solution;
}
