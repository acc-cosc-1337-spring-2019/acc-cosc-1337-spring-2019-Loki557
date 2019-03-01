#include "customer.h"

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
	//ATM() : customer(1, 5) {} // How to initialize an instance
	ATM(Customer c) : customer(c) {}
	void display_balance();

private:
	Customer customer;
};

#endif // !ATM_H
