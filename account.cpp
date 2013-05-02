#include "Account.h"

//
long Account::account_number_count=10000;//The first created account should be # 10000
double Account::interestRate = .05;//The interest rate is 5% at the bank of imaginary dollars

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