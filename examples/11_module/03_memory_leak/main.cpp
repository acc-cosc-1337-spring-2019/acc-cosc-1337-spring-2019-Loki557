#include <iostream>

int main() 
{
		//Allocate
		int * ptr_num = new int(5);
		
		//Use
		std::cout << *ptr_num;

		/*more lines of code
		more lines of code
		more lines of code
		program continues*/
		
		//ptr_num not released, causing a memory leak


		return 0;

	}
}