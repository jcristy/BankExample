#include "Person.h"
#include <ostream>
#include <iomanip>

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

			///<summary>Makes a deposit</summary>
			///<param name="amount">The amount to deposit</param>
			void deposit(double amount);

			///<summary>Gets the balance</summary>
			
			///<returns>The Owner</returns>
			Person getOwner();

			///<returns>The balance</returns>
			double getBalance();

			///<summary>adds interest to the account</summary>
			void applyInterest();
			
			///<summary></summary>
			///<returns>The account number</returns>
			long getAccountNumber();

			///<summary>change the interest rate for all accounts</summary>
			///<param name="newInterestRate">The new interest rate</param>
			static void changeInterestRate(double newInterestRate);
			
			///<summary>The interest rate for all accounts</summary>
			///<returns>The interest rate for all accounts</returns>
			static double getInterestRate();

			friend std::ostream & operator<<(std::ostream &os, Account& act);
};