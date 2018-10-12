#pragma once
#include "Iterator.h"

template <typename T>
class LinkedListType
{
protected:
	int count;
	Node<T>* first;
	Node<T>* last;

private:
	void CopyList(const LinkedListType<T>&);

public:
	const LinkedListType<Type>& operator=(const LinkedListType<T>&);
	void InitializeList();
	bool IsEmptyList() const;
	void Print() const;
	int Length() const;
	void DestroyList();
	T Front() const;
	T Back() const;
	virtual bool Search(const T&) const = 0;
	virtual void InsertFirst(const T&) = 0;
	virtual void InsertLast(const T&) = 0;
	virtual void DeleteNode(const T&) = 0;
	Iterator<T> Begin();
	Iterator<T> End();
	LinkedListType();
	LinkedListType(const LinkedListType<T>);
	~LinkedListType();
};