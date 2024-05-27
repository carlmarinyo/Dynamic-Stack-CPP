#include "dynamicstack.h"
#include <iostream>
using namespace std;

void DynamicStack::push(int num) {
	StackNode *newNode; //creates a pointer
	newNode = new StackNode; // pointer uses new to create a node
	newNode->value = num; //assign the value of the node to the given num
	
	if (isEmpty()) {
		top = newNode;   // if stack is empty during the node creation, the node will be pointed as head
		top->next = NULL; 
	}
	
	else {
		newNode->next = top; //if there are already nodes existing, it will point to the previous top as the movements goes from top to bottom
		top = newNode; //the new node will now be pointed as the top
	}
}

void DynamicStack::pop(int &num) {
	StackNode *temp; 
	
	num = top->value; //gets the current value of node to be passed by reference
	temp = top->next; //temp pointer points to the next node (the one before the current)
	delete top; 
	top = temp; //points top to what temp is pointing (the node before the current deleted)
}

bool DynamicStack::isEmpty() {
	bool status;
	if (!top) status = true; //if top is zerovalue, then stack is empty
	else status = false;
	return status;
}
