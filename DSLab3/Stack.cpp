#include "Stack.h"

Stack::Stack()
{
	head = NULL;
	listsize = 0;
}

Stack::~Stack()
{
	Node* temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

bool Stack::IsEmpty()
{
	if (head == NULL)
		return true;
	return false;
}

bool Stack::IsFull()
{
	Node* temp;
	try
	{
		temp = new Node;
		delete temp;
		return false;
	}
	catch (std::bad_alloc exception)
	{
		return true;
	}
}

bool Stack::Push(ItemType item)
{
	if (!IsFull())
	{
		Node* temp;
		temp = new Node;
		temp->item = item;
		temp->next = head;
		head = temp;
		return true;
	}
	return false;
}

ItemType Stack::Pop()
{
	if (!IsEmpty())
	{
		Node* temp;
		temp = head;
		head = head->next;
		delete temp;
	}
}

ItemType Stack::Top()
{
	if (!IsEmpty)
	{
		return head->item;
	}
}