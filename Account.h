#include "Person.h"

class Account
{
		private:
			///<summary>The amount of money in the account, should be 0</summary>
			double balance;
			///<summary>The owner of the account</summary>
			Person owner;
			///<summary>The account number</summary>
			long account_number;
			///<summary>The interest rate for all accounts</summary>
			static double interestRate;
			///<summary>A count of account numbers to make sure no two accounts have the same account number</summary>
			static long account_number_count;
		public:
			///<summary>Creates a new account with the specified initial balance, specified owner</summary>
			///<param name="balance"> Opening balance</param>
			///<param name="owner"> The owner of the account</param>
			Account(double initial_balance, Person owner);
			
			///<summary>Attempts to withdrawal</summary>
			///<param name="amount">The amount to withdrawal</param>
			///<returns>if the user has the specified funds and the withdrawal was a success</returns>
			bool withdrawal(double amount);
			void deposit(double amount);
			double getBalance();
			void applyInterest();
			long getAccountNumber();
			static void changeInterestRate();
			static double getInterestRate();
}