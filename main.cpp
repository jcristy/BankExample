//#include "List.h"
#include "Account.h"
#include <iostream>

int main()
{
	Person p("Alan von Baines","757-666-6666");
	Account a(500.05,p);
	std::cout << a << std::endl;
	
}