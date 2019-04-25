#include "ref_pointers.h"
#include <iostream>
int main() 
{
	int * hold_return_value;
	int num = 5;
	hold_return_value = return_pointer(num);
	/*int number = 10;
	int * numberPtr = &number;
	ref(number, numberPtr);

	//display what value?  It should be 100
	std::cout << "Address of number: " << &number << "\nNumber is: " << number;

	//A pointer can store the address of a variable 
	std::cout << "\n\nAddress of numberPtr itself: " << &numberPtr << "\nvalue stored at address pointed to is: "
		<< numberPtr << "\nDeference numberPtr:" << *numberPtr/*How to dereference a pointer*/;

	return 0;
}