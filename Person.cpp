#include "Person.h"

Person::Person()
{
	name = "";
	phone_number="";
}

Person::Person(string name, string phonenumber)
{
	this->name = name;
	this->phone_number = phonenumber;
}

string Person::getName()
{
	return name;
}
string Person::getPhone()
{
	return phone_number;
}
void Person::setName(string name)
{
	this->name = name;
}
void Person::setPhone(string phone)
{
	phone_number = phone;
}

std::ostream & operator<<(std::ostream &os, Person& per)
{
	os<<std::setw(10) << std::left << per.getName().substr(0,10)<< " "<<per.getPhone();
	return os;
}