#pragma once
#include "List.h"

template<typename T>
class UnorderedLinkedList : public LinkedListType<T>
{
public:
	bool Search(const T& item) const override
	{
		Node<T>* check = this->first;
		for (int i = 0; i < this->count; i++) // goes through every place in list
		{
			if (check->info == item)
			{
				return true;
			}
			else
			{
				check = check->next;
			}
		}

		return false;
	}
	void InsertFirst(const T& item) override
	{
		this->count++;
		Node<T>* temp = new Node<T>{ item, this->first };				
		this->first = temp;		
	}
	void InsertLast(const T& item) override
	{
		this->count++;
		Node<T>* temp = new Node<T>{ item, this->first };

		if (this->count == 1) //if one item in list, set first and last to that item
		{
			this->last = temp;
			this->first = temp;
		}
		else if (this->count == 2) //if two items, set original to first, new to last
		{
			temp->next = nullptr;
			this->last= temp;
			this->first->next = temp;
			
		}
		else //if more than two items, only adjust last to be temp
		{
			temp->next = nullptr;
			this->last->next = temp;
			this->last = temp;
		}
	}
	void DeleteNode(const T& item) override
	{
		Node<T>* eraser = this->first;
		Node<T>* trail = this->first;

		if (this->count == 0)
		{
			std::cout << "List is empty" << std::endl;
		}
		else if (this->count == 1)
		{
			delete eraser;
			this->first = nullptr;
			this->last = nullptr;
			this->count--;
		}
		else if (this->count > 1)
		{
			for (int i = 0; i < this->count; i++)
			{
				eraser = eraser->next;
				if (trail->info == item && i == 0)
				{
					trail->next = this->first->next;
					this->first = trail;
					delete eraser;
					this->count--;
					break;
				}
				else if (eraser->info == item && i > 0 && i < this->count)
				{
					trail = eraser->next;
					delete eraser;
					this->count--;
					break;
				}
				else if (eraser->info == item && i == this->count)
				{
					trail->next = nullptr;
					this->last = trail;
					delete eraser;
					this->count--;
					break;
				}
				trail = trail->next;
			}
		}

		//Iterator<T>* eraser = new Iterator<T>(this->first);
		//Iterator<T>* trail = new Iterator<T>(this->first);		
		//while (*eraser != (T)item)
		//{
		//	eraser++;
		//	trail++;
		//}
		//eraser++;
		//trail->current->next = eraser->current->next;
		//delete eraser;
	}
};