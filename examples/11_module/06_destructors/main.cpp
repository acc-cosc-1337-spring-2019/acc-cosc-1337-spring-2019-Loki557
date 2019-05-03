#include "destructor.h"
Destructor create_class();

int main() 
{
	Destructor d(10);
	Destructor c(5);

	Destructor a = d; // create a class copy; copy constructor executes
	Destructor b(d); //execute copy constructor

	c = d;//executes copy assignment 
	d.set_value(5);

	a.set_ptr_num(100);
	
	
	int x = 5;
	int&y = x;
	int* z = &x;


	return 0;
}

Destructor create_class()
{
	return Destructor (5);
}