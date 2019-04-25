#include "dangling_pointer.h"

//

void dangling_pointer()
{
	int* ptr = new int(100);
	int* innocent_ptr = ptr;
	delete ptr;
	//other lines of code 
	//if innoncent_ptr is used in the future it will cause problems, like printing gibberish 
}
