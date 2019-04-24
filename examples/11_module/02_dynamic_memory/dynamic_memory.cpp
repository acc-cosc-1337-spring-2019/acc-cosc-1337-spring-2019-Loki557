//
#include "dynamic_memory.h"
#include <iostream>
void  allocate_use_release()
{
	int stack_num{ 5 }; //stack variable
	
	//Allocate Dynamic Memory 
	int* num = new int(5); //heap, data variable /the keyword "new" makes it use dynamic memory

	//Use
	std::cout << *num;

	//Delete
	delete num;
}