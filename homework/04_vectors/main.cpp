#include<iostream>
#include<vector>
#include "vectors.h"

using std::vector;
using std::cin;
using std::cout;

/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int choice;
	do
	{
		cout << "Enter \"1\" to get the max number from a vector, \"2\" for a vector of primes, or \"3\" to quit: ";
		cin >> choice;
		if (choice == 1)
		{
			int choice2;
			int entry1;
			vector<int> vec;
			do
			{
				cout << "\nEnter a number to add to a vector: ";
				cin >> entry1;
				vec.push_back(entry1);
				cout << "\n\"" << entry1 << "\" added to the vector.  Do you wish to add another entry, \"1\" for yes, \"2\" for no: ";
				cin >> choice2;
			} while (choice2 != 2);

			int max_num = get_max_from_vector(vec);
			cout << "\nOut of the numbers you entered (";
			for (int i = 0; i < vec.size(); ++i)
				cout << " " << vec[i] << " ";
			cout << ") the max number is: " << max_num << "\n";
			
		}
		else if (choice == 2)
		{
			int entry2;
			cout << "\nEnter a number: ";
			cin >> entry2;
			vector<int> prime_vector = vector_of_primes(entry2);
			cout << "\nPrime Numbers: \n";
			for (int i = 0; i < prime_vector.size(); ++i)
				cout << prime_vector[i] << "\n";
		}
			
	} while (choice != 3);
	
	return 0;
}