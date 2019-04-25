#include "memory_leak.h"

int main() 
{
	memory_leak(); //Leaked a little bit of memory

	while (true)
	{
		memory_leak(); //Leaked a lot of memory
	}
	
	return 0;
}