#include "report.h"
#include <iostream>

Report::Report()
{
	//read from file or database
	for (int i = 0; i < 5; ++i)
	{
		account[i] = new BankAccount(i * 100);
	}
}

Report::~Report()
{
	for (int = 0; i < 5; ++i)
	{
		delete account[i];
		accounts[i] = nullptr;
	}
}


void Report::display()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}