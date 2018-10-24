#pragma once

template <typename T>
struct Node
{
	//A node holds only two variables. Info of a given type,
	//and a pointer to the next node of the list.
	T info;
	Node<T>* next;
	Node<T>* prev;

	// default constructor copying a previous node
	Node(Node<T> &node) 
	{
		info = node.info;
		next = node.next;
		prev = node.prev;
	}

	Node(T i, Node<T>* n, Node<T> *p)
	{
		info = i;
		next = n;
		prev = p;
	}

	//Overloaded assignment operator
	Node<T> operator = (const Node<T> rhs)
	{
		this->info = rhs.info;
		this->next = rhs.next;
		this->prev = rhs.prev;

		return this;
	}

	//Swap Method
	
};