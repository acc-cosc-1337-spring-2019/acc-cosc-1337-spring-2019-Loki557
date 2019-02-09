#include <iostream>
#include <string>
#include "dna.h"

using std::cout;
using std::cin;
using std::string;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna_strand;
	int choice;
	char quit;

	do
	{
		cout << "Welcome, please enter a DNA strand (ex. \"AGCTATAG\"): ";
		cin >> dna_strand;
		cout << "\nTo find the GC conent enter \"1\" and to find the DNA complement enter \"2\": ";
		cin >> choice;

		if (choice == 1)
		{ 
			double gc_content = get_gc_content(dna_strand);
			cout << "\nThe GC content of the DNA strand \"" << dna_strand << "\" is: " << gc_content;
		}
			

		else if (choice == 2)
		{
			//testing
			//string rev_dna = get_reverse_string(dna_strand);
			//cout << "\n" << rev_dna;
			string comp_dna = get_dna_complement(dna_strand);
			cout << "\nThe complement DNA strand for the DNA strand \"" << dna_strand << "\" is: " << comp_dna;
		}

		else
			cout << "\n Invalid Entry";
		
		cout << "\n\nDo you wish to run program again(y/n): ";
		cin >> quit;
	} while (quit == 'y' || quit == 'Y');
	return 0;
}