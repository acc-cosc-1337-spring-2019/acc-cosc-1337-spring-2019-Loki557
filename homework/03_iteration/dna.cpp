#include <string>
#include <iostream>
#include "dna.h"

using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna_strand)
{
	int num = dna_strand.length();
	double gc = 0;
	//int at = 0;
	//testing
	//std::cout << num;
	for (int i = 0; i <= num; ++i)
	{
		if (dna_strand[i] == 'g' || dna_strand[i] == 'G' || dna_strand[i] == 'c' || dna_strand[i] == 'C')
			gc++;
		//else
			//at++;
	}
	
	//double gc_content = gc / num;
	//testing
	//std::cout << "\n" << gc << "\n"<< dna_strand.length() << "\n" <<gc_content;

	return gc / num;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna_strand)
{
	int num = dna_strand.length();
	int num2 = dna_strand.length() - 1;
	string rev_dna = dna_strand;
	for (int i = 0; i < num; ++i)
	{
		rev_dna[num2] = dna_strand[i];
		num2--;
		
	}


	return rev_dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna_strand)
{
	string rev_dna = get_reverse_string(dna_strand);
	int num = rev_dna.length();
	string comp_dna = rev_dna;
	for (int i = 0; i <= num; ++i)
	{

		if (rev_dna[i] == 'A' || rev_dna[i] == 'a')
			comp_dna[i] = 'T';
		else if (rev_dna[i] == 'T' || rev_dna[i] == 't')
			comp_dna[i] = 'A';
		else if (rev_dna[i] == 'G' || rev_dna[i] == 'g')
			comp_dna[i] = 'C';
		else if (rev_dna[i] == 'C' || rev_dna[i] == 'c')
			comp_dna[i] = 'G';


	}
	return comp_dna;
}
