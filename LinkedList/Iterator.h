#pragma once
#include "Node.h"

template <typename T>
class Iterator
{
private:
	Node<T> *current;

public:
	Iterator();
	Iterator(Node<T>);
	//make iterator move to NEXT
	Iterator<T> operator++();
	//dereference information of node
	Iterator<T> operator*();
	bool operator==(const Iterator<T>&) const;
	bool operator!=(const Iterator<T>&) const;
};