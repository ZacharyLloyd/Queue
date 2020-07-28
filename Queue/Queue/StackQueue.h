#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H
#include "Node.h"

class Stack {
public:
	Stack(); //Constructor
	void PushToStack(int); //Add to Stack
	int PopFromStack(); //Remove from Stack
	void DisplayStack(); //Display Stack
private:
	Node* bottomStack; //Pointer for node (bottom of Stack)
	Node* topStack; //Pointer for node (top of Stack)
	int count; //Counter for input
}; //End of Stack class

class Queue {
public:
	Queue(); //Constructor
	void PushToQueue(int); //Add to Queue
	int PopFromQueue(); //Remove from Queue
	void DisplayQueue(); //Display Queue
private:
	Node* bottomQueue; //Pointer for node (bottom of Queue)
	Node* topQueue; //Pointer for node (top of Queue)
	int count; //Counter for input
}; //End of Queue class
#endif //STACK_QUEUE_H