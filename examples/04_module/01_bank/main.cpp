#include "atm.h"
#include "customer.h"
#include <iostream>

int main()
{

	/*
	for(auto tic_tac_toe: list)
	{
		cout << tic_tac_toe<<"\n";

	}
	
	
	*/
	BankAccount account(123, 100);
	

	//copies current data from one instance to another 
	BankAccount copy = account;

	//Will not effect "copy" instance of BankAccount since it is still a different instance
	account.deposit(50);

	Customer customer(account);

	ATM atm(account);
	atm.display_balance();
	display(account);
	BankAccount account2(1, 900);
	BankAccount account3 = account + account2;
	display(account3);
	std::cout << "\n";
	std::cout << account3 << "\n";

	//std::cout << copy.get_balance();

	/*std::vector<BankAccount>accounts;
	BankAccount account(12345689, 500);  //object1
	BankAccount account1(55545689, 5000); //object2
	accounts.push_back(account);
	accounts.push_back(account1);
	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}*/

	return 0;
}