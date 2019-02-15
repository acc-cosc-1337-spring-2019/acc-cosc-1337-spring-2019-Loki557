#include "sequence.h"
#include <vector>
#include <iostream>
#include <string>

using std::vector;
using std::cout;
using std::string;

/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/
void display_vector(const vector<string>& names)
{
	for (auto n : names)
		cout << n << "\n";
}

/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
void update_vector_element(vector<string>& names, string search_value, string replace_value)
{
	//In order to modify 'n' in auto it needs to be a reference 
	for (auto& n : names)
	{
		if (n == search_value)
		{
			n = replace_value;
		}
			
	}
}
