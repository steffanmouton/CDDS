#pragma once
#include "List.h"

template<typename T>
class UnorderedLinkedList : public LinkedListType<T>
{
public:
	bool Search(const T& item) const override
		// goes through every node in list and returns true if item is found
	{
		Node<T>* check = this->first;
		for (int i = 0; i < this->count; i++) 
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
	void InsertFirst(const T& item) override //Insert new node at first place in list
	{
		this->count++;
		Node<T>* temp = new Node<T>{ item, this->first, nullptr };	
		this->first = temp;		
		
		if (this->count > 1)
			temp->next->prev = temp;
	}
	void InsertLast(const T& item) override //Insert a new node at the last place in list
	{
		this->count++;
		Node<T>* temp = new Node<T>{ item, nullptr, this->last };

		if (this->count == 1) //if one item in list, set first and last to that item
		{
			this->last = temp;
			this->first = temp;
		}
		else if (this->count == 2) //if two items, set original to first, new to last
		{
		
			this->last= temp;
			this->first->next = temp;
			
		}
		else //if more than two items, only adjust last to be temp
		{
			
			this->last->next = temp;
			this->last = temp;
		}
	}
	void DeleteNode(const T& item) override
	{
		//create lead and trailing pointers
		Node<T>* lead = this->first;
		Node<T>* trail = this->first;

		
		if (this->count == 0) //if list is empty, say so
		{
			std::cout << "List is empty" << std::endl;
		}
		//if only one node, reset first and last pointers to null
		else if (this->count == 1 && lead->info == item) 
		{
			delete lead;
			this->first = nullptr;
			this->last = nullptr;
			this->count--;
		}
		//if more than one node, check to see if node containing desired value
		//is first, last, or in middle of list. Then delete and readjust pointers
		//accordingly
		else if (this->count > 1)
		{
			for (int i = 0; i < this->count; i++)
			{
				lead = lead->next; //moves checking pointer forward
				if (trail->info == item && i == 0)
				{
					this->first = lead;
					this->first->prev = nullptr;
					delete trail;
					this->count--;
					break;

				}
				else if (lead->info == item && i >= 0 && i < this->count)
				{
					trail->next = lead->next;
					delete lead;
					this->count--;

					if (trail->next != nullptr)
						trail->next->prev = trail;

					break;
				}
				else if (lead->info == item && i == this->count)
				{
					trail->next = nullptr;
					this->last = trail;
					delete lead;
					this->count--;
					break;
				}
				trail = trail->next; //trail pointer catches up to checking pointer
			}
		}
	}

	void BubbleSort(const bool ascending) override
	{
		Node<T>* check1 = this->first;
		Node<T>* check2;

		for (int i = 0; i < this->count; i++, check1++)
		{
			check2 = this->first;

			for (int j = 0; j < this->count; j++, check2++)
			{

				if (ascending)
				{
					if (check1->info < check2->info)
					{
						Node<T>* temp = new Node<T>{ check1->info ,check1->next, check1->prev };

						temp->next = check1->next;
						temp->prev = check1->prev;

						check1->next = check2->next;
						check1->prev = check2->prev;

						check2->next = temp->next;
						check2->prev = temp->prev;

						delete temp;
					}
				}
				else
				{
					if (check1->info > check2->info)
					{
						Node<T>* temp = new Node<T>{ check1->info ,check1->next, check1->prev };

						temp->next = check1->next;
						temp->prev = check1->prev;

						check1->next = check2->next;
						check1->prev = check2->prev;

						check2->next = temp->next;
						check2->prev = temp->prev;

						delete temp;
					}
				}
			}
		}
	}
};