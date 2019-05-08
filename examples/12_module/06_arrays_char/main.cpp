#include <iostream>

using std::cout;
int main()
{
	char name0[] = "John";
	cout << name0 << std::endl;

	for (int i = 0; name0[i] != '\0'; ++i)
	{
		cout << name0[i];
	}

	char name1[5] = "Mary";
	name1[4] = '\0';
	cout << name1 << std::endl;

	for (int i = 0; name1[i] != '\0'; i++)
	{
		cout << name1[i];
	}

	cout << std::endl;
	return 0;
}