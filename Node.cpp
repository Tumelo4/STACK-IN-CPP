#include "Node.h"

// Node class constructor
Node::Node(int data)
{
	this->data = data;
}
// Destructor
Node::~Node()
{}
// return data
int Node::getData()
{
	return this->data;
} 
