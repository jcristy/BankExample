#include "Account.h"

Account::Account(double initial_balance, Person owner)
{
	balance = initial_balance;
	this->owner = owner;
	account_number = account_number_count++;
}

void Account::applyInterest()
{
	//TODO
}

void Account::changeInterestRate(double newRate)
{
	interestRate = newRate;
}

void Account::deposit(double deposit)
{
	balance += deposit;
}

bool Account::withdrawal(double amount)
{
	if (balance<amount)
		return false;
	else
	{
		balance = balance - amount;
		return true;
	}
}

long Account::getAccountNumber()
{
	return account_number;
}

double Account::getBalance()
{
	return balance;
}

double Account::getInterestRate()
{
	return interestRate;
}