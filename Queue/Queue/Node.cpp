#include "Node.h"

Node::Node(int inData) {
	data = inData;
}

int Node::GetData() const {
	return data;
}
void Node::SetData(int inData) {
	data = inData;
}

Node* Node::GetNextPointer() const {
	return nextPointer;
}
void Node::SetNextPointer(Node* inNodePtr) {
	nextPointer = inNodePtr;
}