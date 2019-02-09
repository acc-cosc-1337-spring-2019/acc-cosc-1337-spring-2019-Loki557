#include <iostream>
using std::cout;
int main() 
{
	int num = 5;
	
	//show the memory adress for the variable
	cout << "Address: " << &num << "\n";
	cout << "Value: " << num;
	return 0;
}