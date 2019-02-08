//write include statement for switch header
#include <iostream>
#include <string>
#include "switch.h"

using std::string;
using std::cout;
//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
string menu_option(int choice);
{
	switch (choice)
	{
	case 1:
		cout << "Option 1";
		break;
	
	case 2:
		cout << "Option 2";
		break;

	case 3:
		cout << "Option 3";
		break;
	
	case 4:
		cout << "Option 4";
		break;
	}

}
