#include "List.h"

template<typename T>
void LinkedListType<T>::CopyList(const LinkedListType<T>&)
{
}

template<typename T>
const LinkedListType<Type>& LinkedListType<T>::operator=(const LinkedListType<T>&)
{
	// TODO: insert return statement here
}

template<typename T>
void LinkedListType<T>::InitializeList()
{
}

template<typename T>
bool LinkedListType<T>::IsEmptyList() const
{
	return false;
}

template<typename T>
void LinkedListType<T>::Print() const
{
}

template<typename T>
int LinkedListType<T>::Length() const
{
	return 0;
}

template<typename T>
void LinkedListType<T>::DestroyList()
{
}

template<typename T>
T LinkedListType<T>::Front() const
{
	return T();
}

template<typename T>
T LinkedListType<T>::Back() const
{
	return T();
}

template<typename T>
Iterator<T> LinkedListType<T>::Begin()
{
	return Iterator<T>();
}

template<typename T>
Iterator<T> LinkedListType<T>::End()
{
	return Iterator<T>();
}

template<typename T>
LinkedListType<T>::LinkedListType()
{
	count = 0;
	first = nullptr;
	last = nullptr;
}

template<typename T>
LinkedListType<T>::LinkedListType(const LinkedListType<T>)
{
}

template<typename T>
LinkedListType<T>::~LinkedListType()
{
}
