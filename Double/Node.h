#pragma once

template <typename T>
struct Node
{
	//A node holds only two variables. Info of a given type,
	//and a pointer to the next node of the list.
	T info;
	Node<T>* next;
	Node<T>* prev;

	Node(Node<T> &node) // default constructor copying a previous node
	{
		info = node.info;
		next = node.next;
		prev = node.prev;
	}

	// TODO : Overloaded assignment operator

	// TODO : Add Swap Method
};