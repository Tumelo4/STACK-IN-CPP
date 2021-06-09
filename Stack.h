#ifndef STACK_H
#define STACK_H
#include "Node.h"

class Stack
{
 public:
 	Stack();
 	~Stack();
 	void push(int data);
 	int pop();
 	bool isEmpty();
 	friend ostream& operator<<(ostream &, Stack&);
 private:
 	Node* top;
};

 #endif 
