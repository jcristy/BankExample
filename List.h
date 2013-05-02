

#include <iostream>
#include <fstream>
#include <string>
#include "Account.h"

using namespace std;



typedef double LinkedStorage;



struct Node
{
	LinkedStorage data;
	Node* next;
};



class List
{
public:
	Node* m_head;
	
	Node* LastNode();

public:
	List();
	
	LinkedStorage getIndex(int index);
	
	bool addElement(LinkedStorage elem);
	
	
	void print();
	

};

List::List()
{
	cout << "List()" << endl;
	
	
	m_head = NULL;
	
}


Node* List::LastNode()
{
	Node* trace = m_head;
	
	while (trace && trace->next)
		trace = trace->next;
	
	if ( trace && trace->data )
		cout << trace->data << endl;
	else
		cout << "NULL" << endl;
		
	return trace;
}


bool List::addElement(LinkedStorage elem)
{
	cout << "addElement " << elem << endl;
	
	
	Node* temp = new Node();
	
	temp->next = NULL;
	temp->data = elem;
	
	Node* last = LastNode();
	
//	if ( last )
//		last->next = temp;
//	else
	
	m_head->next = temp;
	
	


	return true;
}

