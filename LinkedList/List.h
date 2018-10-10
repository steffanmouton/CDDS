#pragma once
#include "Iterator.h"

template <typename T>
class List
{
	void PushFront(const T value&);
	void PushBack(const T value&);
	void Insert(Iterator<T> myIt, const T value&);
	Iterator<T> Begin();
	Iterator<T> End();
	Node<T> First();
	Node<T> Last();
	void initializeList();
};


