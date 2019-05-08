//
#include "arr_functions.h"
using std::cout;
void iterate_array(int * ints, int SIZE)
{

	for (int i = 0; i < SIZE; i++)
	{
		cout << *ints << std::endl;
		ints++;
	}

}

