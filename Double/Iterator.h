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
	
	Iterator<T> operator++(); //make iterator move to NEXT

	Iterator<T> operator--(); //make iterator move to PREV
	
	T operator*(); //dereference information of node

	bool operator==(const Iterator<T>&) const;
	bool operator!=(const Iterator<T>&) const;
};

template<typename T>
Iterator<T>::Iterator()
{
	//Constructor, setting an iterator pointing to current
	current = nullptr;
}

template<typename T>
Iterator<T>::Iterator(Node<T>* node)
{
	//Constructor, setting iterator pointing to a given node
	current = node;
}

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	//make an iterator move to the next node in a list
	current = current->next;
	return *this;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	//make an iterator move to the previous node in a list
	current = current->prev;
	return *this;
}

template<typename T>
T Iterator<T>::operator*()
{
	//overloading dereference operator, returns the info at pointed node
	return this->current->info;
}

template<typename T>
bool Iterator<T>::operator==(const Iterator<T>&) const
{
	//compares iterators by the info of the nodes they point to
	return (this->current->info == Iterator<T>->current-info);
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>&) const
{
	//compares iterators by the info of the nodes they point to
	return (this->current != Iterator<T>->current);
}