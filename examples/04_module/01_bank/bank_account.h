//Header Guard
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>


class BankAccount
{
public:
	//Default Constructor, if no constructor is present it would create this constructor behind the scenes
	//BankAccount() {}
	//BankAccount() = default;
	
	BankAccount(int act, double bal);
	double get_balance() const;
	void deposit(double amount);
	void deposit(double amount, int pin);
	void withdraw(double amount);
	friend void display(const BankAccount& act);
	friend BankAccount operator +(BankAccount & act1, const BankAccount & act2);
	friend std::ostream & operator << (std::ostream & out, const BankAccount & b);

private:
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};

//Header Guard Cont.
# endif // !BANK_ACCOUNT_H