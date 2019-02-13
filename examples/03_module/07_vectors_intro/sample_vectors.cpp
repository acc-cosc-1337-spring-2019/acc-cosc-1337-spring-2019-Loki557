#include "sample_vectors.h"
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;

/*
Write code for initialize_vector_of_strings to create a 
vector philosophers and initialize with:

"Kant"
"Plato"
"Hume"
"Kierkegaard"

using the vector function push_back add "Socrates" to vector
Iterate through vector and display strings
*/
void initialize_vector_of_strings()
{
	vector<string> phil_list = { "Kant" , "Plato", "Hume", "Kierkegaard" };
	phil_list.push_back("Socrates");
	//auto for loop
	for (auto& c : phil_list)
	{
		cout << c << "\n";
	}
}

/*
Write code for initialize_vector_strings to create a vector
of numbers with values 5,7,9,4,6,8

using the vector function push_back add the number 1 to vector
Iterate through vector and display int
*/
void initialize_vector_of_ints()
{
	vector<int> nums = { 5 , 7 , 9 , 4 , 6 , 8 };
	nums.push_back(1);
	//standard for loop
	for (int i = 0; i < nums.size(); ++i)
		cout << nums[i] << "\n";
}
