#pragma once
#include "Iterator.h"

template<typename T>
class List
{
protected:
	int count;
	Node<T>* first;
	Node<T>* last;

public:
	void PushFront(T value);
	void PushBack(T value);
	void Insert(Iterator<T>, T value);
	Iterator<T> Begin();
};