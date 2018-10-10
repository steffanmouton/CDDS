#include "Iterator.h"

template<typename T>
Iterator<T> Iterator<T>::operator++()
{
	return current = current->next;
}

template<typename T>
Iterator<T> Iterator<T>::operator*()
{
	return this->current->info;
}

template<typename T>
bool Iterator<T>::operator==(const Iterator<T>&) const
{
	return (this->current == Iterator<T>->current);
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator<T>&) const
{
	return (this->current != Iterator<T>->current);
} 
