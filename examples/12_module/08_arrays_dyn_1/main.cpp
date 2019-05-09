#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include <iostream>

using std::cout;
int main()
{
	//stack/static array of objects
	BankAccount accounts[5];
	//read data file or database
	//initialize the balances

	for (auto account : accounts)
	{
		cout << account.get_balance() << "\n";
	}

	BankAccount accounts1[] = { BankAccount(5), BankAccount(10), BankAccount(50), BankAccount(100) };



	return 0;
}