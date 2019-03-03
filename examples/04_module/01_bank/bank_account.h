//Header Guard
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

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

private:
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};

//Header Guard Cont.
# endif // !BANK_ACCOUNT_H