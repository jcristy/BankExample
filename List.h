

#include <iostream>
#include <fstream>
#include <string>
#include "Account.h"

using namespace std;



typedef Account LinkedStorage;



struct Node
{
	LinkedStorage data;
	Node* next;
};



class List
{

private:
	Node* m_head;
	int m_size;
	
	Node* LastNode();
	
public:
	List();
	
	LinkedStorage getIndex(int index);
	
	bool addElement(LinkedStorage elem);
	
	int size();
	
	void print();

};

List::List()
{
	cout << "List()" << endl;
	
	m_head = NULL;
	m_size = 0;
}

// throws exception if index is invalid
LinkedStorage List::getIndex(int index)
{
	if ( index < 0 )
		throw "Invalid Index";

	Node* trace = m_head;
		
	int i = 0;
	for (i ; i < index && trace && trace->next ; i++)
	{
		trace = trace->next;
	}
	
	//cout << "i: " <<  i << endl;
	
	if ( i < index )
		throw "Invalid Index";
	
	return trace->data;
}


Node* List::LastNode()
{
	Node* trace = m_head;
	
	while (trace && trace->next)
		trace = trace->next;
	
	/*
	if ( trace && trace->data )
		cout << trace->data << endl;
	else
		cout << "NULL" << endl;
	//*/
		
	return trace;
}


bool List::addElement(LinkedStorage elem)
{
	cout << "addElement " << elem << endl;
	
	Node* temp = new Node();
	
	temp->next = NULL;
	temp->data = elem;
	
	Node* last = LastNode();
	
	if ( last )
		last->next = temp;
	else
		m_head = temp;
	
	m_size++;
	return true;
}

int List::size()
{
	return m_size;
}

