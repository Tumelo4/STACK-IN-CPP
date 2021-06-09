// CREATING NODE CLASS HEADER
#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node
{
public:
	Node(int data);
	~Node();
	int getData();
	Node* next;
private:
	int data;
	
};

#endif