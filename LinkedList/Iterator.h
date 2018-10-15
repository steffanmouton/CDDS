#pragma once
#include "Node.h"

template <typename T>
class Iterator
{
private:
	Node<T> *current;

public:
	Iterator();
	Iterator(Node<T>*);
	//make iterator move to NEXT
	Iterator<T> operator++();
	//dereference information of node
	T operator*();
	bool operator==(const Iterator<T>&) const;
	bool operator!=(const Iterator<T>&) const;
};

template<typename T>
Iterator<T>::Iterator()
{
	current = nullptr;
}

template<typename T>
Iterator<T>::Iterator(Node<T>* node)
{
	current = node;
}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	current = current->next;
	return *this;
}

template<typename T>
T Iterator<T>::operator*()
{
	return this->current->info;
}

template<typename T>
bool Iterator<T>::operator==(const Iterator<T>&) const
{
	return (this->current->info == Iterator<T>->current-info);
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>&) const
{
	return (this->current != Iterator<T>->current);
}