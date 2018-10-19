#include <iostream>
#include "UnorderedLinkedList.h"

//make linked list
//have iterators
//list knows first and last

int main()
{
	UnorderedLinkedList<int> *numbers = new UnorderedLinkedList<int>();
	UnorderedLinkedList<int> *numbers2 = new UnorderedLinkedList<int>();

	numbers->InsertFirst(5);
	numbers->InsertLast(10);
	numbers->InsertFirst(15);
	numbers->InsertLast(20);

	*numbers2 = *numbers;

	numbers->Print();
	numbers2->Print();

	// 15 5 10 20
	// 15 5 10 20

	numbers->DeleteNode(20);
	numbers2->DeleteNode(15);

	numbers->Print();
	numbers2->Print();

	//15 5 10
	//5 10 20
}