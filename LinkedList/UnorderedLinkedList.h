#pragma once
#include "List.h"

template<typename T>
class UnorderedLinkedList
{
public:
	bool Search(const T&) const;
	void InsertFirst(const T&);
	void InsertLast(const T&);
	void DeleteNode(const T&);
};