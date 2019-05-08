#include <iostream>

int main() 
{
	const int SIZE = 5;
	int  hours[SIZE] = { 5, 10, 15, 20, 25 };
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}
	return 0;
}