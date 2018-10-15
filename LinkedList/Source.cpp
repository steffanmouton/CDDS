#include <iostream>
#include "UnorderedLinkedList.h"

//make linked list
//have iterators
//list knows first and last

int main()
{
	//Node<int>* n1 = new Node<int>;
	//Node<int>* n2 = new Node<int>;

	//n1->info = 2;
	//n1->next = n2;
	//n2->info = 5;
	//n2->next = nullptr;
	//
	//Iterator<int> myIt(n1);
	//++myIt;

	//int a = *myIt; // a should = 5;

	UnorderedLinkedList<int> *numbers = new UnorderedLinkedList<int>();

	numbers->InsertFirst(5);
	numbers->InsertLast(10);
	numbers->InsertFirst(15);
	numbers->InsertLast(20);
	numbers->DeleteNode(15);

	//should now be 5 10 20

	numbers->Print();
}