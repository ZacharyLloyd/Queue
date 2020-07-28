#include "StackQueue.h"
#include <iostream>
//Constructor
Stack::Stack() {
	bottomStack = nullptr;
	topStack = nullptr;
	count = 0;
}
//Constructor
Queue::Queue() {
	bottomQueue = nullptr;
	topQueue = nullptr;
	count = 0;
}
//Adding to the stack
void Stack::PushToStack(int inData) {
	Node* nPtr = new Node(inData);
	nPtr->SetNextPointer(nullptr);
	if (count == 0) {
		topStack = nPtr;
		bottomStack = nPtr;
		count = 1;
	}
	else {
		topStack->SetNextPointer(nPtr);
		topStack = nPtr;
		count++;
	}
}
//Removing from the stack
int Stack::PopFromStack() {
	Node* nPtr = bottomStack;
	int topItem;
	if (count == 0) return 999;
	if (count == 1) {
		topItem = nPtr->GetData();
		topStack = bottomStack = nullptr;
		count = 0;
		return topItem;
	}

	for (int i = 0; i < (count - 2); i++) {
		nPtr = nPtr->GetNextPointer();
	}
	topItem = (nPtr->GetNextPointer())->GetData();
	nPtr->SetNextPointer(nullptr);
	topStack = nPtr;
	count--;
	return topItem;
}
//Displaying the stack
void Stack::DisplayStack() {
	Node* nPtr;
	if (count != 0) {
		std::cout << "\n# of items on stack = " << count << std::endl;
		std::cout << "Items on stack (from bottom to top):" << std::endl;
		nPtr = bottomStack;
		while (nPtr != nullptr) {
			std::cout << nPtr->GetData() << ' ';
			nPtr = nPtr->GetNextPointer();
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "\nStack is empty" << std::endl;
	}
}
//Adding to the Queue
void Queue::PushToQueue(int inData) {
	Node* nPtr = new Node(inData);
	nPtr->SetNextPointer(nullptr);

	if (count == 0) {
		topQueue = nPtr;
		bottomQueue = nPtr;
		count = 1;
	}
	else {
		topQueue->SetNextPointer(nPtr);
		topQueue = nPtr;
		count++;
	}
}
//Removing from the Queue
int Queue::PopFromQueue() {
	Node* nPtr = bottomQueue;
	int btmItem;
	if (count == 0) return 999;

	btmItem = nPtr->GetData();
	if (count == 1) {
		topQueue = bottomQueue = nullptr;
		count = 0;
	}
	else {
		bottomQueue = nPtr->GetNextPointer();
		count--;
	}
	return btmItem;
}
//Displaying the Queue
void Queue::DisplayQueue() {
	Node* nPtr;
	if (count != 0) {
		std::cout << "\n# of items on queue = " << count << std::endl;
		std::cout << "Items on queue (from left to right):" << std::endl;
		nPtr = bottomQueue;
		while (nPtr != nullptr) {
			std::cout << nPtr->GetData() << ' ';
			nPtr = nPtr->GetNextPointer();
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "\nQueue is empty" << std::endl;
	}
}