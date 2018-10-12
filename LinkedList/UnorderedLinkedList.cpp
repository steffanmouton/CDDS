#include "UnorderedLinkedList.h"

template<typename T>
bool UnorderedLinkedList<T>::Search(const T &) const
{
	Node<T>* check = first;
	if (first->info = T)
	{
		return true;
	}

	return false;
}

template<typename T>
void UnorderedLinkedList<T>::InsertFirst(const T &)
{
	Node<T>* temp = new Node<T>;
	temp->info = T;
	temp->next = LinkedListType<T>.first;
	LinkedListType<T>.first = temp;
}

template<typename T>
void UnorderedLinkedList<T>::InsertLast(const T &)
{
	Node<T>* temp = new Node<T>;
	temp->info = T;
	temp->next = nullptr;
	LinkedListType<T>.last->next = temp;
	LinkedListType<T>.last = temp;
}

template<typename T>
void UnorderedLinkedList<T>::DeleteNode(const T &)
{
	
}