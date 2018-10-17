#include <iostream>
#include "UnorderedLinkedList.h"

//make linked list
//have iterators
//list knows first and last

int main()
{
	UnorderedLinkedList<int> *numbers = new UnorderedLinkedList<int>();

	numbers->InsertFirst(5);
	numbers->InsertLast(10);
	numbers->InsertFirst(15);
	numbers->InsertLast(20);
	
	numbers->Print();
	//expected result is 15 5 10 20

	numbers->DeleteNode(15);
	numbers->DeleteNode(20);
	//expected result is 5
	numbers->Print();
}