#include "bank_account.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H


class Customer
{
public:
	Customer(BankAccount act) : account(act) {}
	double get_balance() const { return account.get_balance(); }

private:
	BankAccount account;



};






#endif // !CUSTOMER_H