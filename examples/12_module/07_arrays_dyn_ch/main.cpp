#include <iostream>
using std::cout;
int main()
{
	char* name = new char[10];//allocate
	cout << "Enter Name: ";
	std::cin.getline(name, 10);//automatically adds null terminater "\0"
	cout << "\n" <<name;

	delete[] name;//deallocates memory
	name = nullptr;
	return 0;
}