#include "Stack.h"

Stack::Stack()
{
	top = NULL;
}
Stack::~Stack()
{
	while(top)
	{
		Node* tmp = top;
		top = top->next;
		delete tmp;
		tmp = NULL;
	}
}

void Stack::push(int data)
{
	if (top)
	{
		Node* newNode = new Node(data);
		newNode->next = top;
		top = newNode;
	}
	else
	{
		top = new Node(data);
	}
}

int Stack::pop()
{
	if(top)
	{
		int data = top->getData();
		top = top->next;
		return data;
	}
	return -1;
}

bool Stack::isEmpty()
{
	return (top == NULL);
}

ostream& operator<<(ostream &os, Stack&obj)
{
	for(Node* curr = obj.top; curr!= NULL; curr=curr->next)
	{
		if(curr->next != NULL)
		{
			os<<curr->getData()<<",";
		}
		else os<<curr->getData();
	}
	return os;
}

