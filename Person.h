#include <string>

using std::string;

class Person{
	private:
		string name;
		string phone_number;
	public:
		///<summary>The default constructor</summary>
		Person();

		///<summary>The constructor</summary>
		///<params name="name">The person's name</params>
		Person(string name, string phonenumber);

		///<summary></summary>
		///<returns>the person's name</returns>
		string getName();

		///<summary></summary>
		///<returns>The person's phone number</returns>
		string getPhone();

		///<summary>Changes the person's name</summary>
		///<params name="name">the new name</params>
		void setName(string name);

		///<summary>Changes the person's phone number</summary>
		///<params name="phone">the new phone number</params>
		void setPhone(string phone);
		
	};