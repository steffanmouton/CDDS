#include <iostream>
#include "UnorderedLinkedList.h"

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

	numbers->BubbleSort(1);

	numbers->Print();
	numbers2->Print();

	// 5 10 15 20
	// 15 5 10 20
}