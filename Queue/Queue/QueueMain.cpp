//Notes: This was my project from C++ 2 where we created a custom stack and queue
//For this projects purpose I used the standard library as I was asked to
//But had to use some of the functionality from the custom classes to get the queue to display
#include "Node.h"
#include "StackQueue.h"
#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue <int> myQueue; //the queue used for the standard library
	Queue queue; //the queue needed for display purposes that is a custom queue
	int inputInt; //Collect input
	int choice = 99; //Break out of loop
	do {
		//Menu(UI)
		cout << "\nMenu to manipulate string queue:\n";
		cout << "1: To push an string on queue\n";
		cout << "2: To pop an string from queue\n";
		cout << "3: To display size of queue info\n";
		cout << "4: To display elements in queue\n";
		cout << "99: Exit Program\n";
		cout << "Please enter your choice (#): ";
		cin >> choice;

		switch (choice) {
		case 1: //Entering input into the queue
			cout << "\nEnter an string to Queue: ";
			cin >> inputInt;
			//add to standard library queue
			myQueue.push(inputInt);
			//add to custom queue for display function to have a reference
			queue.PushToQueue(inputInt);

			break;
		case 2: //Removing input from the queue
			myQueue.front();
			//pop from standard library queue
			myQueue.pop();
			//pop from custom queue for display function purposes
			queue.PopFromQueue();
			break;
		case 3: //Displaying the queue
			//Check if queue is empty first
			if (!myQueue.empty())
			{
				cout << "The amount of values in the queue are: " << myQueue.size() << endl;
			}
			else
				cout << "Queue is empty." << endl;
			break;
		case 4: //Display what is in the queue
			//use our custom display function which was why we had to push and pop twice
			queue.DisplayQueue();
		}

	} while (choice != 99);

	cout << "Ending Program\n";
	system("pause");
	return 0;
}