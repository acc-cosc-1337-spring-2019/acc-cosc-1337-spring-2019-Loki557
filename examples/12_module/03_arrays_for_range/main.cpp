#include <iostream>

int main()
{
	const int SIZE = 5;
	int  hours[SIZE] = { 5, 10, 15, 20, 25 };
	//When accessed this way, it creates a copy so it is not modifiable
	for (auto hour : hours)
	{
		std::cout << hour << "\n";
	}
	int i = 1;
	for (auto & hour : hours)
	{
		std::cout << hour << "\n";
		hour = i++;
	}
	for (auto hour : hours)
	{
		std::cout << hour << "\n";
	}
	return 0;
}