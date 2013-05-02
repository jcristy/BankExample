


#include <iostream>
#include <fstream>
#include <string>
#include "List.h"

using namespace std;





int main()
{

	cout << "Hello" << endl;
	
	List L;
	
	L.addElement(5.5);
	L.addElement(6.6);
	L.addElement(7.7);
	L.addElement(8.8);
	
	
	for (int i = 0 ; i < 10 ; i++)
	{
		try
		{
			cout << i << " " ;
			cout << L.getIndex(i) << endl;
		}
		catch (...)
		{
			cout << "error on " << i << endl;
		}
	}

	return 0;
}



