#ifndef STACK_H
#define STACK_H

#include "ItemType.h"

struct Node
{
	ItemType item;
	Node* next;
};

class Stack
{
public:
	Stack();
	~Stack();

	bool IsEmpty();
	bool IsFull();
	bool Push(ItemType item);
	ItemType Pop();
	ItemType Top();

private:
	Node* head;
	int listsize;
};

#endif // !STACK_H