#include "Stack.h"

int main()
{
	Stack* stack = new Stack();
	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(4);
	stack->push(5);
	cout<<*stack<<"\n";

	while(!stack->isEmpty())
	{
		int data = stack->pop();
		if (!stack->isEmpty())
		{
			cout<<data<<",";
		}
		else
		{
			cout<<data;
		}
	}
	cout<<"\n";
	cout<<"Stack is empty: "<<stack->pop()<<"\n";
	return 0;
} 
