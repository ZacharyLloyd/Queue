#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node(int); //Constructor
	void SetData(int); //Set data member
	int GetData() const; //Get data member
	void SetNextPointer(Node*); //Set pointer to next Node
	Node* GetNextPointer() const; //Get pointer to next Node
private:
	int data; //Data stored in this Node
	Node* nextPointer; //Pointer to another object of same type
}; //End class Node
#endif //NODE_H