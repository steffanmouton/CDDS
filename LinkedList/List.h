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
	const LinkedListType<T>& operator=(const LinkedListType<T>&);
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
	LinkedListType(const LinkedListType<T>&);
	~LinkedListType();
};


template<typename T>
void LinkedListType<T>::CopyList(const LinkedListType<T>&)
{

}

template<typename T>
const LinkedListType<T>& LinkedListType<T>::operator=(const LinkedListType<T>&)
{
	// TODO: insert return statement here
}

template<typename T>
void LinkedListType<T>::InitializeList()
{
	count = 0;
	first = nullptr;
	last = nullptr;
	first->next = last;
}

template<typename T>
bool LinkedListType<T>::IsEmptyList() const
{
	return (count == 0);
}

template<typename T>
void LinkedListType<T>::Print() const
{
	if (IsEmptyList())
	{
		std::cout << "List is empty";
		return;
	}
	else
	{
		Node<T>* printer = first;
		while (printer != nullptr)
		{
			std::cout << printer->info << std::endl;
			printer = printer->next;
		}
	}
	std::cout << std::endl;
}

template<typename T>
int LinkedListType<T>::Length() const
{
	return this->count;
}

template<typename T>
void LinkedListType<T>::DestroyList()
{
	if (IsEmptyList())
	{
		std::cout << "List is empty";
		return;
	}
	else
	{
		Node<T>* destroyer(first);
		while (destroyer != nullptr)
		{
			Node<T>* trail = destroyer;
			destroyer = destroyer->next;
			delete trail;
			this->count--;
		}
	}
}

template<typename T>
T LinkedListType<T>::Front() const
{
	return first->info;
}

template<typename T>
T LinkedListType<T>::Back() const
{
	return last->info;
}

template<typename T>
Iterator<T> LinkedListType<T>::Begin()
{
	return Iterator<T>(first);
}

template<typename T>
Iterator<T> LinkedListType<T>::End()
{
	return Iterator<T>(last);
}

template<typename T>
LinkedListType<T>::LinkedListType()
{
	count = 0;
	first = nullptr;
	last = nullptr;
}

template<typename T>
LinkedListType<T>::LinkedListType(const LinkedListType<T>&)
{
}

template<typename T>
LinkedListType<T>::~LinkedListType()
{
	this->DestroyList;
}
